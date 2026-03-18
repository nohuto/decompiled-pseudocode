/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x14008CC94
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x14008C688 (FsRtlAddLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x14008CCB0 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
