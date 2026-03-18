/*
 * XREFs of ??_GDoublyLinkedListElement@@UEAAPEAXI@Z @ 0x1C002B920
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

DoublyLinkedListElement *__fastcall DoublyLinkedListElement::`scalar deleting destructor'(
        DoublyLinkedListElement *this,
        char a2)
{
  *(_QWORD *)this = &SetElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
