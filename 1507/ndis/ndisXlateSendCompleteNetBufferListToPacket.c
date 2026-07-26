/*
 * XREFs of ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004872C
 * Callers:
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004E060 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     ndisMSendNetBufferListsCompleteToNdisPackets @ 0x1C0050AF0 (ndisMSendNetBufferListsCompleteToNdisPackets.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ndisCopyNBLInfoToPacket @ 0x1C0047D64 (ndisCopyNBLInfoToPacket.c)
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 */

void __fastcall ndisXlateSendCompleteNetBufferListToPacket(struct _NET_BUFFER_LIST *a1, __int64 *a2, int *a3)
{
  struct _NDIS_PACKET *v5; // rcx
  struct _NDIS_STACK_RESERVED *v6; // [rsp+40h] [rbp+8h] BYREF

  v5 = (struct _NDIS_PACKET *)a1->NdisReserved[0];
  *a2 = (__int64)v5;
  *a3 = a1->Status;
  NDIS_STACK_RESERVED_FROM_PACKET(v5, &v6);
  *(_QWORD *)v6 = 1297040182LL;
  *(_BYTE *)(*a2 + 41) &= 0xC0u;
  ndisCopyNBLInfoToPacket((__int64)a1, *a2, 1);
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    ndisNblTrackerRecordEvent((unsigned __int64)a1, 0LL, 0x16u, (unsigned __int64)a2, 0);
  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  NdisFreeNetBufferList(a1);
}
