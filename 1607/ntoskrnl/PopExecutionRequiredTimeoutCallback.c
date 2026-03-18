/*
 * XREFs of PopExecutionRequiredTimeoutCallback @ 0x1401FF4D8
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 */

void PopExecutionRequiredTimeoutCallback()
{
  if ( _InterlockedIncrement(&PopExecutionRequiredWorkRequested) == 1 )
    ExQueueWorkItem(&PopCheckExecutionRequiredWorker, DelayedWorkQueue);
}
