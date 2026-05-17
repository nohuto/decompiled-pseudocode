/*
 * XREFs of NtDeviceIoControlFile @ 0x180093970
 * Callers:
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x180081290 (RtlQueryVolumeDiskSpeedPolicy.c)
 * Callees:
 *     <none>
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
  NTSTATUS result; // eax

  result = 7;
  __asm { syscall; Low latency system call }
  return result;
}
