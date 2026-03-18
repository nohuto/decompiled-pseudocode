/*
 * XREFs of imp_VfWdfDpcEnqueue @ 0x1C00C3F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDPC__ *Dpc)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFDPC__ *))WdfVersion.Functions.pfnWdfDpcEnqueue)(
           DriverGlobals,
           Dpc);
}
