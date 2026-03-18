/*
 * XREFs of PopUserShutdownDelayDpcCallback @ 0x1401ECEC4
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall PopUserShutdownDelayDpcCallback(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  if ( !_InterlockedExchange(&PopUserShutdown, 1) )
    ExQueueWorkItem(&PopUserShutdownDelayWorker, DelayedWorkQueue);
}
