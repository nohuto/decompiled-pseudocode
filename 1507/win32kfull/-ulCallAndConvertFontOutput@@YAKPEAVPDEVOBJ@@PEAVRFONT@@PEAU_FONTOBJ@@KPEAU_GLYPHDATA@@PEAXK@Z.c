/*
 * XREFs of ?ulCallAndConvertFontOutput@@YAKPEAVPDEVOBJ@@PEAVRFONT@@PEAU_FONTOBJ@@KPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0032254
 * Callers:
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C0034014 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertGlyphbitsRFONTOBJ @ 0x1C00EE2D4 (xInsertGlyphbitsRFONTOBJ.c)
 *     ?bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z @ 0x1C02CE944 (-bInsertGlyphbitsLookaside@RFONTOBJ@@QEAAHPEAU_GLYPHPOS@@K@Z.c)
 * Callees:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0030DF8 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ?ulClearTypeFilter@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C0032E98 (-ulClearTypeFilter@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
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
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx

  FontData = PDEVOBJ::QueryFontData(a1, a2[13], a3, 1u, a4, a5, a6, a7);
  v10 = FontData;
  if ( FontData == -1 )
    return 0xFFFFFFFFLL;
  if ( (a3->flFontType & 0x10000000) == 0 )
    return v10;
  v11 = a5->rclInk.right - (__int64)a5->rclInk.left;
  v12 = a5->rclInk.bottom - (__int64)a5->rclInk.top;
  if ( v11 < 0 )
    return 0xFFFFFFFFLL;
  if ( v12 < 0 )
    return 0xFFFFFFFFLL;
  v13 = ((v12 * (v11 + 2) + 3) & 0xFFFFFFFFFFFFFFFCuLL) + 16;
  if ( v13 > 0xFFFFFFFF )
    return 0xFFFFFFFFLL;
  if ( v13 > FontData )
    v10 = v13;
  if ( a6 && (v10 > a7 || ulClearTypeFilter(a6, (struct _GLYPHDATA *)v12, (struct RFONT *)a2) > v10) )
    return 0xFFFFFFFFLL;
  else
    return v10;
}
