/*
 * XREFs of FsRtlUninitializeMcb @ 0x1405F408C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall FsRtlUninitializeMcb(PMCB Mcb)
{
  FsRtlUninitializeLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly);
}
