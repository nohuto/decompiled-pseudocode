/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x140233D10
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopCheckExecutionRequiredWorker, DelayedWorkQueue);
}
