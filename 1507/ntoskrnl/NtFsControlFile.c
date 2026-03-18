/*
 * XREFs of NtFsControlFile @ 0x14042CAF8
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x14042CE40 (PfpPrefetchEntireDirectory.c)
 *     PfpVolumePrefetchMetadata @ 0x140455E28 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1404561D8 (PfpPrefetchDirectoryStream.c)
 *     PfSnPrefetchFileMetadata @ 0x140541200 (PfSnPrefetchFileMetadata.c)
 * Callees:
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
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
           (__int64)IoStatusBlock,
           FsControlCode,
           (__int64)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           0);
}
