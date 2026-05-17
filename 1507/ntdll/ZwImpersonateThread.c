/*
 * XREFs of ZwImpersonateThread @ 0x1800947E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwImpersonateThread()
{
  __int64 result; // rax

  result = 238LL;
  __asm { syscall; Low latency system call }
  return result;
}
