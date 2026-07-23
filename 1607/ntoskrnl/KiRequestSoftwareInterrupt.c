/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1400D60D0
 * Callers:
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KeInsertPriQueue @ 0x14005F280 (KeInsertPriQueue.c)
 *     KeRemoveQueueEx @ 0x140069F30 (KeRemoveQueueEx.c)
 *     KiReadyOutSwappedThreads @ 0x1400908A0 (KiReadyOutSwappedThreads.c)
 *     KiRequestTimer2Expiration @ 0x1400C77F4 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x1400C7D7C (KiFlushQueuedDpcsWorker.c)
 *     KiQueueReadyThread @ 0x1400CEB10 (KiQueueReadyThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KeClockInterruptNotify @ 0x1400D7710 (KeClockInterruptNotify.c)
 *     KeAccumulateTicks @ 0x1400DA260 (KeAccumulateTicks.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     KeRemovePriorityBoost @ 0x1401D2B3C (KeRemovePriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
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
