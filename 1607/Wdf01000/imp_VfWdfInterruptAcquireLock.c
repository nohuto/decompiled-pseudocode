/*
 * XREFs of imp_VfWdfInterruptAcquireLock @ 0x1C00C4290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  WdfVersion.Functions.pfnWdfInterruptAcquireLock(DriverGlobals, Interrupt);
}
