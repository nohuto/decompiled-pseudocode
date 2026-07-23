/*
 * XREFs of ZwSetVolumeInformationFile @ 0x180095260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetVolumeInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FsInformation,
        ULONG Length,
        FSINFOCLASS FsInformationClass)
{
  NTSTATUS result; // eax

  result = 406;
  __asm { syscall; Low latency system call }
  return result;
}
