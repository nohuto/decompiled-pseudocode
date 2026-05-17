/*
 * XREFs of NtSetBootOptions @ 0x180094FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetBootOptions()
{
  __int64 result; // rax

  result = 365LL;
  __asm { syscall; Low latency system call }
  return result;
}
