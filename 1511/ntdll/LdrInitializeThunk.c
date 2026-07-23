/*
 * XREFs of LdrInitializeThunk @ 0x180076D50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180076D78 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A5920 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
