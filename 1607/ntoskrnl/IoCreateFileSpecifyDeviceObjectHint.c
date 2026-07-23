/*
 * XREFs of IoCreateFileSpecifyDeviceObjectHint @ 0x1404C5C3C
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     IoCreateFileEx @ 0x14045A624 (IoCreateFileEx.c)
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
  _BYTE DriverContext[40]; // [rsp+80h] [rbp-38h] BYREF

  memset(DriverContext, 0, sizeof(DriverContext));
  *(_QWORD *)&DriverContext[16] = DeviceObject;
  strcpy(DriverContext, "(");
  *(_QWORD *)&DriverContext[32] = 1LL;
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
           (PIO_DRIVER_CREATE_CONTEXT)DriverContext);
}
