/*
 * XREFs of PopTimestampTargetProcessor @ 0x140127060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PopTimestampTargetProcessor(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        _QWORD *SystemArgument1,
        struct _KEVENT *SystemArgument2)
{
  *SystemArgument1 = __rdtsc();
  KeSetEvent(SystemArgument2, 0, 0);
}
