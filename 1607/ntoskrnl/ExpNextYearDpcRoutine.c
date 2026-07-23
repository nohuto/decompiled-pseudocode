/*
 * XREFs of ExpNextYearDpcRoutine @ 0x14022C738
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
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
