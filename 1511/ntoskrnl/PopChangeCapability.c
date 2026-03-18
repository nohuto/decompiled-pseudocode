/*
 * XREFs of PopChangeCapability @ 0x14053DEF8
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PdcPoReportButton @ 0x14053DA58 (PdcPoReportButton.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     PopThermalZoneAdd @ 0x14054C0D8 (PopThermalZoneAdd.c)
 *     PopBatteryAdd @ 0x1406367E0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 *     PopBatteryUpdateCompositeInformation @ 0x1406370C8 (PopBatteryUpdateCompositeInformation.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x14053E130 (PopResetCurrentPolicies.c)
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
