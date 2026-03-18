/*
 * XREFs of imp_VfWdfDeviceInitSetRequestAttributes @ 0x1C00B48D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetRequestAttributes(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRequestAttributes(DriverGlobals, DeviceInit, RequestAttributes);
}
