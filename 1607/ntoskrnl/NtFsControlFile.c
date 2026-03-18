/*
 * XREFs of NtFsControlFile @ 0x1405084DC
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1403ED2F4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1403ED670 (PfpPrefetchDirectoryStream.c)
 *     PfSnPrefetchFileMetadata @ 0x1404D3B8C (PfSnPrefetchFileMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x140508800 (PfpPrefetchEntireDirectory.c)
 * Callees:
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
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
  char v13; // [rsp+50h] [rbp-18h]

  v13 = 0;
  return IopXxxControlFile(
           FileHandle,
           Event,
           (LARGE_INTEGER)ApcRoutine,
           (__int64)ApcContext,
           IoStatusBlock,
           FsControlCode,
           (char *)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           v13);
}
