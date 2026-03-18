/*
 * XREFs of imp_VfWdfIoTargetPurge @ 0x1C00CF860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoTargetPurge(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetPurge(DriverGlobals, IoTarget, (_WDF_IO_TARGET_PURGE_IO_ACTION)Action);
}
