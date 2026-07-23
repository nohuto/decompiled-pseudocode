/*
 * XREFs of PopWdiTimerCallback @ 0x14020A070
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopWdiTimerWorker, DelayedWorkQueue);
}
