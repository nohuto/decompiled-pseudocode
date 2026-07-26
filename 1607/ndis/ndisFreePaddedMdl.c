/*
 * XREFs of ndisFreePaddedMdl @ 0x1C0053DD4
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
 *     ndisMFakeSendPackets @ 0x1C005DCF0 (ndisMFakeSendPackets.c)
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
