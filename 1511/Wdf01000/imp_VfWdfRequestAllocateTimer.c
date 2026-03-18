/*
 * XREFs of imp_VfWdfRequestAllocateTimer @ 0x1C00B6540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfRequestAllocateTimer(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFREQUEST__ *))WdfVersion.Functions.pfnWdfRequestAllocateTimer)(
           DriverGlobals,
           Request);
}
