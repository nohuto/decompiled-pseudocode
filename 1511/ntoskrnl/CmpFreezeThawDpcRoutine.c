/*
 * XREFs of CmpFreezeThawDpcRoutine @ 0x1401A9F4C
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall CmpFreezeThawDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedCompareExchange(&CmpFreezeThawPending, 1, 0) )
    ExQueueWorkItem(&CmpFreezeThawWorkItem, DelayedWorkQueue);
}
