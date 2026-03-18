/*
 * XREFs of ExRemoveLowBoxAtomReferences @ 0x1400B5AA8
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1404A2798 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ExRemoveLowBoxAtomReferences(__int64 a1, int a2)
{
  return RtlDestroyLowBoxAtoms(a1, a2);
}
