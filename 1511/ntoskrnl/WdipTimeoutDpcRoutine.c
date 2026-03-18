/*
 * XREFs of WdipTimeoutDpcRoutine @ 0x140102740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WdipTimeoutDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ExQueueWorkItem(&WdipTimeoutWorkItem, DelayedWorkQueue);
}
