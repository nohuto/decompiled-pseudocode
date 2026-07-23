/*
 * XREFs of ZwReadVirtualMemory @ 0x140150E00
 * Callers:
 *     MmCopyMemory @ 0x1401D45A8 (MmCopyMemory.c)
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
  return KiServiceInternal(ProcessHandle);
}
