/*
 * XREFs of ZwWriteVirtualMemory @ 0x14015A930
 * Callers:
 *     SepAdtCopyToLsaSharedMemory @ 0x140696094 (SepAdtCopyToLsaSharedMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWriteVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToWrite,
        PSIZE_T NumberOfBytesWritten)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
