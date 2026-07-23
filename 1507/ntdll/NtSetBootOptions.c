/*
 * XREFs of NtSetBootOptions @ 0x180094FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetBootOptions(PBOOT_OPTIONS BootOptions, ULONG FieldsToChange)
{
  NTSTATUS result; // eax

  result = 365;
  __asm { syscall; Low latency system call }
  return result;
}
