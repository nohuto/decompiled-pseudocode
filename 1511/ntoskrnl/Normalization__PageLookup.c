/*
 * XREFs of Normalization__PageLookup @ 0x14054F7A8
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1401FAF3C (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1401FB0BC (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1401FB404 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
