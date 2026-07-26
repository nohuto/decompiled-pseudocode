/*
 * XREFs of ndisXlateReturnPacketToNetBufferList @ 0x1C004869C
 * Callers:
 *     ndisIndicateXlatedPacketsToNdis5Protocols @ 0x1C0022F44 (ndisIndicateXlatedPacketsToNdis5Protocols.c)
 *     ?ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KKE@Z @ 0x1C004CB88 (-ndisCoIndicatePromiscNetBuffer@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NET.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004DA60 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisReturnPacketToNetBufferList @ 0x1C0064758 (ndisReturnPacketToNetBufferList.c)
 * Callees:
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ndisCopyPacketInfoToNBL @ 0x1C0047E78 (ndisCopyPacketInfoToNBL.c)
 *     ndisFreeConvertedPacket @ 0x1C0047F00 (ndisFreeConvertedPacket.c)
 */

unsigned __int64 __fastcall ndisXlateReturnPacketToNetBufferList(struct _NDIS_PACKET *a1)
{
  __int64 NdisPacketOobOffset; // rax
  unsigned __int64 v3; // rdi

  NdisPacketOobOffset = a1->Private.NdisPacketOobOffset;
  v3 = *(unsigned __int64 *)((char *)&a1[1].Private.Head + NdisPacketOobOffset);
  *(_MDL **)((char *)&a1[1].Private.Head + NdisPacketOobOffset) = 0LL;
  ndisCopyPacketInfoToNBL((__int64)a1, (struct _NDIS_IPSEC_OFFLOAD_V1_NET_BUFFER_LIST_INFO *)v3, XlateReturn);
  if ( (a1->Private.Flags & 0x4000) != 0 )
  {
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v3, 0LL, 0x1Eu, (unsigned __int64)a1, 0);
  }
  else
  {
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent(v3, 0LL, 0x1Au, (unsigned __int64)a1, 0);
    ndisFreeConvertedPacket(a1, *(_QWORD *)(v3 + 8), 0);
  }
  return v3;
}
