/*
 * XREFs of VerifierIoGetDeviceObjectPointer @ 0x140741F68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierIoGetDeviceObjectPointer(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  return pXdvIoGetDeviceObjectPointer(ObjectName, DesiredAccess, FileObject, DeviceObject);
}
