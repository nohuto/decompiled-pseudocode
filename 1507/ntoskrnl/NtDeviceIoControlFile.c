/*
 * XREFs of NtDeviceIoControlFile @ 0x14048DB20
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403ECD88 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
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
           (__int64)IoStatusBlock,
           IoControlCode,
           (__int64)InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength,
           1);
}
