/*
 * XREFs of ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180058270
 * Callers:
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180015B54 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18001665C (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180033340 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180049DC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18004DDE4 (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18004DE74 (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18004DF0C (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x180058D48 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800643F8 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAULegacyMilBrushContext@@PEAVCShape@@PEAVCLegacyMilBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x18008C6E0 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x180047060 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x1800474D0 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180058470 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CRectangleShape::GetTightBounds(CRectangleShape *this, __int64 a2, const struct D2DMatrix *a3)
{
  const struct D2DMatrix *v3; // rbx
  __int64 result; // rax
  CBaseMatrix *v7; // rcx
  int v8; // xmm0_4
  __int128 *v9; // r15
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  int v12; // xmm0_4
  int (*v13)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // r14
  int D2DGeometry; // eax
  unsigned int v15; // esi
  unsigned int v16; // eax
  __int128 v17; // xmm0
  float v18; // xmm3_4
  struct ID2D1Geometry *v19; // [rsp+30h] [rbp-29h] BYREF
  __int128 v20; // [rsp+38h] [rbp-21h]
  __int128 v21; // [rsp+50h] [rbp-9h] BYREF
  __int128 v22; // [rsp+60h] [rbp+7h] BYREF
  unsigned __int64 v23; // [rsp+70h] [rbp+17h]

  v3 = a3;
  if ( !a3 || D2DMatrixIsIdentity(a3) )
  {
    result = 0LL;
    *(_OWORD *)a2 = *(_OWORD *)((char *)this + 8);
    return result;
  }
  v19 = 0LL;
  if ( (unsigned int)CBaseMatrix::Is2DAffineOrNaN(v7) )
  {
    v8 = *(_DWORD *)v3;
    v9 = &v22;
    v10 = (__m128)*((unsigned int *)v3 + 13);
    DWORD1(v20) = *((_DWORD *)v3 + 1);
    HIDWORD(v20) = *((_DWORD *)v3 + 5);
    v11 = (__m128)*((unsigned int *)v3 + 12);
    LODWORD(v20) = v8;
    v12 = *((_DWORD *)v3 + 4);
    v3 = 0LL;
    DWORD2(v20) = v12;
    v22 = v20;
    v23 = _mm_unpacklo_ps(v11, v10).m128_u64[0];
  }
  else
  {
    v9 = 0LL;
  }
  v13 = *(int (**)(CRectangleShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)this + 16LL);
  if ( v13 == CRectangleShape::GetD2DGeometry )
    D2DGeometry = CRectangleShape::GetD2DGeometry(this, v3, &v19);
  else
    D2DGeometry = ((__int64 (__fastcall *)(CRectangleShape *, const struct D2DMatrix *, struct ID2D1Geometry **))v13)(
                    this,
                    v3,
                    &v19);
  v15 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x338u);
LABEL_12:
    if ( v19 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v19 + 16LL))(v19);
    return v15;
  }
  if ( v19 )
  {
    v16 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int128 *))(*(_QWORD *)v19 + 32LL))(
            v19,
            v9,
            &v21);
    v17 = v21;
    v15 = v16;
    *(_OWORD *)a2 = v21;
    v18 = *(float *)a2;
    v20 = v17;
    if ( *(float *)(a2 + 8) < v18 || *(float *)(a2 + 12) < *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
    goto LABEL_12;
  }
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)a2 = 0LL;
  return v15;
}
