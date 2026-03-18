/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNTARGET@@@@UEAAPEAXI@Z @ 0x1C002C490
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAAXXZ @ 0x1C0004668 (-Clear@-$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNTARGET>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  DoublyLinkedList<DMMVIDPNTARGET>::Clear((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
