/*
 * XREFs of ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000FE00
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800516E0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005D010 (-PostSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x1801450A0 (-AddOcclusionInformation@CYCbCrSurface@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F8A8 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000F918 (-GetBoundsInternal@CCompositionSurfaceBitmap@@AEBAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x180010E70 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18001160C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x18005CA10 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180093980 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::AddOcclusionInformation(
        CCompositionSurfaceBitmap *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int BoundsInternal; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // r8d
  int v10; // eax
  _OWORD v12[4]; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+70h] [rbp-49h]
  _OWORD v14[4]; // [rsp+80h] [rbp-39h] BYREF
  int v15; // [rsp+C0h] [rbp+7h]
  _BYTE v16[16]; // [rsp+D0h] [rbp+17h] BYREF

  BoundsInternal = CCompositionSurfaceBitmap::GetBoundsInternal((__int64)this, (__int64)a3, (__int64)v16);
  v7 = BoundsInternal;
  if ( BoundsInternal < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsInternal, 0x3E2u);
  }
  else if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v16) )
  {
    if ( CCompositionSurfaceBitmap::IsOpaque((CCompositionSurfaceBitmap *)((char *)this + 120))
      && (v8 = COcclusionContext::DrawOcclusionRectangle((char *)a2 + 8, v16, 0LL), v7 = v8, v8 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3E8u);
    }
    else if ( COcclusionContext::IsOverlayCandidateCollectionEnabled(a2) )
    {
      v13 = 0;
      CCompositionSurfaceBitmap::CalcImageTransform((__int64)this, (__int64)a3, (__int64)v12, (__int64)v16);
      v14[0] = v12[0];
      v14[1] = v12[1];
      v14[2] = v12[2];
      v14[3] = v12[3];
      v15 = v13;
      if ( this )
        v9 = (_DWORD)this + 112;
      else
        v9 = 0;
      v10 = COcclusionContext::CheckAndRecordOverlayCandidate(
              (_DWORD)a2,
              *((_QWORD *)a2 + 83),
              v9,
              (unsigned int)v14,
              0LL,
              0);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3F7u);
    }
  }
  return v7;
}
