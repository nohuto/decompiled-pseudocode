/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x14010E668
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 ExRemoveLowBoxAtomReferences()
{
  return RtlDestroyLowBoxAtoms();
}
