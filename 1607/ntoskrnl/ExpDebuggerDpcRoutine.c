/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x14014CA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&ExpDebuggerWorkItem, DelayedWorkQueue);
}
