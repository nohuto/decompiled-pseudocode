/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18013234C
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x1801433C8 (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x1800644A8 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x180132684 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x1801328C8 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v6; // edi
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __m128 v11; // xmm1
  __m128 v12; // xmm3
  unsigned int *v13; // r10
  __m128 v14; // xmm0
  __m128 v15; // xmm8
  __m128 v16; // xmm3
  __m128 v17; // xmm7
  __m128 v18; // xmm1
  __m128 v19; // xmm7
  bool IsPointInPolygon; // al
  __int64 v21; // rdx
  const struct D2DMatrix **v22; // rcx
  int ShapeDataNoRef; // eax
  int v24; // eax
  int v25; // eax
  __int64 v27; // [rsp+38h] [rbp-A9h] BYREF
  union __m128 v28; // [rsp+48h] [rbp-99h] BYREF
  __int128 v29; // [rsp+58h] [rbp-89h] BYREF
  __int128 v30; // [rsp+68h] [rbp-79h]
  __int128 v31; // [rsp+78h] [rbp-69h]
  __int128 v32; // [rsp+88h] [rbp-59h]

  v6 = 0;
  v27 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)this + 233) || !*((_BYTE *)this + 232) && *(_DWORD *)a5 )
    return v6;
  v8 = *((_OWORD *)a4 + 1);
  v29 = *(_OWORD *)a4;
  v9 = *((_OWORD *)a4 + 2);
  v30 = v8;
  v10 = *((_OWORD *)a4 + 3);
  v31 = v9;
  v32 = v10;
  D2DMatrixMultiply((struct D2DMatrix *)&v29, (CPolygon *)((char *)this + 144), (const struct D2DMatrix *)&v29);
  v14.m128_u64[1] = _mm_unpacklo_ps(
                      _mm_unpacklo_ps((__m128)(unsigned int)v29, (__m128)*(unsigned int *)(&v29 + 8)),
                      _mm_unpacklo_ps((__m128)*(unsigned int *)(&v29 + 4), (__m128)*(unsigned int *)(&v29 + 12))).m128_u64[1];
  v11 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)(unsigned int)v30, (__m128)DWORD2(v30)),
          _mm_unpacklo_ps((__m128)DWORD1(v30), (__m128)HIDWORD(v30)));
  v12 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)(unsigned int)v32, (__m128)DWORD2(v32)),
          _mm_unpacklo_ps((__m128)DWORD1(v32), (__m128)HIDWORD(v32)));
  *(double *)v14.m128_u64 = DirectX::XMMatrixInverse(0LL);
  v15 = v12;
  if ( !_mm_movemask_ps(
          _mm_or_ps(
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v12, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v11, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
  {
    v16 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)*v13, (__m128)0LL),
            _mm_unpacklo_ps((__m128)v13[1], (__m128)LODWORD(FLOAT_1_0)));
    v17 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 255), v15),
              _mm_mul_ps(_mm_shuffle_ps(v16, v16, 170), (__m128)_xmm)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 85), v11), _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v14)));
    v18 = _mm_shuffle_ps(v17, v17, 255);
    v19 = _mm_div_ps(v17, _mm_shuffle_ps(v18, v18, 0));
    v28 = v19;
    IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v28);
    *a6 = IsPointInPolygon;
    if ( !IsPointInPolygon )
      goto LABEL_11;
    v21 = *((_QWORD *)this + 26);
    v22 = *(const struct D2DMatrix ***)(v21 + 352);
    if ( !v22 )
      goto LABEL_11;
    v28.m128_u64[0] = 0LL;
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v22, (const struct D2D_SIZE_F *)(v21 + 132), (struct CShape **)&v28);
    v6 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x1E6u);
      goto LABEL_16;
    }
    v24 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)v28.m128_u64[0] + 16LL))(
            v28.m128_u64[0],
            0LL,
            &v27);
    v6 = v24;
    if ( v24 >= 0 )
    {
LABEL_11:
      if ( !v27 )
        return v6;
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v27 + 56LL))(
              v27,
              _mm_unpacklo_ps(v19, _mm_shuffle_ps(v19, v19, 85)).m128_u64[0],
              0LL);
      v6 = v25;
      if ( v25 >= 0 )
        *a6 = v28.m128_i32[0] != 0;
      else
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x1F3u);
      goto LABEL_16;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x1E7u);
  }
LABEL_16:
  if ( v27 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  return v6;
}
