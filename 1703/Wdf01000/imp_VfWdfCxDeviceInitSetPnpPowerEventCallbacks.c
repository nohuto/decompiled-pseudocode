/*
 * XREFs of imp_VfWdfCxDeviceInitSetPnpPowerEventCallbacks @ 0x1C00CD550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfCxDeviceInitSetPnpPowerEventCallbacks(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCXDEVICE_INIT *CxDeviceInit,
        _WDFCX_PNPPOWER_EVENT_CALLBACKS *CxPnpPowerCallbacks)
{
  WdfVersion.Functions.pfnWdfCxDeviceInitSetPnpPowerEventCallbacks(DriverGlobals, CxDeviceInit, CxPnpPowerCallbacks);
}
