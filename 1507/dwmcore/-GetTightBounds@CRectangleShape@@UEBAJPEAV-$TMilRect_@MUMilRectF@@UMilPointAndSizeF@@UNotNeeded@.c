/*
 * XREFs of ?GetTightBounds@CRectangleShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180078DC0
 * Callers:
 *     ?PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800206D0 (-PreSubgraph@COcclusionContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180023CC0 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800735A4 (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180073960 (-IsCpuClippedInScope@CScopedClipStack@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLAGS@@W4D2D1_ANTIALIAS_MODE@@_N4PEBUD2D1_COMPOSITOR_PRIMITIVE_LAYER_STATE@@PEAVCShape@@4@Z @ 0x180076F50 (-AppendRect@CDrawListPrimitiveBuilder@@QEAAJAEBUD2D_RECT_F@@PEBVMatrix3x2F@D2D1@@W4D2D1_EDGE_FLA.c)
 *     ?GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800781CC (-GetTightBoundsNoBadNumber@CShape@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?IsEmpty@CShape@@QEBA_NXZ @ 0x18007824C (-IsEmpty@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800782D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800788C0 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEAUBrushContext@@PEAVCShape@@PEAVCBrushRealizer@@6W4Enum@MilCompositingMode@@@Z @ 0x180081870 (-DrawPathInternal@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCConte.c)
 * Callees:
 *     ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18001EFF0 (-D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z.c)
 *     ?Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z @ 0x180022580 (-Is2DAffineOrNaN@CBaseMatrix@@QEBAHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180078F90 (-GetD2DGeometry@CRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x32Cu);
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
