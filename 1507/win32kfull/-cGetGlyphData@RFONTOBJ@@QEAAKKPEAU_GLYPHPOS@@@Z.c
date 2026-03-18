/*
 * XREFs of ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C002DD54
 * Callers:
 *     STROBJ_bEnum @ 0x1C01002D0 (STROBJ_bEnum.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0100394 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B5C70 (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B62DC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C002DCCC (-cGetGlyphDataCache@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CE944 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 */

__int64 __fastcall RFONTOBJ::cGetGlyphData(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  unsigned int v4; // ebx

  if ( (*(_DWORD *)(*(_QWORD *)this + 68LL) & 1) == 0 )
    return RFONTOBJ::cGetGlyphDataCache(this, a2, a3);
  v4 = 0;
  if ( a2 )
    LOBYTE(v4) = (unsigned int)RFONTOBJ::bInsertGlyphbitsLookaside(this, a3, *(_DWORD *)(*(_QWORD *)this + 72LL)) != 0;
  return v4;
}
