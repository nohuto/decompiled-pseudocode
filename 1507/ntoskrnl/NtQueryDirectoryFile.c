/*
 * XREFs of NtQueryDirectoryFile @ 0x1404BC990
 * Callers:
 *     <none>
 * Callees:
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
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
  char v15; // [rsp+91h] [rbp-27h] BYREF
  PVOID Object; // [rsp+98h] [rbp-20h] BYREF
  PIRP Irp; // [rsp+A0h] [rbp-18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A8h] [rbp-10h] BYREF

  LODWORD(v12) = Length;
  result = BuildQueryDirectoryIrp(
             FileHandle,
             Event,
             (__int64)ApcRoutine,
             (__int64)ApcContext,
             (unsigned int *)IoStatusBlock,
             FileInformation,
             v12,
             FileInformationClass,
             ReturnSingleEntry,
             (__int128 *)FileName,
             RestartScan,
             v13,
             &v14,
             &DeviceObject,
             (__int64 *)&Irp,
             (struct _FILE_OBJECT **)&Object,
             (PIRP)&v15);
  if ( !result )
    return IopSynchronousServiceTail(DeviceObject, Irp, Object, v15, v14, 2);
  return result;
}
