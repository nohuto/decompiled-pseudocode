/*
 * XREFs of ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVIImageSource@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F6270
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180004720 (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVIImageSource@@PEBV-$CMa.c)
 * Callees:
 *     ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x1800069EC (-UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ.c)
 *     ?GetContentType@CCompositionSurfaceInfo@@QEBA?AW4BufferContentType@@XZ @ 0x1800076FC (-GetContentType@CCompositionSurfaceInfo@@QEBA-AW4BufferContentType@@XZ.c)
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18004DE38 (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z @ 0x1800F739C (-RectIntersectsVisitedRegion@COverlayContext@@QEAA_NUtagRECT@@@Z.c)
 */

__int64 __fastcall COverlayContext::CheckAndNotifyFullScreenSwapChain(COverlayContext *this, __int64 *a2, float *a3)
{
  float v6; // xmm0_4
  float v7; // eax
  double v8; // xmm0_8
  int v9; // eax
  double v10; // xmm0_8
  int v11; // eax
  int updated; // eax
  unsigned int v13; // ebp
  __int64 v14; // rdx
  struct tagRECT v16; // [rsp+30h] [rbp-28h] BYREF
  float v17; // [rsp+60h] [rbp+8h]

  v6 = *((float *)this + 10) + 6291456.25;
  v7 = v6;
  v8 = *((float *)this + 11);
  v16.left = (int)(LODWORD(v7) << 10) >> 11;
  *(float *)&v8 = v8 + 6291456.25;
  v9 = LODWORD(v8);
  v10 = *((float *)this + 12);
  v16.top = v9 << 10 >> 11;
  *(float *)&v10 = v10 + 6291456.25;
  v11 = LODWORD(v10);
  LODWORD(v10) = *((_DWORD *)this + 13);
  v16.right = v11 << 10 >> 11;
  v17 = *(float *)&v10 + 6291456.25;
  v16.bottom = (int)(LODWORD(v17) << 10) >> 11;
  updated = COverlayContext::UpdateVisitedContentRegion(this);
  v13 = updated;
  if ( updated >= 0 )
  {
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(a3, (float *)this + 10)
      && !COverlayContext::RectIntersectsVisitedRegion(this, &v16)
      && (*(unsigned __int8 (__fastcall **)(__int64 *, __int64))(*a2 + 144))(a2, 79LL)
      && (unsigned int)CCompositionSurfaceInfo::GetContentType(a2[49]) == 1 )
    {
      LOBYTE(v14) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 2) + 440LL))(*((_QWORD *)this + 2), v14);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x3BCu);
  }
  return v13;
}
