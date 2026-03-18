/*
 * XREFs of IoCreateFileSpecifyDeviceObjectHint @ 0x140557130
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     IoCreateFileEx @ 0x14050A0C0 (IoCreateFileEx.c)
 */

NTSTATUS __stdcall IoCreateFileSpecifyDeviceObjectHint(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options,
        PVOID DeviceObject)
{
  struct _IO_DRIVER_CREATE_CONTEXT DriverContext; // [rsp+80h] [rbp-28h] BYREF

  memset(&DriverContext, 0, sizeof(DriverContext));
  DriverContext.DeviceObjectHint = DeviceObject;
  DriverContext.Size = 32;
  return IoCreateFileEx(
           FileHandle,
           DesiredAccess,
           ObjectAttributes,
           IoStatusBlock,
           AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           EaLength,
           CreateFileType,
           InternalParameters,
           Options,
           &DriverContext);
}
