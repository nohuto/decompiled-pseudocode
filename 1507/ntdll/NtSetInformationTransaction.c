/*
 * XREFs of NtSetInformationTransaction @ 0x180095100
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetInformationTransaction()
{
  __int64 result; // rax

  result = 384LL;
  __asm { syscall; Low latency system call }
  return result;
}
