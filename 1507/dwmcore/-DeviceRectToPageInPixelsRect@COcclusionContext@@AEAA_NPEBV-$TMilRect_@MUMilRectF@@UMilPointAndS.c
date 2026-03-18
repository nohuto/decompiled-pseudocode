/*
 * XREFs of ?DeviceRectToPageInPixelsRect@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18001FDAC
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004720 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV-$CMa.c)
 *     ?IsOccluded@COcclusionContext@@QEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x18001F284 (-IsOccluded@COcclusionContext@@QEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x18001F304 (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4Enum@MilCompositingMode@@PEA_N@Z @ 0x18002C9D0 (-DrawD2DBitmapWithPartialOcclusion@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBUMilRectF@@1MHW4En.c)
 * Callees:
 *     ?Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z @ 0x180022B30 (-Transform2DBounds@CBaseMatrix@@IEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

bool __fastcall COcclusionContext::DeviceRectToPageInPixelsRect(__int64 a1, const struct MilRectF *a2, _OWORD *a3)
{
  _OWORD *v3; // r11
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  if ( *(_BYTE *)(a1 + 520) )
  {
    CBaseMatrix::Transform2DBounds((CBaseMatrix *)(a1 + 588), a2, (struct MilRectF *)&v5);
    *v3 = v5;
  }
  else
  {
    *a3 = *(_OWORD *)a2;
  }
  return (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v3) == 0;
}
