/*
 * XREFs of PopUpdateSingleThreadHeteroPolicies @ 0x14063BA7C
 * Callers:
 *     <none>
 * Callees:
 *     KeUpdateThreadHeteroPolicy @ 0x1403B0E50 (KeUpdateThreadHeteroPolicy.c)
 */

__int64 __fastcall PopUpdateSingleThreadHeteroPolicies(__int64 a1, __int64 a2)
{
  KeUpdateThreadHeteroPolicy(a2);
  return 0LL;
}
