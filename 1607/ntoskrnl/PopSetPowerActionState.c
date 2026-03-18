/*
 * XREFs of PopSetPowerActionState @ 0x140114580
 * Callers:
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopPolicyWorkerAction @ 0x140530608 (PopPolicyWorkerAction.c)
 *     PopExecutePowerAction @ 0x140530768 (PopExecutePowerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140534858 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopDeepSleepSetDisengageReason @ 0x14000A20C (PopDeepSleepSetDisengageReason.c)
 */

void __fastcall PopSetPowerActionState(char a1)
{
  if ( byte_140303461 != a1 )
  {
    byte_140303461 = a1;
    if ( a1 )
      PopDeepSleepSetDisengageReason(5);
    else
      PopDeepSleepClearDisengageReason(5);
  }
}
