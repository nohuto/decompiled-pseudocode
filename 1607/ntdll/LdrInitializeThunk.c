/*
 * XREFs of LdrInitializeThunk @ 0x180078750
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180078778 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800A5DE0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A6C80 (ZwContinue.c)
 */

void __fastcall __noreturn LdrInitializeThunk(__int64 a1)
{
  __int64 v2; // rdx
  unsigned int v3; // eax

  LdrpInitialize();
  LOBYTE(v2) = 1;
  v3 = ZwContinue(a1, v2);
  RtlRaiseStatus(v3);
}
