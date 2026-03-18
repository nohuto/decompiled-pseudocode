/*
 * XREFs of ACPIDeviceInternalDeviceRequest @ 0x1C0008684
 * Callers:
 *     ACPIInitStartDevice @ 0x1C00083A0 (ACPIInitStartDevice.c)
 *     ACPIFanControl @ 0x1C003B300 (ACPIFanControl.c)
 *     ACPIThermalStartDevice @ 0x1C006CB30 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C007ACA0 (ACPIFanStartDevice.c)
 *     ACPIInitStopDevice @ 0x1C007B200 (ACPIInitStopDevice.c)
 * Callees:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 */

__int64 __fastcall ACPIDeviceInternalDeviceRequest(int a1, int a2, int a3, int a4, int a5)
{
  __int64 result; // rax

  result = ACPIDeviceInitializePowerRequest(a1, a2, a3, a4, 0, 0, a5);
  if ( (_DWORD)result == -1073741802 )
    return 259LL;
  return result;
}
