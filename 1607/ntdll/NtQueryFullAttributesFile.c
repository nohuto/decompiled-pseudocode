/*
 * XREFs of NtQueryFullAttributesFile @ 0x1800A8A90
 * Callers:
 *     _ResGetFileAttributesEx @ 0x180104888 (_ResGetFileAttributesEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 308;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
