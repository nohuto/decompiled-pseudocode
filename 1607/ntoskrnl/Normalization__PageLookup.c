/*
 * XREFs of Normalization__PageLookup @ 0x140581B98
 * Callers:
 *     NormBuffer__GetLastChar @ 0x140215278 (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1402153F4 (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x14021573C (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__PageLookup(__int64 a1, int a2)
{
  return *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
}
