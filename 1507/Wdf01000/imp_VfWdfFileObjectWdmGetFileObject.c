/*
 * XREFs of imp_VfWdfFileObjectWdmGetFileObject @ 0x1C00CB250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_FILE_OBJECT *__fastcall imp_VfWdfFileObjectWdmGetFileObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFFILEOBJECT__ *FileObject)
{
  return WdfVersion.Functions.pfnWdfFileObjectWdmGetFileObject(DriverGlobals, FileObject);
}
