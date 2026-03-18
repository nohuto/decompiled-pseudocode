/*
 * XREFs of PopDiagTraceThermalStandbyState @ 0x1402094C0
 * Callers:
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagTraceThermalStandbyState(struct _DEVICE_OBJECT *a1)
{
  return PopDiagTraceThermalStateChange(a1);
}
