/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0016CBC
 * Callers:
 *     ndisMAbortPackets @ 0x1C00136C4 (ndisMAbortPackets.c)
 *     NdisAllocatePacket @ 0x1C0016A80 (NdisAllocatePacket.c)
 *     ndisMAllocSGList @ 0x1C0047730 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C0047B10 (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C0048130 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C00481F0 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C00491F4 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C0049378 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C0049D30 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D6E0 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D930 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004DB00 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004E030 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004E4C0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004E590 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004E630 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C004E9B0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C004F660 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C004F8D0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C004FD30 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00501D0 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C0050698 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C0050A0C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C0050C70 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0050E50 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C00512B0 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C0051390 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00515E0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00517C0 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0051A80 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C00521B0 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C00522C0 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C0058930 (NdisReturnPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C00595E0 (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C005D320 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C005DF70 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C005E0B0 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0062F90 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C00630C8 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_STACK_RESERVED_FROM_PACKET(struct _NDIS_PACKET *a1, struct _NDIS_STACK_RESERVED **a2)
{
  __int64 v2; // r8
  char *v3; // rax

  v2 = *(unsigned int *)&a1[-1].ProtocolReserved[4];
  if ( (unsigned int)v2 >= ndisPacketStackSize )
    v3 = 0LL;
  else
    v3 = (char *)a1 + 48 * (v2 - ndisPacketStackSize) - 16;
  *a2 = (struct _NDIS_STACK_RESERVED *)(v3 + 16);
}
