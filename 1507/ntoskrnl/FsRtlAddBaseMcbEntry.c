/*
 * XREFs of FsRtlAddBaseMcbEntry @ 0x140106DA4
 * Callers:
 *     FsRtlAddLargeMcbEntry @ 0x1401066BC (FsRtlAddLargeMcbEntry.c)
 * Callees:
 *     FsRtlAddBaseMcbEntryEx @ 0x140106DC0 (FsRtlAddBaseMcbEntryEx.c)
 */

BOOLEAN __stdcall FsRtlAddBaseMcbEntry(PBASE_MCB Mcb, LONGLONG Vbn, LONGLONG Lbn, LONGLONG SectorCount)
{
  return FsRtlAddBaseMcbEntryEx(Mcb, Vbn, Lbn, SectorCount) >= 0;
}
