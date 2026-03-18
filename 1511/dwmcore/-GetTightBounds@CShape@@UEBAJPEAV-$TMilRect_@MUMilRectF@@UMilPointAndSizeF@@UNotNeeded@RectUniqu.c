/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DC10
 * Callers:
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180021270 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@1PEA_N@Z @ 0x18003CFD0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DDE4 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x18005F160 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800617E0 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionIn.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800643F8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x1800474D0 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18004E2D0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::GetTightBounds(CRegionShape *this, __int64 a2, CBaseMatrix *a3)
{
  CBaseMatrix *v3; // rbx
  __int128 *v6; // r15
  __int64 (__fastcall *v7)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // r14
  int D2DGeometry; // eax
  unsigned int v9; // r14d
  unsigned int v10; // eax
  __int128 v11; // xmm0
  float v12; // xmm3_4
  int v14; // xmm0_4
  __m128 v15; // xmm2
  __m128 v16; // xmm1
  struct ID2D1Geometry *v17; // [rsp+30h] [rbp-50h] BYREF
  __int128 v18; // [rsp+38h] [rbp-48h]
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v21; // [rsp+70h] [rbp-10h]

  v3 = a3;
  v17 = 0LL;
  v6 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  if ( (unsigned int)CBaseMatrix::Is2DAffineOrNaN(a3) )
  {
    v14 = *(_DWORD *)v3;
    v6 = &v20;
    v15 = (__m128)*((unsigned int *)v3 + 13);
    DWORD1(v18) = *((_DWORD *)v3 + 1);
    HIDWORD(v18) = *((_DWORD *)v3 + 5);
    v16 = (__m128)*((unsigned int *)v3 + 12);
    LODWORD(v18) = v14;
    DWORD2(v18) = *((_DWORD *)v3 + 4);
    v20 = v18;
    v21 = _mm_unpacklo_ps(v16, v15).m128_u64[0];
LABEL_2:
    v3 = 0LL;
  }
  v7 = *(__int64 (__fastcall **)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)this + 16LL);
  if ( v7 == CRegionShape::GetD2DGeometry )
    D2DGeometry = CRegionShape::GetD2DGeometry(this, v3, &v17);
  else
    D2DGeometry = v7(this, v3, &v17);
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x338u);
  }
  else
  {
    if ( !v17 )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
      return v9;
    }
    v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int128 *))(*(_QWORD *)v17 + 32LL))(
            v17,
            v6,
            &v19);
    v11 = v19;
    v9 = v10;
    *(_OWORD *)a2 = v19;
    v12 = *(float *)a2;
    v18 = v11;
    if ( *(float *)(a2 + 8) < v12 || *(float *)(a2 + 12) < *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  if ( v17 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v17 + 16LL))(v17);
  return v9;
}
