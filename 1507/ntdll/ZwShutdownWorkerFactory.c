/*
 * XREFs of ZwShutdownWorkerFactory @ 0x180095290
 * Callers:
 *     TpReleasePool @ 0x180073F00 (TpReleasePool.c)
 * Callees:
 *     <none>
 */

__int64 ZwShutdownWorkerFactory()
{
  __int64 result; // rax

  result = 409LL;
  __asm { syscall; Low latency system call }
  return result;
}
