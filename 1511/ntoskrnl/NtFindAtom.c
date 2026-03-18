/*
 * XREFs of NtFindAtom @ 0x1403F63B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExCallCallBack @ 0x1403F6504 (ExCallCallBack.c)
 *     RtlLookupAtomInAtomTable @ 0x1403F6B10 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFindAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  ExCallCallBack(AtomName, 2LL);
  return -1073741790;
}
