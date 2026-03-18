/*
 * XREFs of KiSwapContext @ 0x14015A8A0
 * Callers:
 *     NtYieldExecution @ 0x1400290C0 (NtYieldExecution.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x140082450 (KiSwapThread.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KeBoostPriorityThread @ 0x1400F6440 (KeBoostPriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1401069B4 (KeCpuSetReportParkedProcessors.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 * Callees:
 *     SwapContext @ 0x14015ABD0 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
