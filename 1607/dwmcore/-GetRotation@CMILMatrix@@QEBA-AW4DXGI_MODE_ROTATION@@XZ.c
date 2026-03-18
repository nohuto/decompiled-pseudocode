/*
 * XREFs of ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180015588
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x180122980 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 * Callees:
 *     ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x1800161C8 (-CalcMatrixEpsilonValue@@YA-AW4MatrixEpsilonValue@@M@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A260 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

__int64 __fastcall CMILMatrix::GetRotation(CMILMatrix *this)
{
  unsigned int v1; // r9d
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  int v11; // r11d
  unsigned int v12; // ecx

  if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(this) )
  {
    ((void (*)(void))CalcMatrixEpsilonValue)();
    v2 = ((__int64 (*)(void))CalcMatrixEpsilonValue)();
    v5 = CalcMatrixEpsilonValue(v4, v3, v2);
    v8 = CalcMatrixEpsilonValue(v6, v5, v7);
    v12 = v1 + 1;
    if ( v11 == v1 + 1 )
    {
      if ( !v10 && !v9 && v8 == v12 )
        ++v1;
    }
    else if ( v11 )
    {
      if ( v11 == -1 && !v10 && !v9 && v8 == -1 )
        return 3;
    }
    else if ( v10 == v12 )
    {
      if ( v9 == -1 && !v8 )
        return 2;
    }
    else if ( v10 == -1 && v9 == v12 && !v8 )
    {
      return 4;
    }
  }
  return v1;
}
