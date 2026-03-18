/*
 * XREFs of STROBJ_bEnum @ 0x1C01288F0
 * Callers:
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C000AC70 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     EngTextOut @ 0x1C0032E10 (EngTextOut.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0101A68 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     vStringBitmapTextOut @ 0x1C028A1E8 (vStringBitmapTextOut.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1C02AB414 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02B86BC (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 * Callees:
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C002C3D0 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1C0128940 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 *     vGetPosInfo @ 0x1C02B9A8C (vGetPosInfo.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  LONG top; // eax
  __int64 cGlyphs; // rax
  unsigned int v9; // edx
  BOOL v10; // edi
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
  v9 = pstro->cGlyphs - cGlyphs;
  if ( pstro->cGlyphs == (_DWORD)cGlyphs
    || (v10 = 0,
        v11 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.bottom + 24 * cGlyphs),
        (v12 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || (GlyphData = RFONTOBJ::cGetGlyphData(v12, v9, v11)) == 0 )
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
  LOBYTE(v10) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v10;
}
