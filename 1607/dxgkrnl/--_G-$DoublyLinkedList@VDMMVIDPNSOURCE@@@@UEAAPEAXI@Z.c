/*
 * XREFs of ??_G?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@UEAAPEAXI@Z @ 0x1C0034550
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ @ 0x1C00022B0 (-Clear@-$DoublyLinkedList@VDMMVIDPNSOURCE@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNSOURCE>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDPNSOURCE>::`vftable';
  DoublyLinkedList<DMMVIDPNSOURCE>::Clear((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
