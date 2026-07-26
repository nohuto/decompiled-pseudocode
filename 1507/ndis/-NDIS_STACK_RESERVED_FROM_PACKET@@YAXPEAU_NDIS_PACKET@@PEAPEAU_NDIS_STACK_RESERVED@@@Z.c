/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C0057DD0
 * Callers:
 *     ndisMAbortPackets @ 0x1C000F564 (ndisMAbortPackets.c)
 *     ndisMAllocSGList @ 0x1C0046410 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C00467F0 (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C0046E10 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C0046ED0 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004872C (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C00488B0 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C00494E0 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D110 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D360 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C004D530 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C004DA60 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004DEF0 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C004DFC0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C004E060 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C004E410 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C004F0C0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C004F330 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C004F790 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C004FC30 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C00500F8 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C005046C (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C00506D0 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C00508B0 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0050D10 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C0050DF0 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C0051040 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0051220 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C00514E0 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C0051DE0 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C0051EF0 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C0058C40 (NdisReturnPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C0059590 (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C005D9C0 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C005E610 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C005E750 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C00644D0 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C0064608 (ndisReturnPacketToMiniport.c)
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
