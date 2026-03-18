/*
 * XREFs of FsRtlAddMcbEntry @ 0x1401AC4CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlAddMcbEntry(PMCB Mcb, VBN Vbn, LBN Lbn, ULONG SectorCount)
{
  return FsRtlAddLargeMcbEntry(&Mcb->DummyFieldThatSizesThisStructureCorrectly, Vbn, Lbn, SectorCount);
}
