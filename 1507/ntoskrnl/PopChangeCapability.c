/*
 * XREFs of PopChangeCapability @ 0x1405994A8
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     PdcPoReportButton @ 0x140599008 (PdcPoReportButton.c)
 *     PopNotifyPolicyDevice @ 0x1405C3158 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x1405C343C (PopThermalZoneAdd.c)
 *     PopBatteryAdd @ 0x1406B6124 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1406B6CA8 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406B6F28 (PopBatteryUpdateCompositeInformation.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x1405996E0 (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PopChangeCapability(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax

  if ( *a1 != (_BYTE)a2 )
  {
    *a1 = a2;
    return PopResetCurrentPolicies(a1, a2);
  }
  return result;
}
