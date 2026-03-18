/*
 * XREFs of imp_VfWdfRequestGetRequestorProcessId @ 0x1C00D09D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestGetRequestorProcessId(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestGetRequestorProcessId)(
           DriverGlobals,
           Request);
}
