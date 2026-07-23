/*
 * XREFs of NtDeviceIoControlFile @ 0x140442D70
 * Callers:
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 * Callees:
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
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
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-30h]

  LODWORD(NumberOfBytes) = InputBufferLength;
  return IopXxxControlFile(
           FileHandle,
           (__int64)IoStatusBlock,
           IoControlCode,
           InputBuffer,
           NumberOfBytes,
           OutputBuffer,
           OutputBufferLength,
           1);
}
