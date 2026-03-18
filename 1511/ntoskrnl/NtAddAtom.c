/*
 * XREFs of NtAddAtom @ 0x1406740D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  return NtAddAtomEx((char *)AtomName, *(size_t *)&AtomNameLength, Atom, 0);
}
