/*
 * XREFs of ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036CE0
 * Callers:
 *     ?NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x1800637B0 (-NotifyDeviceBitmapDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180064644 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180064894 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z @ 0x180075E90 (-PreComputeWorker@CVisualTree@@IEAAJPEAVCDirtyRegion@@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18010FD3C (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x1801115BC (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 *     ?DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801489D4 (-DoesIntersectValid@DeviceBitmapInfo@CBitmapOfDeviceBitmaps@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@U.c)
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
