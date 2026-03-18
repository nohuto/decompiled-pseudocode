/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C0008044
 * Callers:
 *     ACPIInitStartDevice @ 0x1C0007D8C (ACPIInitStartDevice.c)
 *     ACPIFanControl @ 0x1C003AF70 (ACPIFanControl.c)
 *     ACPIThermalStartDevice @ 0x1C006EEB0 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C007AB40 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C007B020 (ACPIInitStopDevice.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AE8C (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalDeviceRequest(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = ACPIDeviceInitializePowerRequest(a1, a2, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
