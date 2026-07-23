/*
 * XREFs of RtlRunOnceInitialize @ 0x140551E08
 * Callers:
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 *     DbgkpInitializePhase0 @ 0x1407A1790 (DbgkpInitializePhase0.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlRunOnceInitialize(PRTL_RUN_ONCE RunOnce)
{
  RunOnce->Value = 0LL;
}
