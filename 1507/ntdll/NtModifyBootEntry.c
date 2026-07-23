/*
 * XREFs of NtModifyBootEntry @ 0x180094920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtModifyBootEntry(PBOOT_ENTRY BootEntry)
{
  NTSTATUS result; // eax

  result = 258;
  __asm { syscall; Low latency system call }
  return result;
}
