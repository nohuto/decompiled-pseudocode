/*
 * XREFs of ZwAddAtomEx @ 0x180093F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtomEx(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom, ULONG Flags)
{
  NTSTATUS result; // eax

  result = 103;
  __asm { syscall; Low latency system call }
  return result;
}
