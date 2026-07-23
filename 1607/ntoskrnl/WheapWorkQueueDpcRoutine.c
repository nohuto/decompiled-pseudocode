/*
 * XREFs of WheapWorkQueueDpcRoutine @ 0x140231124
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WheapWorkQueueDpcRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  ExQueueWorkItem(a2 + 3, DelayedWorkQueue);
}
