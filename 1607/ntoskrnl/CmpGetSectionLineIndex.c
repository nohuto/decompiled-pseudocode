/*
 * XREFs of CmpGetSectionLineIndex @ 0x1407A8AF8
 * Callers:
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407A7874 (EmpParseCallbacks.c)
 *     EmpParseRuleExpression @ 0x1407A7BE4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1407A8094 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407A83F0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407A8604 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1407A8B68 (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1407A8C38 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1407A8C5C (CmpSearchSectionByName.c)
 *     CmpProcessForSimpleStringSub @ 0x1407A8D00 (CmpProcessForSimpleStringSub.c)
 */

__int64 __fastcall CmpGetSectionLineIndex(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // ecx

  v7 = CmpSearchSectionByName(a1, a2);
  if ( v7 )
  {
    v8 = CmpSearchLineInSectionByIndex(v7, a3);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v8 + 16);
      v10 = 0;
      if ( a4 )
      {
        while ( v9 )
        {
          v9 = (_QWORD *)*v9;
          if ( ++v10 >= a4 )
            goto LABEL_4;
        }
      }
      else
      {
LABEL_4:
        if ( v9 )
          return CmpProcessForSimpleStringSub(a1, v9[1]);
      }
    }
  }
  return 0LL;
}
