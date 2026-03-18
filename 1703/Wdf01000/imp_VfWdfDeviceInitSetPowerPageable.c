/*
 * XREFs of imp_VfWdfDeviceInitSetPowerPageable @ 0x1C00CDCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetPowerPageable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerPageable(DriverGlobals, DeviceInit);
}
