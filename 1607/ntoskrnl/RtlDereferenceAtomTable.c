/*
 * XREFs of RtlDereferenceAtomTable @ 0x1400B38C8
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDereferenceAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  return RtlDestroyAtomTable(AtomTable);
}
