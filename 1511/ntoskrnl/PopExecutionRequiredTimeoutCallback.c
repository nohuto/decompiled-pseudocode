/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x1401E6B54
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopCheckExecutionRequiredWorker, DelayedWorkQueue);
}
