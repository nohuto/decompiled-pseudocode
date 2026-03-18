/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x14009A2A0
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ExRemoveLowBoxAtomReferences(__int64 a1, int a2)
{
  return RtlDestroyLowBoxAtoms(a1, a2);
}
