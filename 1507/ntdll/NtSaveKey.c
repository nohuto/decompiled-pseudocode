/*
 * XREFs of NtSaveKey @ 0x180094F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSaveKey()
{
  __int64 result; // rax

  result = 359LL;
  __asm { syscall; Low latency system call }
  return result;
}
