/*
 * XREFs of PopBatteryCheckTrigger @ 0x1404F99E8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1404F9820 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1404F9A14 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x140636850 (PopBatteryCheckTriggerAllBatteries.c)
 */

char PopBatteryCheckTrigger()
{
  char v0; // bl

  if ( !qword_1402DE420 )
    return 0;
  v0 = 1;
  if ( dword_1402DE28C != 1 && (xmmword_1402DE400 & 2) == 0 )
    return 0;
  if ( !(unsigned __int8)PopBatteryCheckTriggerAllBatteries() )
    return 0;
  return v0;
}
