/*
 * XREFs of NtOpenSection @ 0x1800A6B00
 * Callers:
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 *     CsrpConnectToServer @ 0x180075354 (CsrpConnectToServer.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800850A0 (LdrGetKnownDllSectionHandle.c)
 *     _ResOpenFileMapping @ 0x180104BB4 (_ResOpenFileMapping.c)
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
