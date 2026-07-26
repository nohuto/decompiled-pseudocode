/*
 * XREFs of ndisFreePaddedMdl @ 0x1C004F384
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
 *     ndisMFakeSendPackets @ 0x1C0059850 (ndisMFakeSendPackets.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreePaddedMdl(__int64 a1)
{
  __int64 v1; // rax
  PMDL *v3; // rbx

  v1 = *(unsigned __int16 *)(a1 + 42);
  *(_DWORD *)(a1 + 36) &= ~0x10000u;
  v3 = *(PMDL **)(v1 + a1 + 128);
  *(_QWORD *)(v1 + a1 + 128) = 0LL;
  IoFreeMdl(*v3);
  *v3 = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
}
