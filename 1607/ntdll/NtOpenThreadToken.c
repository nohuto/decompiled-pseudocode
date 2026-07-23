/*
 * XREFs of NtOpenThreadToken @ 0x1800A68A0
 * Callers:
 *     RtlpTpRevertCapture @ 0x180064D68 (RtlpTpRevertCapture.c)
 *     RtlAdjustPrivilege @ 0x18007B980 (RtlAdjustPrivilege.c)
 *     RtlCheckSandboxedToken @ 0x1800D4640 (RtlCheckSandboxedToken.c)
 *     BaseGetNamedObjectDirectory @ 0x180102E54 (BaseGetNamedObjectDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadToken(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 36;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
