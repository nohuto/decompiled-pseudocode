/*
 * XREFs of imp_VfWdfFileObjectGetDevice @ 0x1C00B5220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

WDFDEVICE__ *__fastcall imp_VfWdfFileObjectGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectGetDevice(DriverGlobals, FileObject);
}
