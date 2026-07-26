/*
 * XREFs of ndisXlateReturnNetBufferListToPacket @ 0x1C00490C4
 * Callers:
 *     ?ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PACKET@@EE@Z @ 0x1C004D3C8 (-ndisCoIndicatePromiscPacket@@YAXPEAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_P.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004DD80 (-ndisMCoIndicateReceiveNdisPacketToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ndisMIndicatePacketsToNetBufferLists @ 0x1C0062240 (ndisMIndicatePacketsToNetBufferLists.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0062F90 (ndisReturnNetBufferListsToPackets.c)
 * Callees:
 *     NdisFreeNetBufferList @ 0x1C000DC40 (NdisFreeNetBufferList.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 */

unsigned __int8 *__fastcall ndisXlateReturnNetBufferListToPacket(struct _NET_BUFFER_LIST *a1)
{
  unsigned __int8 *v2; // rdi
  enum _NDIS_NBL_TRACKER_MODE v3; // eax
  int v4; // esi

  *(_QWORD *)(a1->Link.Region + 32) = 0LL;
  v2 = (unsigned __int8 *)a1->NdisReserved[0];
  a1->Flags &= 0xFFFFFF6B;
  a1->NblFlags &= ~0x8000u;
  a1->NdisReserved[0] = 0LL;
  v3 = ndisNblTrackerMode;
  v4 = v2[41] >> 7;
  if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
  {
    ndisNblTrackerRecordEvent((unsigned __int64)a1, 0LL, 0x1Cu, (unsigned __int64)v2, 0);
    v3 = ndisNblTrackerMode;
  }
  if ( v4 )
  {
    if ( v3 >= NdisTrackNblFullLogNoStack )
      ndisNblTrackerRecordEvent((unsigned __int64)a1, 0LL, 0x11u, (unsigned __int64)v2, 0);
  }
  else
  {
    NdisFreeNetBufferList(a1);
  }
  return v2;
}
