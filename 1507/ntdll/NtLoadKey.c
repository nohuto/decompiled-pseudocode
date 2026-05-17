/*
 * XREFs of NtLoadKey @ 0x180094860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtLoadKey()
{
  __int64 result; // rax

  result = 246LL;
  __asm { syscall; Low latency system call }
  return result;
}
