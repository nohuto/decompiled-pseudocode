/*
 * XREFs of NtSetInformationSymbolicLink @ 0x1800950E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationSymbolicLink(
        HANDLE LinkHandle,
        SYMBOLIC_LINK_INFO_CLASS SymbolicLinkInformationClass,
        PVOID SymbolicLinkInformation,
        ULONG SymbolicLinkInformationLength)
{
  NTSTATUS result; // eax

  result = 382;
  __asm { syscall; Low latency system call }
  return result;
}
