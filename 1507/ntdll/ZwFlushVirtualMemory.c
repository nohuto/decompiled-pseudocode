/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800946C0
 * Callers:
 *     _ResCFlushMappedView @ 0x1800F9610 (_ResCFlushMappedView.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFlushVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        PIO_STATUS_BLOCK IoStatus)
{
  NTSTATUS result; // eax

  result = 220;
  __asm { syscall; Low latency system call }
  return result;
}
