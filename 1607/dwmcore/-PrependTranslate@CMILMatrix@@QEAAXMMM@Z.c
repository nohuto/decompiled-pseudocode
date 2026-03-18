/*
 * XREFs of ?PrependTranslate@CMILMatrix@@QEAAXMMM@Z @ 0x180058E78
 * Callers:
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180001610 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B69E0 (-GetRealization@CRotateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@PEAVCMILMatrix@@PEAH@Z @ 0x1801612C0 (-Realize@CViewportAlignedIntermediateRealizer@@QEAAJPEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingC.c)
 *     ?PushOffset@CBaseMatrixStack@@IEAAJMMM@Z @ 0x180163D54 (-PushOffset@CBaseMatrixStack@@IEAAJMMM@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180176390 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::PrependTranslate(CMILMatrix *this, float a2, float a3, float a4)
{
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v7; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm0_4
  float v15; // xmm8_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  float v18; // xmm8_4
  float v19; // xmm3_4

  *((_BYTE *)this + 64) &= 0xCCu;
  v4 = a3 * *((float *)this + 4);
  *((_BYTE *)this + 65) &= 0xCu;
  v5 = a4 * *((float *)this + 8);
  v7 = v4 + (float)(a2 * *(float *)this);
  v10 = a2 * *((float *)this + 1);
  v11 = a4 * *((float *)this + 9);
  v12 = a2 * *((float *)this + 2);
  v13 = v10 + (float)(a3 * *((float *)this + 5));
  v14 = a3 * *((float *)this + 6);
  v15 = (float)(a2 * *((float *)this + 3)) + (float)(a3 * *((float *)this + 7));
  *((float *)this + 12) = (float)(v7 + v5) + *((float *)this + 12);
  v16 = v13 + v11;
  v17 = a4 * *((float *)this + 10);
  v18 = v15 + (float)(a4 * *((float *)this + 11));
  *((float *)this + 13) = v16 + *((float *)this + 13);
  v19 = (float)((float)(v12 + v14) + v17) + *((float *)this + 14);
  *((float *)this + 15) = v18 + *((float *)this + 15);
  *((float *)this + 14) = v19;
}
