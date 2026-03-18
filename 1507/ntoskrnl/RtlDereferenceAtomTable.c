/*
 * XREFs of RtlDereferenceAtomTable @ 0x14010E660
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlDereferenceAtomTable(PRTL_ATOM_TABLE AtomTable)
{
  return RtlDestroyAtomTable(AtomTable);
}
