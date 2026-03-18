/*
 * XREFs of ZwAddAtom @ 0x14015A560
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwAddAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName, *(_QWORD *)&AtomNameLength, Atom);
}
