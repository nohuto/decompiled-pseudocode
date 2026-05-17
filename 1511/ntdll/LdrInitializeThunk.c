/*
 * XREFs of LdrInitializeThunk @ 0x180076D50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180076D78 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x1800A5920 (ZwContinue.c)
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
