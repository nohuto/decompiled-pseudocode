/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x1400D7278
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1400D6C74 (FsRtlAddLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x1400D7290 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
