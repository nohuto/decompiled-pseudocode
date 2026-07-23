/*
 * XREFs of NtAddAtom @ 0x1406F8718
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, AtomNameLength, Atom, 0);
}
