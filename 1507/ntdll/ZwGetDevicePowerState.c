/*
 * XREFs of ZwGetDevicePowerState @ 0x180094760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwGetDevicePowerState()
{
  __int64 result; // rax

  result = 230LL;
  __asm { syscall; Low latency system call }
  return result;
}
