/*
 * XREFs of imp_VfWdfDeviceInitSetPnpPowerEventCallbacks @ 0x1C00CA850
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_PNPPOWER_EVENT_CALLBACKS *PnpPowerEventCallbacks)
{
  WdfVersion.Functions.pfnWdfDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, DeviceInit, PnpPowerEventCallbacks);
}
