/*
 * XREFs of imp_VfWdfDeviceInitSetDeviceClass @ 0x1C00C37E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetDeviceClass(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        const _GUID *DeviceClassGuid)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetDeviceClass(DriverGlobals, DeviceInit, DeviceClassGuid);
}
