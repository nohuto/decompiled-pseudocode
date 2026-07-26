/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C0050604
 * Callers:
 *     ndisMAbortPackets @ 0x1C000F564 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C00467F0 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C004E410 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C004F0C0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C004F330 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C004F790 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C004FC30 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C00506D0 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C00508B0 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C0051040 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0051220 (ndisMSendPacketsToMiniport.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C00487B4 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0054578 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
  if ( (v3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)v3 | 0xC0230000;
  v6 = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v6 )
  {
    v6->Status = v3;
    ndisInvokeNextSendCompleteHandler(v6, *(_QWORD *)(a1 + 2584), *(void (**)(void))(a1 + 2624));
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(0x2Du, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
}
