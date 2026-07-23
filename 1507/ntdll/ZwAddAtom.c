/*
 * XREFs of ZwAddAtom @ 0x180093D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  NTSTATUS result; // eax

  result = 71;
  __asm { syscall; Low latency system call }
  return result;
}
