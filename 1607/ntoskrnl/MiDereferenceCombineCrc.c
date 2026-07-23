/*
 * XREFs of MiDereferenceCombineCrc @ 0x140663E7C
 * Callers:
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
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
