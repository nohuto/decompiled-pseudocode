/*
 * XREFs of imp_VfWdfDeviceInitSetRemoveLockOptions @ 0x1C00CA8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetRemoveLockOptions(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_REMOVE_LOCK_OPTIONS *Options)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetRemoveLockOptions(DriverGlobals, DeviceInit, Options);
}
