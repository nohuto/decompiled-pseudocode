/*
 * XREFs of ZwFindAtom @ 0x180093A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  NTSTATUS result; // eax

  result = 20;
  __asm { syscall; Low latency system call }
  return result;
}
