/*
 * XREFs of RtlDereferenceAtomTable @ 0x14009A298
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDereferenceAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  return RtlDestroyAtomTable(AtomTable);
}
