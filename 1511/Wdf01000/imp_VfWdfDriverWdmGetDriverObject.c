/*
 * XREFs of imp_VfWdfDriverWdmGetDriverObject @ 0x1C00B5010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DRIVER_OBJECT *__fastcall imp_VfWdfDriverWdmGetDriverObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  return WdfVersion.Functions.pfnWdfDriverWdmGetDriverObject(DriverGlobals, Driver);
}
