/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x1800951D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemEnvironmentValueEx()
{
  __int64 result; // rax

  result = 397LL;
  __asm { syscall; Low latency system call }
  return result;
}
