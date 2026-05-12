/*
 * XREFs of RaidUnitRestartQueueDpcRoutine @ 0x1C0038620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RaidUnitRestartQueueDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  RaidRestartIoQueue(DeferredContext[8]);
}
