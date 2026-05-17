/*
 * XREFs of LdrInitializeThunk @ 0x18006BDC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x18006BDE8 (LdrpInitialize.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwContinue @ 0x180093D30 (ZwContinue.c)
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
