/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1800950E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetInformationSymbolicLink()
{
  __int64 result; // rax

  result = 382LL;
  __asm { syscall; Low latency system call }
  return result;
}
