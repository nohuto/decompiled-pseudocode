/*
 * XREFs of ZwSetSystemEnvironmentValue @ 0x1800951C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemEnvironmentValue()
{
  __int64 result; // rax

  result = 396LL;
  __asm { syscall; Low latency system call }
  return result;
}
