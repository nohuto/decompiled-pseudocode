/*
 * XREFs of ??1?$Queue@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAA@XZ @ 0x1C00343E4
 * Callers:
 *     ??_G?$Queue@V?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAAPEAXI@Z @ 0x1C0034650 (--_G-$Queue@V-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@@UEAAPEAXI@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C01A99FC (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::~Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>(
        _QWORD *a1)
{
  *a1 = &Queue<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`vftable';
  a1[1] = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>::`vftable';
  return DoublyLinkedList<DMM::AutoBuffer<_DMM_MONITOR_SERIALIZATION>>::Clear();
}
