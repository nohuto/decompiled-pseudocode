/*
 * XREFs of ?GetD2D1Matrix4x4@CBaseMatrix@@QEBA?AUD2D_MATRIX_4X4_F@@XZ @ 0x1800BCC08
 * Callers:
 *     ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x18010C250 (-DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_.c)
 *     ?GetWorldTransform4x4@CDrawingContext@@EEBAXPEAUD2D_MATRIX_4X4_F@@@Z @ 0x18010DB90 (-GetWorldTransform4x4@CDrawingContext@@EEBAXPEAUD2D_MATRIX_4X4_F@@@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x1801467A0 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 * Callees:
 *     <none>
 */

struct D2D_MATRIX_4X4_F *__fastcall CBaseMatrix::GetD2D1Matrix4x4(
        struct D2D_MATRIX_4X4_F *this,
        struct D2D_MATRIX_4X4_F *__return_ptr retstr)
{
  *retstr = *this;
  return retstr;
}
