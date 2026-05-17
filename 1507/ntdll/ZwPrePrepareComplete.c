/*
 * XREFs of ZwPrePrepareComplete @ 0x180094AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwPrePrepareComplete()
{
  __int64 result; // rax

  result = 286LL;
  __asm { syscall; Low latency system call }
  return result;
}
