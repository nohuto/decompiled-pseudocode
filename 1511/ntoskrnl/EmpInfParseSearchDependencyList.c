/*
 * XREFs of EmpInfParseSearchDependencyList @ 0x140760B1C
 * Callers:
 *     EmpParseRuleExpression @ 0x14075F95C (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x14075FDC8 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

char __fastcall EmpInfParseSearchDependencyList(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rax
  char v3; // r8

  v2 = *a1;
  v3 = 0;
  while ( v2 )
  {
    if ( *(v2 - 1) == a2 )
      return 1;
    v2 = (_QWORD *)*v2;
  }
  return v3;
}
