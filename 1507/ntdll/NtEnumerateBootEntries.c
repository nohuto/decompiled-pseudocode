/*
 * XREFs of NtEnumerateBootEntries @ 0x1800945F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtEnumerateBootEntries()
{
  __int64 result; // rax

  result = 207LL;
  __asm { syscall; Low latency system call }
  return result;
}
