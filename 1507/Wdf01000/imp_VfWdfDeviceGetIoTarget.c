/*
 * XREFs of imp_VfWdfDeviceGetIoTarget @ 0x1C00CA6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFIOTARGET__ *__fastcall imp_VfWdfDeviceGetIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceGetIoTarget(DriverGlobals, Device);
}
