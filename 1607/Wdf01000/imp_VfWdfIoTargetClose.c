/*
 * XREFs of imp_VfWdfIoTargetClose @ 0x1C00C4B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall imp_VfWdfIoTargetClose(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  WdfVersion.Functions.pfnWdfIoTargetClose(DriverGlobals, IoTarget);
}
