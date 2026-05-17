/*
 * XREFs of NtQuerySystemEnvironmentValue @ 0x180094D50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemEnvironmentValue()
{
  __int64 result; // rax

  result = 325LL;
  __asm { syscall; Low latency system call }
  return result;
}
