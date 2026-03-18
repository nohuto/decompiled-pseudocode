/*
 * XREFs of PopBatteryCheckTrigger @ 0x14056B8B0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x14056B8DC (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x1406B6284 (PopBatteryCheckTriggerAllBatteries.c)
 */

char PopBatteryCheckTrigger()
{
  char v0; // bl

  if ( !qword_14032E9E0 )
    return 0;
  v0 = 1;
  if ( dword_14032E84C != 1 && (xmmword_14032E9C0 & 2) == 0 )
    return 0;
  if ( !(unsigned __int8)PopBatteryCheckTriggerAllBatteries() )
    return 0;
  return v0;
}
