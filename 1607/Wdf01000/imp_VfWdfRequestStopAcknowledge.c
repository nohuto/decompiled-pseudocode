/*
 * XREFs of imp_VfWdfRequestStopAcknowledge @ 0x1C00C5C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfRequestStopAcknowledge(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        __int64 Requeue)
{
  WdfVersion.Functions.pfnWdfRequestStopAcknowledge(DriverGlobals, Request, Requeue);
}
