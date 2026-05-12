/*
 * XREFs of RaidAdapterRestartDpcRoutine @ 0x1C0022680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidAdapterRestartDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidAdapterRestartQueues(DeferredContext[8]);
}
