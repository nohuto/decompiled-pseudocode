/*
 * XREFs of IoGetDeviceObjectPointer_0 @ 0x1C000FEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall IoGetDeviceObjectPointer_0(
        PUNICODE_STRING ObjectName,
        ACCESS_MASK DesiredAccess,
        PFILE_OBJECT *FileObject,
        PDEVICE_OBJECT *DeviceObject)
{
  return IoGetDeviceObjectPointer(ObjectName, DesiredAccess, FileObject, DeviceObject);
}
