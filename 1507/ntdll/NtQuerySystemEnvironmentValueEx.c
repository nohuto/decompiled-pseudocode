/*
 * XREFs of NtQuerySystemEnvironmentValueEx @ 0x180094D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQuerySystemEnvironmentValueEx()
{
  __int64 result; // rax

  result = 326LL;
  __asm { syscall; Low latency system call }
  return result;
}
