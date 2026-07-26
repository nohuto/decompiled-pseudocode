/*
 * XREFs of ndisXlateSendCompletePacketToNetBufferList @ 0x1C004927C
 * Callers:
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004E590 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ndisMSendCompletePacketToNetBufferLists @ 0x1C0050BA4 (ndisMSendCompletePacketToNetBufferLists.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C00489BC (ndisCopyPacketInfoToNBL.c)
 *     ndisFreeConvertedPacket @ 0x1C0048A44 (ndisFreeConvertedPacket.c)
 */

unsigned __int64 __fastcall ndisXlateSendCompletePacketToNetBufferList(struct _NDIS_PACKET *a1, int a2)
{
  __int64 NdisPacketOobOffset; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // r14

  --*(_DWORD *)&a1[-1].ProtocolReserved[4];
  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    v5 = *(unsigned __int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
    *(_DWORD *)(v5 + 140) = a2;
    *(_MDL **)((char *)&a1[1].Private.Head + a1->Private.NdisPacketOobOffset) = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v5, 0LL, 0x18u, (unsigned __int64)a1, 0);
  }
  else
  {
    v6 = *(__int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
    *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
    v5 = *(_QWORD *)(v6 + 128);
    ndisCopyPacketInfoToNBL((__int64)a1, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v5, XlateSendComplete);
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v5, 0LL, 0x14u, (unsigned __int64)a1, 0);
    ndisFreeConvertedPacket(a1, v6, 1);
    if ( a2 && !*(_DWORD *)(v5 + 140) )
      *(_DWORD *)(v5 + 140) = a2;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 96), 0xFFFFFFFF) != 1 )
      v5 = 0LL;
    if ( v5 )
      *(_QWORD *)v5 = 0LL;
  }
  return v5;
}
