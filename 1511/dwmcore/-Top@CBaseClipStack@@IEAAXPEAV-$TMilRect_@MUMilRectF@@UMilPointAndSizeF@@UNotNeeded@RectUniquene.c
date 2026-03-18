/*
 * XREFs of ?Top@CBaseClipStack@@IEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A25A4
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800492D0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180055888 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSi.c)
 *     ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180091AD0 (-AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z @ 0x1800FD044 (-CheckAndNotifyOverlayContextOfContent@COcclusionContext@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CBaseClipStack::Top(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0
  int v3; // eax

  if ( *(_DWORD *)(a1 + 8) )
  {
    v3 = *(_DWORD *)(a1 + 8);
    if ( !v3 )
      return;
    v2 = *(_OWORD *)(*(_QWORD *)(a1 + 24) + 16LL * (unsigned int)(v3 - 1));
  }
  else
  {
    v2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  *a2 = v2;
}
