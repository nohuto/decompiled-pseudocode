/*
 * XREFs of PrintIndent @ 0x1C00443A0
 * Callers:
 *     ParseFieldList @ 0x1C000DC80 (ParseFieldList.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParsePackage @ 0x1C0010950 (ParsePackage.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 * Callees:
 *     ConPrintf @ 0x1C004392C (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C005A114; ++i )
    result = ConPrintf("| ");
  return result;
}
