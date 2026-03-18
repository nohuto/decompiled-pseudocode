/*
 * XREFs of imp_VfWdfDeviceInitFree @ 0x1C00CDAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitFree(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitFree(DriverGlobals, DeviceInit);
}
