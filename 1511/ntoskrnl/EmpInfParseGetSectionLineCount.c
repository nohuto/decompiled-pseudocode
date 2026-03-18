/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x1407602BC
 * Callers:
 *     EmpParseEntryTypes @ 0x14075F2D4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x14075F5EC (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x14075FDC8 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407600F4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140760308 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140760940 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140760968 (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
