/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C820
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800492D0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180052F20 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 *     ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180127A70 (-AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x18000B0B0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CB04 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CB74 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180055E30 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct CVisual **a2,
        const struct D2D_SIZE_F *a3)
{
  int BoundsInternal; // eax
  unsigned int v7; // ebx
  int v8; // eax
  CCompositionSurfaceBitmap *v9; // r8
  int v10; // eax
  _BYTE v12[16]; // [rsp+30h] [rbp-69h] BYREF
  _OWORD v13[4]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v14[4]; // [rsp+80h] [rbp-19h] BYREF

  BoundsInternal = CCompositionSurfaceBitmap::GetBoundsInternal(this, a3, v12);
  v7 = BoundsInternal;
  if ( BoundsInternal < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsInternal, 0x3D5u);
  }
  else if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v12) )
  {
    if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this + 48))
      && (v8 = COcclusionContext::DrawOcclusionRectangle(a2 + 1, v12, 0LL), v7 = v8, v8 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3DBu);
    }
    else if ( COcclusionContext::IsOverlayCandidateCollectionEnabled((COcclusionContext *)a2) )
    {
      CCompositionSurfaceBitmap::CalcImageTransform(this, a3, v13, v12);
      v14[0] = v13[0];
      v14[1] = v13[1];
      v14[2] = v13[2];
      v14[3] = v13[3];
      if ( this )
        v9 = (CCompositionSurfaceBitmap *)((char *)this + 40);
      else
        v9 = 0LL;
      v10 = COcclusionContext::CheckAndRecordOverlayCandidate((__int64)a2, a2[64], v9, (__int64)v14, 0LL, 0);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3EAu);
    }
  }
  return v7;
}
