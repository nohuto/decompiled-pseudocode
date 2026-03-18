/*
 * XREFs of ?IsScreenReadback@CDrawingContext@@QEAA_NXZ @ 0x180022DB8
 * Callers:
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180023350 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@C.c)
 *     ?DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D_RECT_F@@@Z @ 0x1800F1A68 (-DrawBrushEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@PEAVCCompiledEffect@@AEBUD2D.c)
 *     ?DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBUD2D_RECT_F@@@Z @ 0x1800F294C (-DrawPrimitiveMesh@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCPrimitive@@AEBUD2D_MATRIX_3X2_F@@AEBU.c)
 * Callees:
 *     ?GetRenderParameter@CComposition@@QEAA_NW4Enum@MilVisualRenderParameterType@@PEAPEAUMilVisualRenderParameter@@@Z @ 0x180067EA0 (-GetRenderParameter@CComposition@@QEAA_NW4Enum@MilVisualRenderParameterType@@PEAPEAUMilVisualRen.c)
 */

bool __fastcall CDrawingContext::IsScreenReadback(CDrawingContext *this)
{
  __int64 v1; // rcx
  int v2; // r10d
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 3);
  v4 = 0LL;
  if ( (unsigned __int8)CComposition::GetRenderParameter(v1, 0LL, &v4) && *(_DWORD *)(v4 + 4) != v2 )
    LOBYTE(v2) = 1;
  return v2;
}
