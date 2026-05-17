/*
 * XREFs of NtSetDriverEntryOrder @ 0x180095040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetDriverEntryOrder()
{
  __int64 result; // rax

  result = 372LL;
  __asm { syscall; Low latency system call }
  return result;
}
