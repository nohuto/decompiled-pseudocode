/*
 * XREFs of Normalization__PageLookup @ 0x1405C7564
 * Callers:
 *     NormBuffer__GetLastChar @ 0x140249CD0 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x140249E50 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14024A198 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
