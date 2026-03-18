/*
 * XREFs of RtlRunOnceInitialize @ 0x1405262A4
 * Callers:
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 *     DbgkpInitializePhase0 @ 0x14075AACC (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Ptr = 0LL;
}
