/*
 * XREFs of NtQueryDirectoryFile @ 0x1404F0330
 * Callers:
 *     <none>
 * Callees:
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 */

NTSTATUS __stdcall NtQueryDirectoryFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        BOOLEAN ReturnSingleEntry,
        PUNICODE_STRING FileName,
        BOOLEAN RestartScan)
{
  NTSTATUS result; // eax
  SIZE_T v12; // [rsp+30h] [rbp-88h]
  char v13; // [rsp+58h] [rbp-60h]
  char v14; // [rsp+90h] [rbp-28h] BYREF
  char v15[7]; // [rsp+91h] [rbp-27h] BYREF
  __int64 v16; // [rsp+98h] [rbp-20h] BYREF
  PIRP Irp; // [rsp+A0h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject[2]; // [rsp+A8h] [rbp-10h] BYREF

  LODWORD(v12) = Length;
  result = BuildQueryDirectoryIrp(
             (int)FileHandle,
             (int)Event,
             (int)ApcRoutine,
             (int)ApcContext,
             (__int64)IoStatusBlock,
             FileInformation,
             v12,
             FileInformationClass,
             ReturnSingleEntry,
             (__int64)FileName,
             RestartScan,
             v13,
             (__int64)&v14,
             (__int64)DeviceObject,
             (__int64)&Irp,
             (__int64)&v16,
             (__int64)v15);
  if ( !result )
    return IopSynchronousServiceTail(DeviceObject[0], Irp, v16, 1, v15[0], v14, 2u);
  return result;
}
