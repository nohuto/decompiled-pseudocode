/*
 * XREFs of ?GetRotation@CBaseMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x1800141C8
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800378DC (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x18003C568 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18010CEB8 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 * Callees:
 *     ?CalcMatrixEpsilonValue@@YA?AW4MatrixEpsilonValue@@M@Z @ 0x180014B38 (-CalcMatrixEpsilonValue@@YA-AW4MatrixEpsilonValue@@M@Z.c)
 *     ?Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ @ 0x180047260 (-Is2DAxisAlignedPreserving@CBaseMatrix@@QEBAHXZ.c)
 */

__int64 __fastcall CBaseMatrix::GetRotation(CBaseMatrix *this)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  int v11; // r8d
  int v12; // r9d
  int v13; // r11d
  unsigned int v14; // ecx

  if ( (unsigned int)CBaseMatrix::Is2DAxisAlignedPreserving(this) )
  {
    ((void (*)(void))CalcMatrixEpsilonValue)();
    v2 = ((__int64 (*)(void))CalcMatrixEpsilonValue)();
    v6 = CalcMatrixEpsilonValue(v4, v3, v5, v2);
    v10 = CalcMatrixEpsilonValue(v8, v7, v6, v9);
    v14 = v1 + 1;
    if ( v13 == v1 + 1 )
    {
      if ( !v12 && !v11 && v10 == v14 )
        ++v1;
    }
    else if ( v13 )
    {
      if ( v13 == -1 && !v12 && !v11 && v10 == -1 )
        return 3;
    }
    else if ( v12 == v14 )
    {
      if ( v11 == -1 && !v10 )
        return 2;
    }
    else if ( v12 == -1 && v11 == v14 && !v10 )
    {
      return 4;
    }
  }
  return v1;
}
