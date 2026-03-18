/*
 * XREFs of BgpFoGetTextMetrics @ 0x14011CC18
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x14011C070 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x140137D68 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x1406DAC94 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x1406DECE0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x140787F7C (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x14011CC40 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
