/*
 * XREFs of ndisFreePaddedMdl @ 0x1C004EDE4
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
 *     ndisMFakeSendPackets @ 0x1C00598B0 (ndisMFakeSendPackets.c)
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
