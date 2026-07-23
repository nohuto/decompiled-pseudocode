/*
 * XREFs of NtQueryBootOptions @ 0x180094B90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryBootOptions(PBOOT_OPTIONS BootOptions, PULONG BootOptionsLength)
{
  NTSTATUS result; // eax

  result = 297;
  __asm { syscall; Low latency system call }
  return result;
}
