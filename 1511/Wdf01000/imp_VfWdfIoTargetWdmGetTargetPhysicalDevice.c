/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C00B5F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DEVICE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetPhysicalDevice(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetPhysicalDevice(DriverGlobals, IoTarget);
}
