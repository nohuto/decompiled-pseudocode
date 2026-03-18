/*
 * XREFs of STROBJ_bEnum @ 0x1C0107280
 * Callers:
 *     EngTextOut @ 0x1C0037A40 (EngTextOut.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0102FFC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     vStringBitmapTextOut @ 0x1C028B648 (vStringBitmapTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02A9654 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C02B4DC4 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B56F0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C0026418 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0107344 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1C02B688C (vGetPosInfo.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  LONG top; // eax
  __int64 cGlyphs; // rax
  BOOL v9; // edi
  unsigned int v10; // edx
  struct _GLYPHPOS *v11; // rbp
  RFONTOBJ *v12; // rcx
  ULONG GlyphData; // r11d
  __int64 v14; // rdx

  top = pstro[1].rclBkGround.top;
  if ( (top & 0x1400) != 0 )
    return STROBJ_bEnumLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  if ( (top & 2) != 0 )
  {
    *pc = pstro->cGlyphs;
    *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.bottom;
    return 0;
  }
  cGlyphs = pstro[1].cGlyphs;
  v9 = 0;
  v10 = pstro->cGlyphs - cGlyphs;
  if ( pstro->cGlyphs == (_DWORD)cGlyphs
    || (v11 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.bottom + 24 * cGlyphs),
        (v12 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || (GlyphData = RFONTOBJ::cGetGlyphData(v12, v10, v11)) == 0 )
  {
    *pc = 0;
    return 0;
  }
  v14 = pstro[1].cGlyphs;
  if ( (_DWORD)v14 )
  {
    if ( pstro->ulCharInc )
      vGetPosInfo(pstro, v14, &v11->ptl);
  }
  pstro[1].cGlyphs += GlyphData;
  *pc = GlyphData;
  *ppgpos = v11;
  LOBYTE(v9) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v9;
}
