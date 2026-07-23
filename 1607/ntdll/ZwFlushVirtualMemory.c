/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800A7FF0
 * Callers:
 *     _ResCFlushMappedView @ 0x1801037FC (_ResCFlushMappedView.c)
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

  result = 223;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
