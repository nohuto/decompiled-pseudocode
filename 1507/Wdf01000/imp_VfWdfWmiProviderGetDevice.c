/*
 * XREFs of imp_VfWdfWmiProviderGetDevice @ 0x1C00CD560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfWmiProviderGetDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider)
{
  return WdfVersion.Functions.pfnWdfWmiProviderGetDevice(DriverGlobals, WmiProvider);
}
