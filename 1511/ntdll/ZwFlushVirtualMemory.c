/*
 * XREFs of ZwFlushVirtualMemory @ 0x1800A6C50
 * Callers:
 *     _ResCFlushMappedView @ 0x1800F8F28 (_ResCFlushMappedView.c)
 * Callees:
 *     <none>
 */

__int64 ZwFlushVirtualMemory()
{
  __int64 result; // rax

  result = 221LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
