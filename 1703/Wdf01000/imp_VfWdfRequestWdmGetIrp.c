/*
 * XREFs of imp_VfWdfRequestWdmGetIrp @ 0x1C00D0D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_IRP *__fastcall imp_VfWdfRequestWdmGetIrp(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return WdfVersion.Functions.pfnWdfRequestWdmGetIrp(DriverGlobals, Request);
}
