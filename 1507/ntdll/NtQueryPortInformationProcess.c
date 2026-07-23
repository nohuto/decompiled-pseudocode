/*
 * XREFs of NtQueryPortInformationProcess @ 0x180094CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS NtQueryPortInformationProcess(void)
{
  NTSTATUS result; // eax

  result = 319;
  __asm { syscall; Low latency system call }
  return result;
}
