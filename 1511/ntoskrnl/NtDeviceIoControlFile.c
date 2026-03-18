/*
 * XREFs of NtDeviceIoControlFile @ 0x140411FA0
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 */

NTSTATUS __stdcall NtDeviceIoControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
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
           IoControlCode,
           (char *)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           1u);
}
