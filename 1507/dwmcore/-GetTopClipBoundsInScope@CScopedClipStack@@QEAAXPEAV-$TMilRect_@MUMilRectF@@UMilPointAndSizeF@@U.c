/*
 * XREFs of ?GetTopClipBoundsInScope@CScopedClipStack@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180073820
 * Callers:
 *     ?DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180010AA8 (-DrawClippedPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x180010DD8 (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x180011604 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CheckForDrawingWithStereoBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@@Z @ 0x180027C84 (-CheckForDrawingWithStereoBitmap@CDrawingContext@@AEAA_NPEAVIBitmapContent@@AEBV-$TMilRect_@MUMi.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x180027DB0 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M@Z @ 0x1800281B8 (-PushD2DLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x180028440 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?IsOccluded@CDrawingContext@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18002A028 (-IsOccluded@CDrawingContext@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002A1D4 (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18002AD28 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x18002B200 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18002F290 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33333@Z @ 0x18002F750 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E1D0 (-Draw@CPrimitiveGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x1800DBF8C (-VisualWasRendered@CDrawingContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x1800F1810 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x1800F448C (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x1800F4768 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CScopedClipStack::GetTopClipBoundsInScope(__int64 *a1, __int64 a2)
{
  int v2; // eax
  int v4; // eax
  __int128 v5; // xmm0
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm1_4

  v2 = *((_DWORD *)a1 + 6);
  if ( !v2 || !*(_DWORD *)(76LL * (unsigned int)(v2 - 1) + *a1 + 4) )
  {
    v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_6;
  }
  if ( !*((_DWORD *)a1 + 468) )
  {
    v5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    goto LABEL_6;
  }
  v4 = *((_DWORD *)a1 + 468);
  if ( v4 )
  {
    v5 = *(_OWORD *)(a1[236] + 16LL * (unsigned int)(v4 - 1));
LABEL_6:
    *(_OWORD *)a2 = v5;
  }
  result = *((unsigned int *)a1 + 6);
  if ( (_DWORD)result )
  {
    v7 = (unsigned int)(result - 1);
    result = *a1;
    if ( *(_DWORD *)(76 * v7 + *a1 + 8) )
    {
      v8 = 104LL * (unsigned int)(*((_DWORD *)a1 + 204) - 1);
      result = a1[99];
      v9 = *(float *)(v8 + result + 80);
      if ( v9 > *(float *)a2 )
        *(float *)a2 = v9;
      v10 = *(float *)(v8 + result + 84);
      if ( v10 > *(float *)(a2 + 4) )
        *(float *)(a2 + 4) = v10;
      v11 = *(float *)(v8 + result + 88);
      if ( *(float *)(a2 + 8) > v11 )
        *(float *)(a2 + 8) = v11;
      v12 = *(float *)(v8 + result + 92);
      if ( *(float *)(a2 + 12) > v12 )
        *(float *)(a2 + 12) = v12;
      if ( *(float *)(a2 + 8) <= *(float *)a2 || *(float *)(a2 + 12) <= *(float *)(a2 + 4) )
      {
        *(_DWORD *)(a2 + 12) = 0;
        *(_DWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 4) = 0;
        *(_DWORD *)a2 = 0;
      }
    }
  }
  return result;
}
