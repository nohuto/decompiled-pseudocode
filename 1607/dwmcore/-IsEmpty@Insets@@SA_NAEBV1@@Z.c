/*
 * XREFs of ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x180160584
 * Callers:
 *     ?GetCommonBrushParameters@CDropShadowContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x1801601C0 (-GetCommonBrushParameters@CDropShadowContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall Insets::IsEmpty(const struct Insets *a1)
{
  float v1; // xmm1_4
  float v2; // xmm1_4
  float v3; // xmm1_4
  float v4; // xmm1_4
  _BOOL8 result; // rax

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a1) & _xmm);
  result = 0;
  if ( v1 < 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 1)) & _xmm);
    if ( v2 < 0.0000011920929 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 2)) & _xmm);
      if ( v3 < 0.0000011920929 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a1 + 3)) & _xmm);
        if ( v4 < 0.0000011920929 )
          return 1;
      }
    }
  }
  return result;
}
