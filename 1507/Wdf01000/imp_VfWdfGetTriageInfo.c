/*
 * XREFs of imp_VfWdfGetTriageInfo @ 0x1C00CB260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfGetTriageInfo(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  return WdfVersion.Functions.pfnWdfGetTriageInfo(DriverGlobals);
}
