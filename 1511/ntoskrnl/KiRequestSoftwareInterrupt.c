/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1400205A0
 * Callers:
 *     KiQueueReadyThread @ 0x14002A180 (KiQueueReadyThread.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KiReadyOutSwappedThreads @ 0x14003307C (KiReadyOutSwappedThreads.c)
 *     KiUpdateRunTime @ 0x140045DB0 (KiUpdateRunTime.c)
 *     KeClockInterruptNotify @ 0x140046990 (KeClockInterruptNotify.c)
 *     KeAccumulateTicks @ 0x140048FA0 (KeAccumulateTicks.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KeRemoveQueueEx @ 0x1400807E0 (KeRemoveQueueEx.c)
 *     IopfCompleteRequest @ 0x140084CF0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiRequestTimer2Expiration @ 0x1400ED01C (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x1400FF5CC (KiFlushQueuedDpcsWorker.c)
 *     KeRemovePriorityBoost @ 0x1401C2FDC (KeRemovePriorityBoost.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
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
