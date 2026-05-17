/*
 * XREFs of ZwSetSystemPowerState @ 0x1800951F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemPowerState()
{
  __int64 result; // rax

  result = 399LL;
  __asm { syscall; Low latency system call }
  return result;
}
