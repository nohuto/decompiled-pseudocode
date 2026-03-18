/*
 * XREFs of NtDeleteAtom @ 0x1405046E4
 * Callers:
 *     <none>
 * Callees:
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1405048B0 (RtlDeleteAtomFromAtomTable.c)
 */

NTSTATUS __stdcall NtDeleteAtom(RTL_ATOM Atom)
{
  PRTL_ATOM_TABLE AtomTable; // [rsp+38h] [rbp+10h] BYREF

  AtomTable = 0LL;
  PsInvokeWin32Callout((_KPROCESS *)2, (__int64)&AtomTable, 0, 0);
  if ( AtomTable )
    return RtlDeleteAtomFromAtomTable(AtomTable, Atom);
  else
    return -1073741790;
}
