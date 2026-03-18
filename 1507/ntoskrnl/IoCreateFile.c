/*
 * XREFs of IoCreateFile @ 0x140508400
 * Callers:
 *     NtCreateNamedPipeFile @ 0x1405496CC (NtCreateNamedPipeFile.c)
 *     NtCreateMailslotFile @ 0x140557BC8 (NtCreateMailslotFile.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1406DDB90 (SmKmStoreFileCreateForIoType.c)
 *     VerifierIoCreateFile @ 0x140741EF0 (VerifierIoCreateFile.c)
 *     IopInitCrashDumpRegCallback @ 0x1407DC720 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
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
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           EaBuffer,
           NumberOfBytes,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
