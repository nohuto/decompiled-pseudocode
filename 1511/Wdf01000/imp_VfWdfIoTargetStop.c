/*
 * XREFs of imp_VfWdfIoTargetStop @ 0x1C00B5F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoTargetStop(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget, __int64 Action)
{
  WdfVersion.Functions.pfnWdfIoTargetStop(DriverGlobals, IoTarget, (_WDF_IO_TARGET_SENT_IO_ACTION)Action);
}
