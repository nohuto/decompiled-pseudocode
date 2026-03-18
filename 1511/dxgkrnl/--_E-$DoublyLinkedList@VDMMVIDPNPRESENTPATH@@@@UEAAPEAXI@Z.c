/*
 * XREFs of ??_E?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@UEAAPEAXI@Z @ 0x1C002C070
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ @ 0x1C0008708 (-Clear@-$DoublyLinkedList@VDMMVIDPNPRESENTPATH@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMMVIDPNPRESENTPATH>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<DMMVIDPNPRESENTPATH>::`vftable';
  DoublyLinkedList<DMMVIDPNPRESENTPATH>::Clear((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
