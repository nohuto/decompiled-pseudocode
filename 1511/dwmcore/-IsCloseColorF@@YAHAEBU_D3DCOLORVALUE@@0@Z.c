/*
 * XREFs of ?IsCloseColorF@@YAHAEBU_D3DCOLORVALUE@@0@Z @ 0x1801277A0
 * Callers:
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180091920 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsCloseColorF(const struct _D3DCOLORVALUE *a1, const struct _D3DCOLORVALUE *a2)
{
  float v2; // xmm2_4
  float v3; // xmm2_4
  float v4; // xmm2_4
  _BOOL8 result; // rax

  result = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1->a - a2->a)) & _xmm) <= 0.0000011920929 )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1->r - a2->r)) & _xmm);
    if ( v2 <= 0.0000011920929 )
    {
      v3 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1->g - a2->g)) & _xmm);
      if ( v3 <= 0.0000011920929 )
      {
        v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1->b - a2->b)) & _xmm);
        if ( v4 <= 0.0000011920929 )
          return 1;
      }
    }
  }
  return result;
}
