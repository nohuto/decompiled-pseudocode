/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x1402092EC
 * Callers:
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
