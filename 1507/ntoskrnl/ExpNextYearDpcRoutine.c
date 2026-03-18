/*
 * XREFs of ExpNextYearDpcRoutine @ 0x1402626F8
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 */

void __fastcall ExpNextYearDpcRoutine(
        struct _KDPC *Dpc,
        volatile signed __int32 *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( _InterlockedIncrement(DeferredContext) == 1 )
    ExQueueWorkItem(&ExpNextYearWorkItem, DelayedWorkQueue);
}
