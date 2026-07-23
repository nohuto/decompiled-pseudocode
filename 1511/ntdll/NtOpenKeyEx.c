/*
 * XREFs of NtOpenKeyEx @ 0x1800A7290
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800C7FD0 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800C9D20 (LdrpIsCODServiceEnabled.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 271;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
