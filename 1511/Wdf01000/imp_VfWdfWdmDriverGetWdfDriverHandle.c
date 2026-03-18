/*
 * XREFs of imp_VfWdfWdmDriverGetWdfDriverHandle @ 0x1C00B7340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDRIVER__ *__fastcall imp_VfWdfWdmDriverGetWdfDriverHandle(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _DRIVER_OBJECT *DriverObject)
{
  return WdfVersion.Functions.pfnWdfWdmDriverGetWdfDriverHandle(DriverGlobals, DriverObject);
}
