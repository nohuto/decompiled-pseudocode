/*
 * XREFs of NtDeleteAtom @ 0x180094510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  NTSTATUS result; // eax

  result = 193;
  __asm { syscall; Low latency system call }
  return result;
}
