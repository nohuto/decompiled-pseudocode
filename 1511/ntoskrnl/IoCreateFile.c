/*
 * XREFs of IoCreateFile @ 0x1404B282C
 * Callers:
 *     NtCreateMailslotFile @ 0x1404B25FC (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1404B26F4 (NtCreateNamedPipeFile.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x14065B33C (SmKmStoreFileCreateForIoType.c)
 *     VerifierIoCreateFile @ 0x1406C06FC (VerifierIoCreateFile.c)
 *     IopInitCrashDumpRegCallback @ 0x140767D60 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
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
        ULONG Options)
{
  SIZE_T NumberOfBytes; // [rsp+50h] [rbp-38h]

  LODWORD(NumberOfBytes) = EaLength;
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (ULONG64)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           (char *)EaBuffer,
           NumberOfBytes,
           CreateFileType,
           InternalParameters,
           Options,
           0,
           0LL);
}
