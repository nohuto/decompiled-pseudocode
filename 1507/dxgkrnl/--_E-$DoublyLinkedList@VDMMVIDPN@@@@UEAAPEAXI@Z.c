/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPN@@@@UEAAPEAXI@Z @ 0x1C002B670
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ @ 0x1C002B980 (-Clear@-$DoublyLinkedList@VDMMVIDPN@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPN>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDPN>::`vftable';
  DoublyLinkedList<DMMVIDPN>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
