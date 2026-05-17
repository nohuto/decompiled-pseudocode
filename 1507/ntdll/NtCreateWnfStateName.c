/*
 * XREFs of NtCreateWnfStateName @ 0x1800944D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtCreateWnfStateName()
{
  __int64 result; // rax

  result = 189LL;
  __asm { syscall; Low latency system call }
  return result;
}
