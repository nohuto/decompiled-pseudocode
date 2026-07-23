/*
 * XREFs of NtRestoreKey @ 0x1800A7D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRestoreKey(HANDLE KeyHandle, HANDLE FileHandle, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 355;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
