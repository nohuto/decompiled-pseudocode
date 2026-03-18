/*
 * XREFs of ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098510
 * Callers:
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@MI@Z @ 0x180003C10 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x1800043FC (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x180004548 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180004AE8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x180005608 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004D5F0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064E80 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180067A2C (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180067B3C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180067CD4 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180067DF0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18006960C (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18006D550 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18006D600 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x18010740C (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x180121A4C (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z @ 0x180123628 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x180124874 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x180124B50 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::GetTopGpuClipInScope(__int64 *a1, char a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // rcx
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rcx
  float v10; // xmm0_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm1_4

  result = *((unsigned int *)a1 + 6);
  if ( !(_DWORD)result || (v5 = 5LL * (unsigned int)(result - 1), result = *a1, !*(_DWORD *)(*a1 + 16 * v5 + 4)) )
  {
    v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)a1 + 518) )
  {
    v7 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_6;
  }
  result = *((unsigned int *)a1 + 518);
  if ( (_DWORD)result )
  {
    v6 = (unsigned int)(result - 1);
    result = a1[261];
    v7 = *(_OWORD *)(result + 16 * v6);
LABEL_6:
    *(_OWORD *)a3 = v7;
  }
  if ( a2 )
  {
    result = *((unsigned int *)a1 + 6);
    if ( (_DWORD)result )
    {
      v8 = 5LL * (unsigned int)(result - 1);
      result = *a1;
      if ( *(_DWORD *)(*a1 + 16 * v8 + 8) )
      {
        v9 = 120LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
        result = a1[104];
        v10 = *(float *)(v9 + result + 96);
        if ( v10 > *(float *)a3 )
          *(float *)a3 = v10;
        v11 = *(float *)(v9 + result + 100);
        if ( v11 > *(float *)(a3 + 4) )
          *(float *)(a3 + 4) = v11;
        v12 = *(float *)(v9 + result + 104);
        if ( *(float *)(a3 + 8) > v12 )
          *(float *)(a3 + 8) = v12;
        v13 = *(float *)(v9 + result + 108);
        if ( *(float *)(a3 + 12) > v13 )
          *(float *)(a3 + 12) = v13;
        if ( *(float *)(a3 + 8) <= *(float *)a3 || *(float *)(a3 + 12) <= *(float *)(a3 + 4) )
        {
          *(_DWORD *)(a3 + 12) = 0;
          *(_DWORD *)(a3 + 8) = 0;
          *(_DWORD *)(a3 + 4) = 0;
          *(_DWORD *)a3 = 0;
        }
      }
    }
  }
  return result;
}
