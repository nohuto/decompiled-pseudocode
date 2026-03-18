/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x14023EA78
 * Callers:
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
