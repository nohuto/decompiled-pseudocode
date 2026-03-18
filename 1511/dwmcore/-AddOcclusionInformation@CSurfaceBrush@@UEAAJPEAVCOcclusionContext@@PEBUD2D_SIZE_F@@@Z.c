/*
 * XREFs of ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180121360
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18000AB8C (-CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEBV.c)
 *     ?IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ @ 0x18000B0B0 (-IsOverlayCandidateCollectionEnabled@COcclusionContext@@QEAA_NXZ.c)
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x18000CA24 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18002E670 (-IsOpaque@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180055E30 (-DrawOcclusionRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@U.c)
 *     ?Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z @ 0x180058210 (-Set@CRectangleShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectangleShape@@UEAA@XZ @ 0x1800587FC (--1CRectangleShape@@UEAA@XZ.c)
 *     ??0CRectangleShape@@QEAA@MMMM@Z @ 0x180058858 (--0CRectangleShape@@QEAA@MMMM@Z.c)
 *     ??0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180059A30 (--0CMILMatrix@@QEAA@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180121AE8 (-CalculateDestinationRectAlignment@CSurfaceBrush@@AEBAXAEBUD2D_SIZE_F@@0PEAUD2D_RECT_F@@PEAUD2D_.c)
 *     ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_N@Z @ 0x180122008 (-GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@PEA_.c)
 *     ?IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ @ 0x180122304 (-IsReadyToDraw@CSurfaceBrush@@QEBA_NXZ.c)
 */

__int64 __fastcall CSurfaceBrush::AddOcclusionInformation(
        CSurfaceBrush *this,
        struct CVisual **a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v6; // edi
  CCompositionSurfaceBitmap *v7; // rcx
  char m11_low; // r15
  __m128 v9; // xmm0
  __m128 v10; // xmm1
  CCompositionSurfaceBitmap *v11; // rcx
  int v12; // eax
  float v13; // xmm0_4
  FLOAT v14; // xmm9_4
  FLOAT v15; // xmm3_4
  __int64 v16; // rcx
  CCompositionSurfaceBitmap *v17; // r8
  int v18; // eax
  struct D2D_MATRIX_3X2_F v20; // [rsp+38h] [rbp-D0h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+68h] [rbp-A0h]
  struct D2D_SIZE_F v23[2]; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_RECT_F v24[2]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v25[64]; // [rsp+A8h] [rbp-60h] BYREF

  v6 = 0;
  if ( CSurfaceBrush::IsReadyToDraw(this) && a3 && a3->width > 0.0 && a3->height > 0.0 )
  {
    v7 = (CCompositionSurfaceBitmap *)*((_QWORD *)this + 8);
    m11_low = 1;
    LOBYTE(v20.m11) = 1;
    if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(v7) )
    {
      if ( (int)CSurfaceBrush::GetSwapChainSize(this, v23, 0LL, (struct D2D_MATRIX_3X2_F *)v20.m[1], (bool *)&v20) < 0 )
        return v6;
      m11_low = LOBYTE(v20.m11);
    }
    else
    {
      v9 = (__m128)*((unsigned int *)this + 20);
      v10 = (__m128)*((unsigned int *)this + 21);
      v9.m128_f32[0] = v9.m128_f32[0] - *((float *)this + 18);
      v10.m128_f32[0] = v10.m128_f32[0] - *((float *)this + 19);
      v23[0] = (struct D2D_SIZE_F)_mm_unpacklo_ps(v9, v10).m128_u64[0];
    }
    CSurfaceBrush::CalculateDestinationRectAlignment(this, v23, a3, v24, (D2D1_MATRIX_3X2_F *)matrix.m[1]);
    v11 = (CCompositionSurfaceBitmap *)(*((_QWORD *)this + 8) + 48LL);
    *(struct D2D_RECT_F *)&v23[0].width = v24[0];
    if ( CCompositionSurfaceBitmap::IsOpaque(v11)
      && (v12 = COcclusionContext::DrawOcclusionRectangle((__int64)(a2 + 1), (float *)v23), v6 = v12, v12 < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x10Au);
    }
    else if ( (unsigned __int8)CCompositionSurfaceBitmap::IsSwapChain(*((CCompositionSurfaceBitmap **)this + 8))
           && COcclusionContext::IsOverlayCandidateCollectionEnabled((COcclusionContext *)a2) )
    {
      CRectangleShape::CRectangleShape((CRectangleShape *)v24, 0.0, 0.0, 0.0, 0.0);
      CRectangleShape::Set((CRectangleShape *)v24, (const struct MilRectF *)v23);
      D2D1InvertMatrix((D2D1_MATRIX_3X2_F *)matrix.m[1]);
      if ( m11_low )
      {
        *(_OWORD *)&v20.m[1][0] = *(_OWORD *)&matrix.m[1][0];
        *(_QWORD *)&matrix.m11 = v22;
      }
      else
      {
        v13 = matrix.m22 * v20.m21;
        v20.m21 = (float)(matrix.dx * v20.m22) + (float)(matrix.m21 * v20.m21);
        v14 = (float)(v20.dy * matrix.dy) + (float)(v20.dx * matrix.m22);
        v20.m22 = (float)(matrix.dy * v20.m22) + v13;
        v20.dx = (float)(v20.dy * matrix.dx) + (float)(v20.dx * matrix.m21);
        v20.dy = v14;
        v15 = (float)((float)(matrix.m12 * matrix.dy) + (float)(matrix.m11 * matrix.m22)) + *((float *)&v22 + 1);
        matrix.m11 = (float)((float)(matrix.m12 * matrix.dx) + (float)(matrix.m11 * matrix.m21)) + *(float *)&v22;
        matrix.m12 = v15;
      }
      CMILMatrix::CMILMatrix((CMILMatrix *)v25, (struct D2D_MATRIX_3X2_F *)v20.m[1]);
      v16 = *((_QWORD *)this + 8);
      if ( v16 )
        v17 = (CCompositionSurfaceBitmap *)(v16 + 40);
      else
        v17 = 0LL;
      v18 = COcclusionContext::CheckAndRecordOverlayCandidate((__int64)a2, a2[64], v17, (__int64)v25, (CShape *)v24, 0);
      v6 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x129u);
      CRectangleShape::~CRectangleShape((CRectangleShape *)v24);
    }
  }
  return v6;
}
