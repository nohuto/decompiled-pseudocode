/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A7BB0
 * Callers:
 *     TppPrepareDirectParams @ 0x18002CF40 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x18002D420 (TppWorkpExecuteCallback.c)
 *     TpPostTask @ 0x18002E55C (TpPostTask.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseWorkerFactoryWorker()
{
  __int64 result; // rax

  result = 344LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
