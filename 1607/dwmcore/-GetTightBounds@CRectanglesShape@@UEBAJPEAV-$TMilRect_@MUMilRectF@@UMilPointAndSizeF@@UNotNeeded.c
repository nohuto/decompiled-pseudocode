/*
 * XREFs of ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097A50
 * Callers:
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C8E0 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CC68 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18002DB00 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E1E0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z @ 0x180069A20 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@PEAVCVisual@@_NPEAI@Z.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180095374 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180058CF0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A3E0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180097C30 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRectanglesShape::GetTightBounds(CRectanglesShape *a1, __int64 a2, float *a3)
{
  CRectanglesShape *v4; // r9
  __int64 result; // rax
  __int128 *v6; // rsi
  int *v7; // r8
  const struct CMILMatrix *v8; // r10
  int v9; // xmm0_4
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  int (*v12)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v14; // edi
  unsigned int v15; // eax
  __int128 v16; // xmm0
  float v17; // xmm3_4
  struct ID2D1Geometry *v18; // [rsp+30h] [rbp-9h] BYREF
  __int128 v19; // [rsp+38h] [rbp-1h]
  __int128 v20; // [rsp+50h] [rbp+17h] BYREF
  __int128 v21; // [rsp+60h] [rbp+27h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp+37h]

  v4 = a1;
  if ( *((_DWORD *)a1 + 8) == 1 && (!a3 || CMILMatrix::IsIdentity<0>((__int64)a3)) )
  {
    result = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)*((_QWORD *)v4 + 1);
    return result;
  }
  v6 = 0LL;
  v18 = 0LL;
  if ( !a3 )
    goto LABEL_8;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a3) )
  {
    v9 = *v7;
    v6 = &v21;
    v10 = (__m128)(unsigned int)v7[13];
    DWORD1(v19) = v7[1];
    HIDWORD(v19) = v7[5];
    v11 = (__m128)(unsigned int)v7[12];
    LODWORD(v19) = v9;
    DWORD2(v19) = v7[4];
    v21 = v19;
    v22 = _mm_unpacklo_ps(v11, v10).m128_u64[0];
LABEL_8:
    v8 = 0LL;
  }
  v12 = *(int (**)(CRectanglesShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 16LL);
  if ( v12 == CRectanglesShape::GetD2DGeometry )
    D2DGeometry = CRectanglesShape::GetD2DGeometry(v4, v8, &v18);
  else
    D2DGeometry = ((__int64 (__fastcall *)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **))v12)(
                    v4,
                    v8,
                    &v18);
  v14 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x357u);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int128 *))(*(_QWORD *)v18 + 32LL))(
            v18,
            v6,
            &v20);
    v16 = v20;
    v14 = v15;
    *(_OWORD *)a2 = v20;
    v17 = *(float *)a2;
    v19 = v16;
    if ( *(float *)(a2 + 8) < v17 || *(float *)(a2 + 12) < *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v18 + 16LL))(v18);
  return v14;
}
