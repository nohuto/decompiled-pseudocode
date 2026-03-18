/*
 * XREFs of VidSchiBlockDriverCallback @ 0x1C008CCC0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 *     VidSchTerminateAdapter @ 0x1C008C0D0 (VidSchTerminateAdapter.c)
 *     VidSchPrepareForRecovery @ 0x1C008CB10 (VidSchPrepareForRecovery.c)
 *     VidSchQueryDmaData @ 0x1C008CB34 (VidSchQueryDmaData.c)
 *     VidSchQueryDmaHeader @ 0x1C008CC08 (VidSchQueryDmaHeader.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiBlockDriverCallback(__int64 a1)
{
  __int64 v1; // r9
  char v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(unsigned int *)(a1 + 32);
  v3 = 0;
  DpSynchronizeExecution(*(_QWORD *)(a1 + 24), VidSchiBlockInterruptCallbackAtISR, a1, v1, &v3);
  KeFlushQueuedDpcs();
  DpiSetSchedulerCallbackState(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 176LL), 0LL);
  KeFlushQueuedDpcs();
}
