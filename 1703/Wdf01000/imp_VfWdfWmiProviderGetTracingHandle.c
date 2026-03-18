/*
 * XREFs of imp_VfWdfWmiProviderGetTracingHandle @ 0x1C00D1860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall imp_VfWdfWmiProviderGetTracingHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIPROVIDER__ *WmiProvider)
{
  return WdfVersion.Functions.pfnWdfWmiProviderGetTracingHandle(DriverGlobals, WmiProvider);
}
