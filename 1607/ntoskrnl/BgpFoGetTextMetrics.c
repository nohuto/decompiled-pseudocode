/*
 * XREFs of BgpFoGetTextMetrics @ 0x140128370
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x140141860 (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x140726BC4 (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x1407D4168 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140128398 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
