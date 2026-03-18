/*
 * XREFs of ??_GDoublyLinkedListElement@@UEAAPEAXI@Z @ 0x1C00337A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DoublyLinkedListElement *__fastcall DoublyLinkedListElement::`scalar deleting destructor'(
        DoublyLinkedListElement *this,
        char a2)
{
  *(_QWORD *)this = &DoublyLinkedListElement::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
