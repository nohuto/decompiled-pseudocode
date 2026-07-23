/*
 * XREFs of NtQueryIntervalProfile @ 0x180094C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryIntervalProfile(KPROFILE_SOURCE ProfileSource, PULONG Interval)
{
  NTSTATUS result; // eax

  result = 312;
  __asm { syscall; Low latency system call }
  return result;
}
