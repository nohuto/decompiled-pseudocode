/*
 * XREFs of NtAddDriverEntry @ 0x1800A5DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtAddDriverEntry(PEFI_DRIVER_ENTRY DriverEntry, PULONG Id)
{
  NTSTATUS result; // eax

  result = 105;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
