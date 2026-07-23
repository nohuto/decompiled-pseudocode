/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800A6C50
 * Callers:
 *     _ResCFlushMappedView @ 0x1800F8F28 (_ResCFlushMappedView.c)
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

  result = 221;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
