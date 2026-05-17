/*
 * XREFs of NtSetInformationDebugObject @ 0x180095090
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtSetInformationDebugObject()
{
  __int64 result; // rax

  result = 377LL;
  __asm { syscall; Low latency system call }
  return result;
}
