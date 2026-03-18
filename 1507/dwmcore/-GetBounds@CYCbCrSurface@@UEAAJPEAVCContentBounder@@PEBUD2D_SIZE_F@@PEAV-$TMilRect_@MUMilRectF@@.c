/*
 * XREFs of ?GetBounds@CYCbCrSurface@@UEAAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010CBB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CYCbCrSurface::GetBounds(__int64 a1, __int64 a2, float *a3, _QWORD *a4)
{
  CCompositionSurfaceBitmap *v4; // rcx
  __int64 result; // rax

  v4 = *(CCompositionSurfaceBitmap **)(a1 + 40);
  result = 0LL;
  if ( v4 )
    return CCompositionSurfaceBitmap::GetBounds(v4, a2, a3, (__int64)a4);
  a4[1] = 0LL;
  *a4 = 0LL;
  return result;
}
