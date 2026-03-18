/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1400D8230
 * Callers:
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x14005F700 (KeInsertPriQueue.c)
 *     KeRemoveQueueEx @ 0x14006A3B0 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x140091140 (KiReadyOutSwappedThreads.c)
 *     KiRequestTimer2Expiration @ 0x1400C9954 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x1400C9EDC (KiFlushQueuedDpcsWorker.c)
 *     KiQueueReadyThread @ 0x1400D0C70 (KiQueueReadyThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 *     KeClockInterruptNotify @ 0x1400D9870 (KeClockInterruptNotify.c)
 *     KeAccumulateTicks @ 0x1400DC3C0 (KeAccumulateTicks.c)
 *     KiCheckForThreadDispatch @ 0x1400F2960 (KiCheckForThreadDispatch.c)
 *     KeRemovePriorityBoost @ 0x1401D2D10 (KeRemovePriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x1401DBC78 (KeTransitionProcessorParkState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    return HalRequestSoftwareInterrupt(a2);
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->NestingLevel )
    return HalRequestSoftwareInterrupt(a2);
  CurrentPrcb->InterruptRequest = 1;
  return result;
}
