/*
 * XREFs of CmpGetKeyName @ 0x1407CF184
 * Callers:
 *     EmpParseCallbacks @ 0x1407CDE68 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1407CE640 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1407CEB80 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1407CF0E4 (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1407CF1C0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1407CF1E8 (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
