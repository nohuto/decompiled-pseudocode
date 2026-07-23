/*
 * XREFs of Normalization__TableLookup @ 0x140582054
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1402150A4 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x140215220 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x140215568 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)((a2 & 0x7F) + ((__int64)(a3 - 1) << 7) + *(_QWORD *)(a1 + 40));
}
