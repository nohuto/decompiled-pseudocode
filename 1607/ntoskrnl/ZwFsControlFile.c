/*
 * XREFs of ZwFsControlFile @ 0x14015A3A0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     PopSanityCheckHiberFile @ 0x1405479CC (PopSanityCheckHiberFile.c)
 *     RtlUnlockBootStatusData @ 0x140547DAC (RtlUnlockBootStatusData.c)
 *     PopClearHiberFileSignature @ 0x1405484F4 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578344 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x140699274 (SmKmStoreFileGetExtents.c)
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
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
