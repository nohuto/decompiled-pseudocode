/*
 * XREFs of NtModifyBootEntry @ 0x180094920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtModifyBootEntry()
{
  __int64 result; // rax

  result = 258LL;
  __asm { syscall; Low latency system call }
  return result;
}
