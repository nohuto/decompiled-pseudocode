/*
 * XREFs of NtLockProductActivationKeys @ 0x1800948A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtLockProductActivationKeys()
{
  __int64 result; // rax

  result = 250LL;
  __asm { syscall; Low latency system call }
  return result;
}
