/*
 * XREFs of imp_VfWdfRequestMarkCancelable @ 0x1C00CCC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestMarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  WdfVersion.Functions.pfnWdfRequestMarkCancelable(DriverGlobals, Request, EvtRequestCancel);
}
