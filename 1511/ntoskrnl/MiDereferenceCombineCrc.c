/*
 * XREFs of MiDereferenceCombineCrc @ 0x14062ACC8
 * Callers:
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 */

__int64 __fastcall MiDereferenceCombineCrc(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)v1 < 0x100 || !*(_QWORD *)(v1 + 24) )
    return 0LL;
  MiDecrementCombinedPte(v1 + 48);
  return 1LL;
}
