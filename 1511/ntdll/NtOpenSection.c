/*
 * XREFs of NtOpenSection @ 0x1800A57A0
 * Callers:
 *     LdrpFindKnownDll @ 0x18000E074 (LdrpFindKnownDll.c)
 *     CsrpConnectToServer @ 0x1800520A4 (CsrpConnectToServer.c)
 *     LdrGetKnownDllSectionHandle @ 0x18007FCD0 (LdrGetKnownDllSectionHandle.c)
 *     _ResOpenFileMapping @ 0x1800FA2C8 (_ResOpenFileMapping.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
