/*
 * XREFs of ZwWaitForWorkViaWorkerFactory @ 0x1800A9BF0
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     <none>
 */

__int64 ZwWaitForWorkViaWorkerFactory()
{
  __int64 result; // rax

  result = 447LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
