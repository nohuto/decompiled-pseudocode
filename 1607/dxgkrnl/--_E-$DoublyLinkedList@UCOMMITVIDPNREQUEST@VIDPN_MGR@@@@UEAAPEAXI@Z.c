/*
 * XREFs of ??_E?$DoublyLinkedList@UCOMMITVIDPNREQUEST@VIDPN_MGR@@@@UEAAPEAXI@Z @ 0x1C0033160
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ @ 0x1C0034860 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
