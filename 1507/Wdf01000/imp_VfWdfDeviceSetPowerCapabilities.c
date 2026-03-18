/*
 * XREFs of imp_VfWdfDeviceSetPowerCapabilities @ 0x1C00CAAF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceSetPowerCapabilities(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_DEVICE_POWER_CAPABILITIES *PowerCapabilities)
{
  WdfVersion.Functions.pfnWdfDeviceSetPowerCapabilities(DriverGlobals, Device, PowerCapabilities);
}
