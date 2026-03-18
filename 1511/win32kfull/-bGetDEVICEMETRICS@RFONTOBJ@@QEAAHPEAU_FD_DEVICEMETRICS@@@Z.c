/*
 * XREFs of ?bGetDEVICEMETRICS@RFONTOBJ@@QEAAHPEAU_FD_DEVICEMETRICS@@@Z @ 0x1C0024E7C
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0025C48 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C001CE68 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 */

__int64 __fastcall RFONTOBJ::bGetDEVICEMETRICS(POINTL **this, struct _FD_DEVICEMETRICS *a2)
{
  FD_XFORM v4; // xmm0
  POINTL *v5; // rdx
  unsigned int v6; // r8d
  FIX fxMaxAscender; // ecx
  FIX fxMaxDescender; // eax
  POINTL *v9; // rdx
  LONG y; // eax
  bool v11; // cf
  LONG x; // eax
  POINTL v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = *(FD_XFORM *)&(*this)[16].x;
  a2->lNonLinearExtLeading = 0x80000000;
  a2->fdxQuantized = v4;
  a2->lNonLinearIntLeading = 0x80000000;
  a2->lNonLinearMaxCharWidth = 0x80000000;
  a2->lNonLinearAvgCharWidth = 0x80000000;
  v5 = *this;
  v15 = (*this)[10];
  if ( (unsigned int)PDEVOBJ::QueryFontData(
                       (PDEVOBJ *)&v15,
                       *(struct DHPDEV__ **)&v5[13],
                       (struct _FONTOBJ *)v5,
                       3u,
                       0xFFFFFFFF,
                       0LL,
                       a2,
                       0x7Cu) == -1 )
    return 0;
  v6 = 1;
  (*this)[33].y = 1;
  if ( (a2->flRealizedType & 2) != 0 )
    (*this)[33].y |= 0x40u;
  if ( (a2->flRealizedType & 4) != 0 )
    (*this)[33].y |= 0x20u;
  if ( (a2->flRealizedType & 8) != 0 )
    (*this)[33].y |= 0x10u;
  (*this)[42].x = a2->cxMax;
  (*this)[34] = a2->ptlUnderline1;
  (*this)[35] = a2->ptlStrikeout;
  (*this)[36] = a2->ptlULThickness;
  (*this)[37] = a2->ptlSOThickness;
  fxMaxAscender = a2->fxMaxAscender;
  fxMaxDescender = a2->fxMaxDescender;
  if ( fxMaxAscender < 0 )
  {
    (*this)[39].y = fxMaxDescender;
  }
  else
  {
    if ( fxMaxDescender >= 0 )
      fxMaxAscender += fxMaxDescender;
    (*this)[39].y = fxMaxAscender;
  }
  (*this)[38].y = a2->fxMaxAscender;
  (*this)[39].x = -a2->fxMaxDescender;
  (*this)[42].y = ((*this)[38].y + 8) >> 4;
  (*this)[43].x = ((*this)[38].y - (*this)[39].x + 8) >> 4;
  (*this)[38].x = a2->lD;
  if ( (*this)[38].x < 0 )
  {
    return 0;
  }
  else
  {
    (*this)[43].y = a2->cyMax;
    (*this)[44].x = a2->cjGlyphMax;
    v9 = *this;
    y = (*this)[1].y;
    if ( (y & 0x10000000) != 0 )
    {
      v11 = (y & 0x20000000) != 0;
      x = v9[42].x;
      if ( v11 )
        v9[44].x = ((v9[43].y * (x + 2) + 4 * v9[43].y * (x + 2) + 3) & 0xFFFFFFFC) + 16;
      else
        v9[44].x = ((v9[43].y * (x + 2) + 3) & 0xFFFFFFFC) + 16;
    }
    *(FD_XFORM *)&(*this)[44].y = a2->fdxQuantized;
    (*this)[46].y = a2->lNonLinearExtLeading;
    (*this)[47].x = a2->lNonLinearIntLeading;
    (*this)[47].y = a2->lNonLinearMaxCharWidth;
    (*this)[48].x = a2->lNonLinearAvgCharWidth;
    (*this)[88].x = a2->lMinA;
    (*this)[88].y = a2->lMinC;
    (*this)[89].x = a2->lMinD;
    (*this)[1].x = (*this)[42].x;
  }
  return v6;
}
