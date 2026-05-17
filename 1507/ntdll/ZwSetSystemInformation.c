/*
 * XREFs of ZwSetSystemInformation @ 0x1800951E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemInformation()
{
  __int64 result; // rax

  result = 398LL;
  __asm { syscall; Low latency system call }
  return result;
}
