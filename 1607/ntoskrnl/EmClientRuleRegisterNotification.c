/*
 * XREFs of EmClientRuleRegisterNotification @ 0x14061CC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EmClientRuleRegisterNotification(void *a1)
{
  if ( a1 )
    return EmpClientRuleRegisterNotification(a1);
  else
    return 3221225485LL;
}
