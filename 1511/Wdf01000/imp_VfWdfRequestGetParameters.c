/*
 * XREFs of imp_VfWdfRequestGetParameters @ 0x1C00B6A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestGetParameters(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_PARAMETERS *Parameters)
{
  WdfVersion.Functions.pfnWdfRequestGetParameters(DriverGlobals, Request, Parameters);
}
