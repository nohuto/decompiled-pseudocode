/*
 * XREFs of ZwSinglePhaseReject @ 0x1800952B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSinglePhaseReject()
{
  __int64 result; // rax

  result = 411LL;
  __asm { syscall; Low latency system call }
  return result;
}
