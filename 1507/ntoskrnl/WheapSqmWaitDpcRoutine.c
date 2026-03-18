/*
 * XREFs of WheapSqmWaitDpcRoutine @ 0x14026821C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WheapSqmWaitDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&WheapSqmWaitWorkQueueItem, DelayedWorkQueue);
}
