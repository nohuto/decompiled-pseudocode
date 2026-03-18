/*
 * XREFs of PopBatteryCheckTrigger @ 0x1405440E4
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x140543EB0 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x140544160 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x14066EC10 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_1403036C0 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
