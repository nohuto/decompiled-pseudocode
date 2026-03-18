/*
 * XREFs of ?IsOpaque@CCommonBrushParameters@@SA_NAEBU1@@Z @ 0x1801580B8
 * Callers:
 *     ?GetOpaqueBounds@CSpriteVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180157F80 (-GetOpaqueBounds@CSpriteVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F.c)
 * Callees:
 *     ?IsOpaque@CCommonBrushBitmap@@SA_NAEBU1@@Z @ 0x18015806C (-IsOpaque@CCommonBrushBitmap@@SA_NAEBU1@@Z.c)
 */

bool __fastcall CCommonBrushParameters::IsOpaque(const struct CCommonBrushParameters *a1)
{
  float v2; // xmm2_4
  const struct CCommonBrushBitmap *v3; // rcx
  bool result; // al

  result = !*((_BYTE *)a1 + 290)
        && (v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a1 + 11) - 1.0)) & _xmm), v2 < 0.0000011920929)
        && ((v3 = (const struct CCommonBrushParameters *)((char *)a1 + 64), !*(_QWORD *)v3)
         || CCommonBrushBitmap::IsOpaque(v3))
        && (!*((_QWORD *)a1 + 22)
         || CCommonBrushBitmap::IsOpaque((const struct CCommonBrushParameters *)((char *)a1 + 176)));
  return result;
}
