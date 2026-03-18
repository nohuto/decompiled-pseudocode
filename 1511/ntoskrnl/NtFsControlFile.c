/*
 * XREFs of NtFsControlFile @ 0x1404D8658
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x1404B0254 (PfSnPrefetchFileMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x1404D8980 (PfpPrefetchEntireDirectory.c)
 *     PfpVolumePrefetchMetadata @ 0x1404DC308 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1404DC6A4 (PfpPrefetchDirectoryStream.c)
 * Callees:
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtFsControlFile(
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
  return IopXxxControlFile(
           FileHandle,
           (IRP *)Event,
           (LARGE_INTEGER)ApcRoutine,
           (__int64)ApcContext,
           IoStatusBlock,
           FsControlCode,
           (char *)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           0);
}
