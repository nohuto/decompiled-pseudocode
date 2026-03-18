/*
 * XREFs of imp_VfWdfDeviceGetSelfIoTarget @ 0x1C00B46B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetSelfIoTarget(DriverGlobals, Device);
}
