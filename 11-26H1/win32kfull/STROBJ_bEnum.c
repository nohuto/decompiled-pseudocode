/*
 * XREFs of STROBJ_bEnum @ 0x1400DA160
 * Callers:
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D42A0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     bOutOfBounds @ 0x1400D517C (bOutOfBounds.c)
 *     ?NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z @ 0x1400D9450 (-NtGdiSTROBJ_bEnumInternal@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@H@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1400D9F98 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     EngTextOut @ 0x1400DA230 (EngTextOut.c)
 *     vStringBitmapTextOut @ 0x1403251AC (vStringBitmapTextOut.c)
 * Callees:
 *     vGetPosInfo @ 0x1400D9EC8 (vGetPosInfo.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1400DA118 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z @ 0x1400DB1C4 (-STROBJ_bEnumLinked@@YAHPEAVESTROBJ@@PEAKPEAPEAU_GLYPHPOS@@@Z.c)
 */

BOOL __stdcall STROBJ_bEnum(STROBJ *pstro, ULONG *pc, PGLYPHPOS *ppgpos)
{
  int pwszOrg; // eax
  ULONG cGlyphs; // edx
  __int64 v9; // rax
  BOOL v10; // edi
  unsigned int v11; // edx
  struct _GLYPHPOS *v12; // rbp
  RFONTOBJ *v13; // rcx
  ULONG GlyphData; // r9d
  ULONG v15; // edx

  pwszOrg = (int)pstro[4].pwszOrg;
  if ( (pwszOrg & 0x1400) != 0 )
    return STROBJ_bEnumLinked((struct ESTROBJ *)pstro, pc, ppgpos);
  cGlyphs = pstro->cGlyphs;
  if ( (pwszOrg & 2) != 0 )
  {
    *pc = cGlyphs;
    *ppgpos = *(PGLYPHPOS *)&pstro[1].rclBkGround.top;
    return 0;
  }
  v9 = pstro[1].cGlyphs;
  v10 = 0;
  v11 = cGlyphs - v9;
  if ( !v11
    || (v12 = (struct _GLYPHPOS *)(*(_QWORD *)&pstro[1].rclBkGround.top + 24 * v9),
        (v13 = *(RFONTOBJ **)&pstro[1].ulCharInc) == 0LL)
    || (GlyphData = RFONTOBJ::cGetGlyphData(v13, v11, v12)) == 0 )
  {
    *pc = 0;
    return 0;
  }
  v15 = pstro[1].cGlyphs;
  if ( v15 )
  {
    if ( pstro->ulCharInc )
      vGetPosInfo((__int64)pstro, v15, &v12->ptl);
  }
  pstro[1].cGlyphs += GlyphData;
  *pc = GlyphData;
  *ppgpos = v12;
  LOBYTE(v10) = pstro[1].cGlyphs < pstro->cGlyphs;
  return v10;
}
