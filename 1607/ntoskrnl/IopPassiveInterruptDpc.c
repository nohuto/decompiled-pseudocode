/*
 * XREFs of IopPassiveInterruptDpc @ 0x1401CD9D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, (PLIST_ENTRY)(DeferredContext + 72));
}
