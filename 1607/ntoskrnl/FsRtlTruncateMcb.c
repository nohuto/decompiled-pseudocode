/*
 * XREFs of FsRtlTruncateMcb @ 0x1401B8A4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlTruncateMcb(PMCB Mcb, VBN Vbn)
{
  FsRtlTruncateLargeMcb(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn);
}
