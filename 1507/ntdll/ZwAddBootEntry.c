/*
 * XREFs of ZwAddBootEntry @ 0x180093F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddBootEntry(PBOOT_ENTRY BootEntry, PULONG Id)
{
  NTSTATUS result; // eax

  result = 104;
  __asm { syscall; Low latency system call }
  return result;
}
