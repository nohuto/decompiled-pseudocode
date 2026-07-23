/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x1401FF304
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopCheckExecutionRequiredWorker, DelayedWorkQueue);
}
