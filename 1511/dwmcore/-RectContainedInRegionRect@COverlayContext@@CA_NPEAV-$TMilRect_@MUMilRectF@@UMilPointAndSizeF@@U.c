/*
 * XREFs of ?RectContainedInRegionRect@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x18011178C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036D60 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::RectContainedInRegionRect(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // r10
  __int64 v6; // rdx
  unsigned int v7; // r11d
  int v8; // r11d

  v4 = 0;
  v6 = a1;
  v7 = 0;
  if ( a2 )
  {
    while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(a3 + 16LL * v7, v6) )
    {
      v7 = v8 + 1;
      if ( v7 >= a2 )
        return v4;
    }
    return 1;
  }
  return v4;
}
