/*
 * XREFs of ??1?$Queue@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C0034CEC
 * Callers:
 *     ??_G?$Queue@V?$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@UEAAPEAXI@Z @ 0x1C0034DC0 (--_G-$Queue@V-$AutoBuffer@U_DMM_MONITOR_SERIALIZATION@@@DMM@@@@UEAAPEAXI@Z.c)
 *     ?SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV?$AutoBuffer@U_DMM_MONITORSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01AA90C (-SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET@@QEBAJPEAV-$AutoBuffer@U_DMM_MONITORSET_SER.c)
 * Callees:
 *     <none>
 */

void __fastcall Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>(
        _QWORD *a1)
{
  _QWORD *v1; // rcx

  *a1 = &Queue<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::`vftable';
  v1 = a1 + 1;
  *v1 = &DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::`vftable';
  DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Clear((__int64)v1);
}
