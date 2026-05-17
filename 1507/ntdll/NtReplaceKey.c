/*
 * XREFs of NtReplaceKey @ 0x180094EA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtReplaceKey()
{
  __int64 result; // rax

  result = 346LL;
  __asm { syscall; Low latency system call }
  return result;
}
