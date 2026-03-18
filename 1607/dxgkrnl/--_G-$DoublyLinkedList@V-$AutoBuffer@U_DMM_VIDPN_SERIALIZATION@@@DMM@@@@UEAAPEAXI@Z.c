/*
 * XREFs of ??_G?$DoublyLinkedList@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAAPEAXI@Z @ 0x1C00344D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@?$DoublyLinkedList@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ @ 0x1C0034860 (-Clear@-$DoublyLinkedList@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`vftable';
  DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Clear();
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
