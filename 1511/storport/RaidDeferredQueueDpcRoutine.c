/*
 * XREFs of RaidDeferredQueueDpcRoutine @ 0x1C00149C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidDeferredQueueDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        __int64 SystemArgument1,
        PVOID SystemArgument2)
{
  RaidProcessDeferredItemsWorker(SystemArgument1, DeferredContext);
}
