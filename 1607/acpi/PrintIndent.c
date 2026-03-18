/*
 * XREFs of PrintIndent @ 0x1C005B420
 * Callers:
 *     ParseFieldList @ 0x1C0015620 (ParseFieldList.c)
 *     ParseField @ 0x1C0015710 (ParseField.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ParsePackage @ 0x1C001BD20 (ParsePackage.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 * Callees:
 *     ConPrintf @ 0x1C005AA1C (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C0074594; ++i )
    result = ConPrintf("| ");
  return result;
}
