/*
 * XREFs of RtlRunOnceInitialize @ 0x1405B5B34
 * Callers:
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 *     DbgkpInitializePhase0 @ 0x1407DEA08 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Ptr = 0LL;
}
