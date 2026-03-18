/*
 * XREFs of ?ValidateGlyphDataAndBitmap@@YA_NJKPEAX@Z @ 0x1C02B9614
 * Callers:
 *     ?QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C0030DF8 (-QueryFontData@PDEVOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C0031E5C (xInsertMetricsRFONTOBJ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ValidateGlyphDataAndBitmap(int a1, int a2, int *a3)
{
  return a1 >= 0 && (!a3 || a2 != 1 || (unsigned __int64)a1 >= 0x10 && a3[2] >= 0 && a3[3] >= 0);
}
