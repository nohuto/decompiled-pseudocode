/*
 * XREFs of ZwFlushVirtualMemory @ 0x1401521C0
 * Callers:
 *     VfZwFlushVirtualMemory @ 0x1406D248C (VfZwFlushVirtualMemory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
