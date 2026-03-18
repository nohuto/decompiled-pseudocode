/*
 * XREFs of PopWdiTimerCallback @ 0x14023F3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void PopWdiTimerCallback()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopWdiTimerWorker, DelayedWorkQueue);
}
