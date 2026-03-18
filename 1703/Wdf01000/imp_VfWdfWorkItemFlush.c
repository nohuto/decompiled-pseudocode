/*
 * XREFs of imp_VfWdfWorkItemFlush @ 0x1C00D18E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfWorkItemFlush(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFWORKITEM__ *WorkItem)
{
  WdfVersion.Functions.pfnWdfWorkItemFlush(DriverGlobals, WorkItem);
}
