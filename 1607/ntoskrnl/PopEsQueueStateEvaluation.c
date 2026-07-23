/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14054464C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140581424 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140673990 (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  unsigned int v1; // eax

  v1 = 4;
  if ( a1 )
    v1 = 12;
  return PopEsWorkItemSchedule(v1);
}
