/*
 * XREFs of PrintIndent @ 0x1C0043DC0
 * Callers:
 *     ParsePackage @ 0x1C000E2B0 (ParsePackage.c)
 *     ParseFieldList @ 0x1C000EE64 (ParseFieldList.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 * Callees:
 *     ConPrintf @ 0x1C004334C (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C005A124; ++i )
    result = ConPrintf("| ");
  return result;
}
