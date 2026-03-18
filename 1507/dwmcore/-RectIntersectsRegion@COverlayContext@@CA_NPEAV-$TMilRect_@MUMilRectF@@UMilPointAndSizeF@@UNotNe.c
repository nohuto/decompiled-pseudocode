/*
 * XREFs of ?RectIntersectsRegion@COverlayContext@@CA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I0@Z @ 0x1800F735C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DFC0 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 */

char __fastcall COverlayContext::RectIntersectsRegion(float *a1, int a2, __int64 a3)
{
  char v3; // r9
  unsigned int v4; // r10d
  int v5; // r10d
  unsigned int v6; // r11d

  v3 = 0;
  v4 = 0;
  if ( a2 )
  {
    while ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(a1, (float *)(a3 + 16LL * v4)) )
    {
      v4 = v5 + 1;
      if ( v4 >= v6 )
        return v3;
    }
    return 1;
  }
  return v3;
}
