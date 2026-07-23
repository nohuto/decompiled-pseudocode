/*
 * XREFs of LdrInitializeThunk @ 0x18006BDC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x18006BDE8 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x180093D30 (ZwContinue.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
