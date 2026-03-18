/*
 * XREFs of FsRtlTruncateMcb @ 0x1401E29E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
