#ifndef SIMPLE_LISTS
#define SIMPLE_LISTS

#include <stdio.h>
#include <stdlib.h>

// Node is a single cell of data in a linked list
typedef struct Node{
    int data;
    Node *next;
}Node;

// Simple linked list
typedef struct linkedList{
    Node *head;
    Node *tail;
    size_t size;
}LinkedList;

void init(); // initializes an empty list
size_t length(LinkedList list); // returns the size of the list
void push(linkedList list, Node *element); // pushes a Node
void pushn(linkedList list, Node *element, int index); // pushes a Node to a specific index in the list
void pop(Node *tail); // pops the last element

/*---------- got bored will finish this later ----------*/

#endif