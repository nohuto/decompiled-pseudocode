/*
 * XREFs of CmpFreezeThawDpcRoutine @ 0x1401B5130
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
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
