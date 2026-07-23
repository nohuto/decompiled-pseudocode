/*
 * XREFs of ZwFsControlFile @ 0x14017F710
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     PopSanityCheckHiberFile @ 0x14056C0AC (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14056C368 (PopClearHiberFileSignature.c)
 *     RtlUnlockBootStatusData @ 0x140584278 (RtlUnlockBootStatusData.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405BB80C (FsRtlpRegisterProviderWithMUP.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1406DDE9C (SmKmStoreFileGetExtents.c)
 *     VfZwFsControlFile @ 0x140756150 (VfZwFsControlFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
