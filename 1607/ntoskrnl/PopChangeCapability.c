/*
 * XREFs of PopChangeCapability @ 0x14056E438
 * Callers:
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14056C598 (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x14056C794 (PopThermalZoneAdd.c)
 *     PdcPoReportButton @ 0x14056DD64 (PdcPoReportButton.c)
 *     PopBatteryAdd @ 0x14066EC84 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x14066F5D0 (PopBatteryUpdateCompositeInformation.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x14056E44C (PopResetCurrentPolicies.c)
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
