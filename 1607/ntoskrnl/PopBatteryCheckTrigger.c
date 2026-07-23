/*
 * XREFs of PopBatteryCheckTrigger @ 0x140544624
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1405443F0 (PopBatteryApplyCompositeState.c)
 *     PopRecalculateCBTriggerLevels @ 0x1405446A0 (PopRecalculateCBTriggerLevels.c)
 * Callees:
 *     PopBatteryCheckTriggerAllBatteries @ 0x14066ECF4 (PopBatteryCheckTriggerAllBatteries.c)
 */

bool __fastcall PopBatteryCheckTrigger(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( qword_140303600 )
    return (unsigned __int8)PopBatteryCheckTriggerAllBatteries(a1, 0LL) != 0;
  return v1;
}
