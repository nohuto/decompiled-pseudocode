/*
 * XREFs of imp_VfWdfDeviceGetDriver @ 0x1C00CA680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDRIVER__ *__fastcall imp_VfWdfDeviceGetDriver(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetDriver(DriverGlobals, Device);
}
