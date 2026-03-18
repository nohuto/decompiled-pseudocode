/*
 * XREFs of imp_VfWdfWmiInstanceGetProvider @ 0x1C00CD520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFWMIPROVIDER__ *__fastcall imp_VfWdfWmiInstanceGetProvider(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFWMIINSTANCE__ *WmiInstance)
{
  return WdfVersion.Functions.pfnWdfWmiInstanceGetProvider(DriverGlobals, WmiInstance);
}
