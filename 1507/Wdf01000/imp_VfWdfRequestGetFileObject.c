/*
 * XREFs of imp_VfWdfRequestGetFileObject @ 0x1C00CCB80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFFILEOBJECT__ *__fastcall imp_VfWdfRequestGetFileObject(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestGetFileObject(DriverGlobals, Request);
}
