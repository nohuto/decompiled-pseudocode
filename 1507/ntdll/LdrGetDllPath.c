/*
 * XREFs of LdrGetDllPath @ 0x1800369E0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDllPath @ 0x180036A08 (LdrpGetDllPath.c)
 */

__int64 __fastcall LdrGetDllPath(int a1, int a2, int a3, __int64 a4)
{
  return LdrpGetDllPath(a1, a2, a3, 0, 0LL, 0LL, a4);
}
