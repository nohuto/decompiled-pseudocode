/*
 * XREFs of NtSetIntervalProfile @ 0x180095140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetIntervalProfile(ULONG Interval, KPROFILE_SOURCE Source)
{
  NTSTATUS result; // eax

  result = 388;
  __asm { syscall; Low latency system call }
  return result;
}
