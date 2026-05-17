/*
 * XREFs of NtDisableLastKnownGood @ 0x1800945B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtDisableLastKnownGood()
{
  __int64 result; // rax

  result = 203LL;
  __asm { syscall; Low latency system call }
  return result;
}
