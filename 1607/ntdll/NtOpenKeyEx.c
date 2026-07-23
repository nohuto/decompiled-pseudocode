/*
 * XREFs of NtOpenKeyEx @ 0x1800A8630
 * Callers:
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CF3B0 (LdrpAppxGetRemediationRegistryKey.c)
 *     LdrpIsCODServiceEnabled @ 0x1800D12C4 (LdrpIsCODServiceEnabled.c)
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

  result = 273;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
