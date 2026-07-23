/*
 * XREFs of LdrInitializeThunk @ 0x180078740
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180078768 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A6C80 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
