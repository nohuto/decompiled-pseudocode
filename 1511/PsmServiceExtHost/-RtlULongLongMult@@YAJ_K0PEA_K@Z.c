/*
 * XREFs of ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x18000AA00
 * Callers:
 *     RmpPolicyComputeUsageLimits @ 0x18000A5B0 (RmpPolicyComputeUsageLimits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongMult(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  if ( is_mul_ok(a1, a2) )
  {
    *a3 = a1 * a2;
    return 0LL;
  }
  else
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
}
