/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x1401F06E4
 * Callers:
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
