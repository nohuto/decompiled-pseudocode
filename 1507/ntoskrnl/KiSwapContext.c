/*
 * XREFs of KiSwapContext @ 0x14018A310
 * Callers:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     ExTryQueueWorkItem @ 0x1400292FC (ExTryQueueWorkItem.c)
 *     KeSetLegacyAffinityThread @ 0x140043120 (KeSetLegacyAffinityThread.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x14009E640 (KeRemoveQueueEx.c)
 *     KiSwapThread @ 0x1400A0810 (KiSwapThread.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     KeBoostPriorityThread @ 0x1400DBC80 (KeBoostPriorityThread.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     PpmCheckRun @ 0x1400E7D30 (PpmCheckRun.c)
 *     NtYieldExecution @ 0x1400EB420 (NtYieldExecution.c)
 *     KiReadyOutSwappedThreads @ 0x1401106FC (KiReadyOutSwappedThreads.c)
 *     KeCpuSetReportParkedProcessors @ 0x140132C60 (KeCpuSetReportParkedProcessors.c)
 *     KeRemovePriorityBoost @ 0x1401FEDB4 (KeRemovePriorityBoost.c)
 * Callees:
 *     SwapContext @ 0x14018A640 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
