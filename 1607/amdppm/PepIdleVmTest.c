/*
 * XREFs of PepIdleVmTest @ 0x1C00026C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PepIdleVmTest(ULONG_PTR a1, __int64 a2, int a3)
{
  if ( a3 == -1 )
    return 0LL;
  else
    return PepIdleTest(a1);
}
