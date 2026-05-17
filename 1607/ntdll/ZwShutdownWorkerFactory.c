/*
 * XREFs of ZwShutdownWorkerFactory @ 0x1800A9850
 * Callers:
 *     TpReleasePool @ 0x1800839A0 (TpReleasePool.c)
 * Callees:
 *     <none>
 */

__int64 ZwShutdownWorkerFactory()
{
  __int64 result; // rax

  result = 418LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
