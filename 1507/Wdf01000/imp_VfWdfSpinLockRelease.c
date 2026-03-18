/*
 * XREFs of imp_VfWdfSpinLockRelease @ 0x1C00CCE00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFSPINLOCK__ *SpinLock)
{
  WdfVersion.Functions.pfnWdfSpinLockRelease(DriverGlobals, SpinLock);
}
