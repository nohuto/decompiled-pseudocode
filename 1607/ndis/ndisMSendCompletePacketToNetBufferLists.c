/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C0055774
 * Callers:
 *     ndisMAbortPackets @ 0x1C001BE8C (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004C100 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0053400 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C00540C0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C0054330 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0054790 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0054C30 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0055840 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0055A20 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00561B0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056390 (ndisMSendPacketsToMiniport.c)
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C00104B8 (ndisInvokeNextSendCompleteHandler.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004D850 (ndisXlateSendCompletePacketToNetBufferList.c)
 *     WPP_SF_qqd @ 0x1C0050E4C (WPP_SF_qqd.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2, a3);
  if ( (v3 & 0xC0010000) == 0xC0010000 )
    v3 = (unsigned __int16)v3 | 0xC0230000;
  v6 = (struct _NET_BUFFER_LIST *)ndisXlateSendCompletePacketToNetBufferList(a2, v3);
  if ( v6 )
  {
    v6->Status = v3;
    ndisInvokeNextSendCompleteHandler(
      v6,
      0,
      (struct _NDIS_FILTER_BLOCK *)a1,
      *(_BYTE **)(a1 + 2600),
      *(void **)(a1 + 2584),
      *(void (**)(void))(a1 + 2624));
  }
  if ( (unsigned __int8)byte_1C00895CA >= 4u )
    WPP_SF_qq(0x2Du, &WPP_98491548b3413749efaf9ab44284e0a4_Traceguids, a1, a2);
}
