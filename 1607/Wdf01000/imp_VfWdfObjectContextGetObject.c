/*
 * XREFs of imp_VfWdfObjectContextGetObject @ 0x1C00C50C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall imp_VfWdfObjectContextGetObject(_WDF_DRIVER_GLOBALS *DriverGlobals, void *ContextPointer)
{
  return WdfVersion.Functions.pfnWdfObjectContextGetObject(DriverGlobals, ContextPointer);
}
