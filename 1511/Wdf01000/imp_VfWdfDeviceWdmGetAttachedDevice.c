/*
 * XREFs of imp_VfWdfDeviceWdmGetAttachedDevice @ 0x1C00B4BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetAttachedDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetAttachedDevice(DriverGlobals, Device);
}
