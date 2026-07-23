/*
 * XREFs of ZwFlushVirtualMemory @ 0x140180B70
 * Callers:
 *     VfZwFlushVirtualMemory @ 0x140756054 (VfZwFlushVirtualMemory.c)
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
