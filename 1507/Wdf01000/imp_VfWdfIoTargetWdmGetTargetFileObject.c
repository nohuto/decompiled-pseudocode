/*
 * XREFs of imp_VfWdfIoTargetWdmGetTargetFileObject @ 0x1C00CBFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_FILE_OBJECT *__fastcall imp_VfWdfIoTargetWdmGetTargetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  return WdfVersion.Functions.pfnWdfIoTargetWdmGetTargetFileObject(DriverGlobals, IoTarget);
}
