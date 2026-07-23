/*
 * XREFs of NtOpenSection @ 0x180093C70
 * Callers:
 *     CsrpConnectToServer @ 0x1800044D4 (CsrpConnectToServer.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     LdrGetKnownDllSectionHandle @ 0x1800744A0 (LdrGetKnownDllSectionHandle.c)
 *     _ResOpenFileMapping @ 0x1800FA9B0 (_ResOpenFileMapping.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  __asm { syscall; Low latency system call }
  return result;
}
