/*
 * XREFs of ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800FA374
 * Callers:
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801467A0 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 *     ?SetCommonStateMinusTransform@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_4X4_F@@@Z @ 0x180147F48 (-SetCommonStateMinusTransform@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD2DContext::SetAntiAliasMode(CD2DContext *this, unsigned int a2)
{
  if ( a2 != *((_DWORD *)this + 58) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), a2);
    *((_DWORD *)this + 58) = a2;
  }
}
