/*
 * XREFs of PopUpdateSingleThreadHeteroPolicies @ 0x1406BAD90
 * Callers:
 *     <none>
 * Callees:
 *     KeUpdateThreadHeteroPolicy @ 0x14040152C (KeUpdateThreadHeteroPolicy.c)
 */

__int64 __fastcall PopUpdateSingleThreadHeteroPolicies(__int64 a1, __int64 a2)
{
  KeUpdateThreadHeteroPolicy(a2);
  return 0LL;
}
