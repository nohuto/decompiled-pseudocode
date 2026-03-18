/*
 * XREFs of imp_VfWdfRequestSetCompletionRoutine @ 0x1C00CCD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestSetCompletionRoutine(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *CompletionRoutine)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *),
        void *CompletionContext)
{
  WdfVersion.Functions.pfnWdfRequestSetCompletionRoutine(DriverGlobals, Request, CompletionRoutine, CompletionContext);
}
