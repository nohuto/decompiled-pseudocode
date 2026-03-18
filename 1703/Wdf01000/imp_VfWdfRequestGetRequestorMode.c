/*
 * XREFs of imp_VfWdfRequestGetRequestorMode @ 0x1C00D09B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestGetRequestorMode(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestGetRequestorMode)(
           DriverGlobals,
           Request);
}
