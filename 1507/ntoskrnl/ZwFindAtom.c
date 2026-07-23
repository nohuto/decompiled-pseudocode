/*
 * XREFs of ZwFindAtom @ 0x14017F270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFindAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
