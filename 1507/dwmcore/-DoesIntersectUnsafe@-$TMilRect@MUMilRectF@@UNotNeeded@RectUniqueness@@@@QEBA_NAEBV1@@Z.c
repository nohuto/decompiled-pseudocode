/*
 * XREFs of ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DFC0
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?Optimize@CMergedRect@@IEAAX_N@Z @ 0x1800511FC (-Optimize@CMergedRect@@IEAAX_N@Z.c)
 *     ?Add@CMergedRect@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180051438 (-Add@CMergedRect@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@.c)
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x18007D060 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?RectIntersectsRegion@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x1800F735C (-RectIntersectsRegion@COverlayContext@@CA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801377A4 (-DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@U.c)
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
