/*
 * XREFs of imp_VfWdfInterruptTryToAcquireLock @ 0x1C00C43A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall imp_VfWdfInterruptTryToAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  return ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFINTERRUPT__ *))WdfVersion.Functions.pfnWdfInterruptTryToAcquireLock)(
           DriverGlobals,
           Interrupt);
}
