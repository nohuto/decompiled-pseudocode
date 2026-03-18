/*
 * XREFs of ViPendingCompleteAtDPC @ 0x1406C1340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViPendingCompleteAtDPC(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  ViPendingCompleteAfterWait(DeferredContext);
}
