/*
 * XREFs of EmpSearchTargetRuleList @ 0x1400CFA20
 * Callers:
 *     EmpUpdateRuleState @ 0x1400CFA74 (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x1403EB51C (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1403EB60C (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x14066B668 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1407CEB80 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
