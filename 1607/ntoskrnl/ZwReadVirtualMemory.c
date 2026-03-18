/*
 * XREFs of ZwReadVirtualMemory @ 0x14015A460
 * Callers:
 *     MmCopyMemory @ 0x1401E51D4 (MmCopyMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T NumberOfBytesToRead,
        PSIZE_T NumberOfBytesRead)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, Buffer);
}
