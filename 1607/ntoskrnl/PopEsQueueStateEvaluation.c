/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14054410C
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140580F78 (PopEsPowerSettingPolicyCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406738AC (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
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
