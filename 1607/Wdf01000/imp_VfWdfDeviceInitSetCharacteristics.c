/*
 * XREFs of imp_VfWdfDeviceInitSetCharacteristics @ 0x1C00C37C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetCharacteristics(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        __int64 DeviceCharacteristics,
        __int64 OrInValues)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetCharacteristics(DriverGlobals, DeviceInit, DeviceCharacteristics, OrInValues);
}
