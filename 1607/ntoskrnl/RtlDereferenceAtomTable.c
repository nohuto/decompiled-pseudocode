/*
 * XREFs of RtlDereferenceAtomTable @ 0x1400B5AA0
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1404A2798 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDereferenceAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  return RtlDestroyAtomTable(AtomTable);
}
