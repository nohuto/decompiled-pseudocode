/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceType @ 0x1C00B47E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceType(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceType)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceType(DriverGlobals, DeviceInit, DeviceType);
}
