/*
 * XREFs of ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004BBD0
 * Callers:
 *     ?ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z @ 0x18000CA84 (-ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CD5C (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18002D088 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x180061990 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801262B0 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180129680 (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 *     ?RectIntersectsRegion@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x1801298A0 (-RectIntersectsRegion@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179218 (-DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(float *a1, float *a2)
{
  float v2; // xmm3_4
  float v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm2_4
  _BOOL8 result; // rax

  v2 = a1[2];
  result = 0;
  if ( v2 > *a1 )
  {
    v3 = a1[3];
    if ( v3 > a1[1] )
    {
      v4 = a2[2];
      if ( v4 > *a2 )
      {
        v5 = a2[3];
        if ( v5 > a2[1] && v2 > *a2 && v4 > *a1 && v3 > a2[1] && v5 > a1[1] )
          return 1;
      }
    }
  }
  return result;
}
