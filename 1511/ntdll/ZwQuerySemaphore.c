/*
 * XREFs of ZwQuerySemaphore @ 0x1800A7970
 * Callers:
 *     PsspDumpObject_Semaphore @ 0x18008AEF0 (PsspDumpObject_Semaphore.c)
 * Callees:
 *     <none>
 */

__int64 ZwQuerySemaphore()
{
  __int64 result; // rax

  result = 326LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
