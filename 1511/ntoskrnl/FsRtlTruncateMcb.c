/*
 * XREFs of FsRtlTruncateMcb @ 0x1401ACAB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
