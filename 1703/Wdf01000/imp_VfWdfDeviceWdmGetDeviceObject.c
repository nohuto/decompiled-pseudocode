/*
 * XREFs of imp_VfWdfDeviceWdmGetDeviceObject @ 0x1C00CE1C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfDeviceWdmGetDeviceObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  return WdfVersion.Functions.pfnWdfDeviceWdmGetDeviceObject(DriverGlobals, Device);
}
