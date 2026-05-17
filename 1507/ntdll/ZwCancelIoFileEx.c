/*
 * XREFs of ZwCancelIoFileEx @ 0x1800941D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCancelIoFileEx()
{
  __int64 result; // rax

  result = 141LL;
  __asm { syscall; Low latency system call }
  return result;
}
