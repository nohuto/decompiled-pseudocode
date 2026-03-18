/*
 * XREFs of PopChangeCapability @ 0x14056DEF8
 * Callers:
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14056C058 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x14056C254 (PopThermalZoneAdd.c)
 *     PdcPoReportButton @ 0x14056D824 (PdcPoReportButton.c)
 *     PopBatteryAdd @ 0x14066EBA0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14066F4EC (PopBatteryUpdateCompositeInformation.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x14056DF0C (PopResetCurrentPolicies.c)
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
