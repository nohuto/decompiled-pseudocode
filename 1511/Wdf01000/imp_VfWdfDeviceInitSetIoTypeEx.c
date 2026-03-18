/*
 * XREFs of imp_VfWdfDeviceInitSetIoTypeEx @ 0x1C00B4840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetIoTypeEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_IO_TYPE_CONFIG *IoTypeConfig)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetIoTypeEx(DriverGlobals, DeviceInit, IoTypeConfig);
}
