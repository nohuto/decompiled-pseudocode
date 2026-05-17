/*
 * XREFs of NtReleaseWorkerFactoryWorker @ 0x1800A8F90
 * Callers:
 *     TppPrepareDirectParams @ 0x180020180 (TppPrepareDirectParams.c)
 *     TppWorkpExecuteCallback @ 0x180020650 (TppWorkpExecuteCallback.c)
 *     TpPostTask @ 0x18003D028 (TpPostTask.c)
 * Callees:
 *     <none>
 */

__int64 NtReleaseWorkerFactoryWorker()
{
  __int64 result; // rax

  result = 348LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
