/*
 * XREFs of imp_VfWdfMemoryCreateFromLookaside @ 0x1C00C5050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfMemoryCreateFromLookaside(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFLOOKASIDE__ *Lookaside,
        WDFMEMORY__ **Memory)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFLOOKASIDE__ *, WDFMEMORY__ **))WdfVersion.Functions.pfnWdfMemoryCreateFromLookaside)(
           DriverGlobals,
           Lookaside,
           Memory);
}
