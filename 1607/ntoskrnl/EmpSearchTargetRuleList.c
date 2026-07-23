/*
 * XREFs of EmpSearchTargetRuleList @ 0x140009024
 * Callers:
 *     EmpUpdateRuleState @ 0x140009078 (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x1403C84A8 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1403C8598 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x14061CC50 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1407A8604 (EmpParseTargetRules.c)
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
