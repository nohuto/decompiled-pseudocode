/*
 * XREFs of NtQueryInformationAtom @ 0x180094BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 303;
  __asm { syscall; Low latency system call }
  return result;
}
