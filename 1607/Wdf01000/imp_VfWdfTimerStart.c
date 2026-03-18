/*
 * XREFs of imp_VfWdfTimerStart @ 0x1C00C5D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfTimerStart(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFTIMER__ *Timer, __int64 DueTime)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFTIMER__ *, __int64))WdfVersion.Functions.pfnWdfTimerStart)(
           DriverGlobals,
           Timer,
           DueTime);
}
