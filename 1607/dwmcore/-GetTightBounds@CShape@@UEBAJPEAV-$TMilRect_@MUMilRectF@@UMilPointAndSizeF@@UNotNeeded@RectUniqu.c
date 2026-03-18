/*
 * XREFs of ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002C340
 * Callers:
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18002BF80 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180095374 (-TryOptimizedPaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800965A0 (-AppendRect@CDrawListPrimitiveBuilder@@IEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180002950 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18002C100 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A3E0 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CShape::GetTightBounds(CRegionShape *this, __int64 a2, __int64 a3)
{
  CRegionShape *v4; // r10
  __int128 *v5; // rsi
  const struct CMILMatrix *v6; // r9
  __int64 (__fastcall *v7)(CComplexShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v9; // edi
  unsigned int v10; // eax
  __int128 v11; // xmm0
  float v12; // xmm3_4
  int *v14; // r8
  int v15; // xmm0_4
  __m128 v16; // xmm2
  __m128 v17; // xmm1
  struct ID2D1Geometry *v18; // [rsp+30h] [rbp-50h] BYREF
  __int128 v19; // [rsp+38h] [rbp-48h]
  __int128 v20; // [rsp+50h] [rbp-30h] BYREF
  __int128 v21; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-10h]

  v18 = 0LL;
  v4 = this;
  v5 = 0LL;
  if ( !a3 )
    goto LABEL_2;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<0>(a3) )
  {
    v15 = *v14;
    v5 = &v21;
    v16 = (__m128)(unsigned int)v14[13];
    DWORD1(v19) = v14[1];
    HIDWORD(v19) = v14[5];
    v17 = (__m128)(unsigned int)v14[12];
    LODWORD(v19) = v15;
    DWORD2(v19) = v14[4];
    v21 = v19;
    v22 = _mm_unpacklo_ps(v17, v16).m128_u64[0];
LABEL_2:
    v6 = 0LL;
  }
  v7 = *(__int64 (__fastcall **)(CComplexShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 16LL);
  if ( v7 == CRegionShape::GetD2DGeometry )
  {
    D2DGeometry = CRegionShape::GetD2DGeometry(v4, v6, &v18);
  }
  else if ( v7 == CComplexShape::GetD2DGeometry )
  {
    D2DGeometry = CComplexShape::GetD2DGeometry(v4, v6, &v18);
  }
  else
  {
    D2DGeometry = v7(v4, v6, &v18);
  }
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DGeometry, 0x357u);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int128 *, __int128 *))(*(_QWORD *)v18 + 32LL))(
            v18,
            v5,
            &v20);
    v11 = v20;
    v9 = v10;
    *(_OWORD *)a2 = v20;
    v12 = *(float *)a2;
    v19 = v11;
    if ( *(float *)(a2 + 8) < v12 || *(float *)(a2 + 12) < *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  if ( v18 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v18 + 16LL))(v18);
  return v9;
}
