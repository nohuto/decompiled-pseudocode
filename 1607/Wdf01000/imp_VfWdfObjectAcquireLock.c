/*
 * XREFs of imp_VfWdfObjectAcquireLock @ 0x1C00C5090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfObjectAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, void *Object)
{
  WdfVersion.Functions.pfnWdfObjectAcquireLock(DriverGlobals, Object);
}
