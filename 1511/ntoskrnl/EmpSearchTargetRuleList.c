/*
 * XREFs of EmpSearchTargetRuleList @ 0x1400995A4
 * Callers:
 *     EmpUpdateRuleState @ 0x1400995F8 (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x14039C5A8 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x14039C698 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x1405F293C (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x140760308 (EmpParseTargetRules.c)
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
