/*
 * XREFs of PopSetPowerActionState @ 0x140114AF0
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerAction @ 0x140530B48 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140530CA8 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140534D98 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x140009D8C (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopSetPowerActionState(char a1)
{
  if ( byte_1403033A1 != a1 )
  {
    byte_1403033A1 = a1;
    if ( a1 )
      PopDeepSleepSetDisengageReason(5);
    else
      PopDeepSleepClearDisengageReason(5);
  }
}
