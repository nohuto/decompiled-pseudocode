/*
 * XREFs of imp_VfWdfRequestGetIoQueue @ 0x1C00C5A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFQUEUE__ *__fastcall imp_VfWdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetIoQueue(DriverGlobals, Request);
}
