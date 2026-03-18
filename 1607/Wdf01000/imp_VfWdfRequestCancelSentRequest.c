/*
 * XREFs of imp_VfWdfRequestCancelSentRequest @ 0x1C00C5570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestCancelSentRequest(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestCancelSentRequest)(
           DriverGlobals,
           Request);
}
