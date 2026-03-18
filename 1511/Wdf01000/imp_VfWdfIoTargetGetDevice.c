/*
 * XREFs of imp_VfWdfIoTargetGetDevice @ 0x1C00B5CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfIoTargetGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetGetDevice(DriverGlobals, IoTarget);
}
