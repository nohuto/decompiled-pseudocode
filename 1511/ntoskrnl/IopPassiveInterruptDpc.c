/*
 * XREFs of IopPassiveInterruptDpc @ 0x1401BF5FC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall IopPassiveInterruptDpc(
        struct _KDPC *Dpc,
        _LIST_ENTRY *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  KeInsertQueue(&PassiveInterruptRealtimeWorkQueue, DeferredContext + 4);
}
