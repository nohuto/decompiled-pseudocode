/*
 * XREFs of imp_VfWdfDriverGetRegistryPath @ 0x1C00C3FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__fastcall imp_VfWdfDriverGetRegistryPath(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  return WdfVersion.Functions.pfnWdfDriverGetRegistryPath(DriverGlobals, Driver);
}
