/*
 * XREFs of DllCanUnloadNow @ 0x1800069B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180006440 @ 0x180006440 (sub_180006440.c)
 *     atexit @ 0x1800261E4 (atexit.c)
 */

HRESULT __stdcall DllCanUnloadNow()
{
  RTL_SRWLOCK *v0; // rdx
  __int64 v1; // rcx
  HRESULT v2; // ebx

  v2 = 1;
  if ( (dword_18003AE44 & 1) == 0 )
  {
    dword_18003AE44 |= 1u;
    qword_18003AC80 = (__int64)&qword_18003AE38;
    qword_18003AE38 = (__int64)off_18002CB48;
    atexit(sub_180028020);
  }
  if ( sub_180006440(v1, v0, 0) )
    return NdrDllCanUnloadNow(&pPSFactoryBuffer);
  return v2;
}
