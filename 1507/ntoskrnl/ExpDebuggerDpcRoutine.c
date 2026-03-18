/*
 * XREFs of ExpDebuggerDpcRoutine @ 0x140170954
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void ExpDebuggerDpcRoutine()
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&ExpDebuggerWorkItem, DelayedWorkQueue);
}
