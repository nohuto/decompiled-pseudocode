/*
 * XREFs of ZwDeviceIoControlFile_0 @ 0x1C0011750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall ZwDeviceIoControlFile_0(
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
  return ZwDeviceIoControlFile(
           FileHandle,
           Event,
           ApcRoutine,
           ApcContext,
           IoStatusBlock,
           IoControlCode,
           InputBuffer,
           InputBufferLength,
           OutputBuffer,
           OutputBufferLength);
}
