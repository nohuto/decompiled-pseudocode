/*
 * XREFs of ndisMSendCompletePacketToNetBufferLists @ 0x1C0050BA4
 * Callers:
 *     ndisMAbortPackets @ 0x1C00136C4 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C0047B10 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C004E9B0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C004F660 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C004F8D0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C004FD30 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00501D0 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0050C70 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0050E50 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00515E0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00517C0 (ndisMSendPacketsToMiniport.c)
 * Callees:
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0011578 (ndisInvokeNextSendCompleteHandler.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ndisXlateSendCompletePacketToNetBufferList @ 0x1C004927C (ndisXlateSendCompletePacketToNetBufferList.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

void __fastcall ndisMSendCompletePacketToNetBufferLists(__int64 a1, struct _NDIS_PACKET *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  struct _NET_BUFFER_LIST *v6; // rax

  v3 = a3;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qqd(0x2Cu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2, a3);
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
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(0x2Du, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
}
