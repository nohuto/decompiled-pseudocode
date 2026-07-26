/*
 * XREFs of ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1C001C7E0
 * Callers:
 *     ndisMAbortPackets @ 0x1C001BE8C (ndisMAbortPackets.c)
 *     NdisAllocatePacket @ 0x1C001C5A0 (NdisAllocatePacket.c)
 *     ndisMAllocSGList @ 0x1C004BD20 (ndisMAllocSGList.c)
 *     ndisMAllocSGListS @ 0x1C004C100 (ndisMAllocSGListS.c)
 *     ndisMProcessSGList @ 0x1C004C720 (ndisMProcessSGList.c)
 *     ndisMProcessSGListS @ 0x1C004C7E0 (ndisMProcessSGListS.c)
 *     ndisXlateSendCompleteNetBufferListToPacket @ 0x1C004D7C8 (ndisXlateSendCompleteNetBufferListToPacket.c)
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004D94C (ndisXlateSendNetBufferListsToPacketArray.c)
 *     NdisMatchPdoWithPacket @ 0x1C004E6F0 (NdisMatchPdoWithPacket.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052130 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052380 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052550 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0052A80 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0052F10 (-ndisMCoSendCompleteToNdisPacket@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z @ 0x1C0052FE0 (-ndisMCoSendCompleteToNetBufferLists@@YAXHPEAXPEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z @ 0x1C0053080 (-ndisMCoSendNetBufferListsCompleteToNdisPackets@@YAXPEAXPEAU_NET_BUFFER_LIST@@K@Z.c)
 *     NdisMSendComplete @ 0x1C0053400 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C00540C0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C0054330 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0054790 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0054C30 (ndisMDeferredSendSG.c)
 *     ndisMIsLoopbackPacket @ 0x1C00550E4 (ndisMIsLoopbackPacket.c)
 *     ndisMLoopbackPacketX @ 0x1C00555D0 (ndisMLoopbackPacketX.c)
 *     ndisMSendCompleteSG @ 0x1C0055840 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0055A20 (ndisMSendCompleteX.c)
 *     ndisMSendPacketCompleteToOpen @ 0x1C0055E80 (ndisMSendPacketCompleteToOpen.c)
 *     ndisMSendPackets @ 0x1C0055F60 (ndisMSendPackets.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00561B0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056390 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsToNetBufferLists @ 0x1C0056650 (ndisMSendPacketsToNetBufferLists.c)
 *     ndisSendCompleteWithPause @ 0x1C0056D80 (ndisSendCompleteWithPause.c)
 *     ndisSendPacketsWithPause @ 0x1C0056E90 (ndisSendPacketsWithPause.c)
 *     NdisReturnPackets @ 0x1C005CF80 (NdisReturnPackets.c)
 *     ndisMDeferredReturnPackets @ 0x1C005DA84 (ndisMDeferredReturnPackets.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0061320 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMDummyIndicatePacket @ 0x1C0061F70 (ndisMDummyIndicatePacket.c)
 *     ndisMIndicatePacket @ 0x1C00620B0 (ndisMIndicatePacket.c)
 *     ndisReturnNetBufferListsToPackets @ 0x1C0067360 (ndisReturnNetBufferListsToPackets.c)
 *     ndisReturnPacketToMiniport @ 0x1C0067498 (ndisReturnPacketToMiniport.c)
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
