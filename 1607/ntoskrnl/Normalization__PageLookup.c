/*
 * XREFs of Normalization__PageLookup @ 0x140582044
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1402150A4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x140215220 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x140215568 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
