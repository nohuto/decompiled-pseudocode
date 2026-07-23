/*
 * XREFs of NormBuffer__GetCurrentOutputChar @ 0x140215054
 * Callers:
 *     NormBuffer__IsBlocked @ 0x140215220 (NormBuffer__IsBlocked.c)
 *     NormBuffer__RecheckStartCombinations @ 0x140215314 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__SortBeforeSameClass @ 0x140215568 (NormBuffer__SortBeforeSameClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NormBuffer__GetCurrentOutputChar(__int64 a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r9
  unsigned int v3; // r8d

  v2 = *a2;
  v3 = **a2;
  if ( v3 - 55296 <= 0x7FF )
  {
    if ( **a2 < 0xDC00u )
      v3 = *++v2 + ((v3 - 55287) << 10);
    else
      v3 += (*--v2 - 55287) << 10;
  }
  *a2 = v2;
  return v3;
}
