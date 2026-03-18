/*
 * XREFs of IoCreateFile @ 0x1404D8ECC
 * Callers:
 *     NtCreateMailslotFile @ 0x1404D8C94 (NtCreateMailslotFile.c)
 *     NtCreateNamedPipeFile @ 0x1404D8D90 (NtCreateNamedPipeFile.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x140698F68 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x1407B24BC (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
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
           (int *)&IoStatusBlock->0,
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
