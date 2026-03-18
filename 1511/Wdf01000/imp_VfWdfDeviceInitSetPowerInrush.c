/*
 * XREFs of imp_VfWdfDeviceInitSetPowerInrush @ 0x1C00B4860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetPowerInrush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerInrush(DriverGlobals, DeviceInit);
}
