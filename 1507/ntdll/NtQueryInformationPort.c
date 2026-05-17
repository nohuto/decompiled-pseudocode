/*
 * XREFs of NtQueryInformationPort @ 0x180094C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationPort()
{
  __int64 result; // rax

  result = 306LL;
  __asm { syscall; Low latency system call }
  return result;
}
