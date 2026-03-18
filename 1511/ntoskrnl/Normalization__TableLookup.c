/*
 * XREFs of Normalization__TableLookup @ 0x14054F7B8
 * Callers:
 *     NormBuffer__GetLastChar @ 0x1401FAF3C (NormBuffer__GetLastChar.c)
 *     NormBuffer__IsBlocked @ 0x1401FB0BC (NormBuffer__IsBlocked.c)
 *     NormBuffer__SortBeforeSameClass @ 0x1401FB404 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

char __fastcall Normalization__TableLookup(__int64 a1, char a2, unsigned __int8 a3)
{
  return *(_BYTE *)(((unsigned __int64)a3 << 7) + (a2 & 0x7F) + *(_QWORD *)(a1 + 40) - 128);
}
