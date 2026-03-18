/*
 * XREFs of imp_VfWdfRequestGetCompletionParams @ 0x1C00CCB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestGetCompletionParams(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        _WDF_REQUEST_COMPLETION_PARAMS *Params)
{
  WdfVersion.Functions.pfnWdfRequestGetCompletionParams(DriverGlobals, Request, Params);
}
