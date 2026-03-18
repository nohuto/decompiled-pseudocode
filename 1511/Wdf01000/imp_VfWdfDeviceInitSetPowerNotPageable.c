/*
 * XREFs of imp_VfWdfDeviceInitSetPowerNotPageable @ 0x1C00B4870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetPowerNotPageable(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPowerNotPageable(DriverGlobals, DeviceInit);
}
