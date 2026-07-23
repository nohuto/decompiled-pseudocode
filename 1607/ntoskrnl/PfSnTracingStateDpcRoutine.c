/*
 * XREFs of PfSnTracingStateDpcRoutine @ 0x1400B3CF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PfSnTracingStateDpcRoutine(
        struct _KDPC *Dpc,
        struct _WORK_QUEUE_ITEM *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(DeferredContext + 4, DelayedWorkQueue);
}
