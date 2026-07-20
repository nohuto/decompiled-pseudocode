/*
 * XREFs of NtDeviceIoControlFile @ 0x14000C23C
 * Callers:
 *     sub_140005DAC @ 0x140005DAC (sub_140005DAC.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
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
  return __imp_NtDeviceIoControlFile(
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
