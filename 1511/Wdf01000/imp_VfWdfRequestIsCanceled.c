/*
 * XREFs of imp_VfWdfRequestIsCanceled @ 0x1C00B6A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestIsCanceled(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestIsCanceled)(
           DriverGlobals,
           Request);
}
