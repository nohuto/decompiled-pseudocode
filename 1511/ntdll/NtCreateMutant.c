/*
 * XREFs of NtCreateMutant @ 0x1800A65B0
 * Callers:
 *     _ResCreateMutex @ 0x1800F9524 (_ResCreateMutex.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtCreateMutant(
        PHANDLE MutantHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN InitialOwner)
{
  NTSTATUS result; // eax

  result = 168;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
