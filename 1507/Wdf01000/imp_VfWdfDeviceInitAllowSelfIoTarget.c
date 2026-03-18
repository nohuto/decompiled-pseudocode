/*
 * XREFs of imp_VfWdfDeviceInitAllowSelfIoTarget @ 0x1C00CA6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitAllowSelfIoTarget(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE_INIT *DeviceInit)
{
  WdfVersion.Functions.pfnWdfDeviceInitAllowSelfIoTarget(DriverGlobals, DeviceInit);
}
