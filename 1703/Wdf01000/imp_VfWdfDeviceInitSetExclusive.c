/*
 * XREFs of imp_VfWdfDeviceInitSetExclusive @ 0x1C00CDBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetExclusive(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 IsExclusive)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetExclusive(DriverGlobals, DeviceInit, IsExclusive);
}
