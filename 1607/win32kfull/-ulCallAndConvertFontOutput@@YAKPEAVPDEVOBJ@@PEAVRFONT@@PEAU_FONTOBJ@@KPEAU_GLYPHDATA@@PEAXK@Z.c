/*
 * XREFs of ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C00FCCD8
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00FC984 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00FCB98 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02D2834 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C002909C (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00FCDF8 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     ?ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0261F40 (-ulClearTypeFilter_6x5@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 *     AdjustGlyphIntenisty @ 0x1C02628D4 (AdjustGlyphIntenisty.c)
 */

__int64 __fastcall ulCallAndConvertFontOutput(
        struct PDEVOBJ *a1,
        struct DHPDEV__ **a2,
        struct _FONTOBJ *a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        struct _GLYPHBITS *a6,
        unsigned int a7)
{
  unsigned int FontData; // eax
  unsigned int v10; // ebx
  FLONG flFontType; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  struct _GLYPHDATA *v15; // rdx
  unsigned int v16; // edi

  FontData = PDEVOBJ::QueryFontData(a1, a2[13], a3, 1u, a4, a5, a6, a7);
  v10 = FontData;
  if ( FontData != -1 )
  {
    flFontType = a3->flFontType;
    if ( (flFontType & 0x10000000) == 0 )
      return v10;
    v12 = a5->rclInk.right - (__int64)a5->rclInk.left;
    v13 = a5->rclInk.bottom - (__int64)a5->rclInk.top;
    if ( v12 >= 0 && v13 >= 0 )
    {
      v14 = flFontType & 0x20000000;
      if ( v14 )
        v13 *= 5LL;
      v15 = (struct _GLYPHDATA *)(((v13 * (v12 + 2) + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16);
      if ( (unsigned __int64)v15 <= 0xFFFFFFFF )
      {
        if ( (unsigned __int64)v15 > FontData )
          v10 = (unsigned int)v15;
        if ( !a6 )
          return v10;
        if ( v10 <= a7 )
        {
          if ( v14 )
          {
            v16 = ulClearTypeFilter_6x5(a6, a5, (struct RFONT *)a2);
            if ( a2[115] )
              AdjustGlyphIntenisty(a6);
          }
          else
          {
            v16 = ulClearTypeFilter_6x1(a6, v15, (struct RFONT *)a2);
          }
          if ( v16 <= v10 )
          {
            if ( (a3->flFontType & 0x20000000) != 0 )
              return v16;
            return v10;
          }
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}
