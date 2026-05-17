/*
 * XREFs of NtQueryDriverEntryOrder @ 0x180094BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryDriverEntryOrder()
{
  __int64 result; // rax

  result = 300LL;
  __asm { syscall; Low latency system call }
  return result;
}
