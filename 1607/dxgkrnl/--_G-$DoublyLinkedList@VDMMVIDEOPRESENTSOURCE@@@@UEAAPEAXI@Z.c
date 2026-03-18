/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@UEAAPEAXI@Z @ 0x1C0033220
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ @ 0x1C001D35C (-Clear@-$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::Clear((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
