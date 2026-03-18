/*
 * XREFs of BgpFoGetTextMetrics @ 0x140150E98
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x140150300 (BgpTxtDisplayCharacter.c)
 *     BgpConsoleSetPointSize @ 0x14016656C (BgpConsoleSetPointSize.c)
 *     BgpTxtCreateRegion @ 0x14075DCDC (BgpTxtCreateRegion.c)
 *     BgpTxtDisplayString @ 0x140761D5C (BgpTxtDisplayString.c)
 *     BgpFoDetermineFontInformation @ 0x1407FDB34 (BgpFoDetermineFontInformation.c)
 * Callees:
 *     BgpRasGetGlyphTextCellDimensions @ 0x140150EC0 (BgpRasGetGlyphTextCellDimensions.c)
 */

__int64 __fastcall BgpFoGetTextMetrics(__int64 a1, __int64 a2)
{
  if ( !a1 || !a2 )
    return 3221225485LL;
  BgpRasGetGlyphTextCellDimensions(a1, a2 + 4, a2);
  return 0LL;
}
