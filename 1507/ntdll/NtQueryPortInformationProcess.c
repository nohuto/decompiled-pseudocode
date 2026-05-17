/*
 * XREFs of NtQueryPortInformationProcess @ 0x180094CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtQueryPortInformationProcess()
{
  __int64 result; // rax

  result = 319LL;
  __asm { syscall; Low latency system call }
  return result;
}
