/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x18011B75C
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z @ 0x18012F604 (-BspHitTest@CHitTestContext@@AEAAJPEAVCPolygon@@@Z.c)
 * Callees:
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18001793C (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001A890 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x18011BAF0 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x18011BD2C (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
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
  int v10; // eax
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __m128 v17; // xmm1
  __m128 v18; // xmm3
  __m128 v19; // xmm0
  __m128 v20; // xmm8
  __m128 v21; // xmm3
  __m128 v22; // xmm7
  __m128 v23; // xmm1
  __m128 v24; // xmm7
  bool IsPointInPolygon; // al
  __int64 v26; // rdx
  CGeometry *v27; // rcx
  int ShapeDataNoRef; // eax
  int v29; // eax
  int v30; // eax
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  union __m128 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v35; // [rsp+68h] [rbp-A0h]
  __int128 v36; // [rsp+78h] [rbp-90h]
  __int128 v37; // [rsp+88h] [rbp-80h]

  v6 = 0;
  v32 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)this + 236) )
    return v6;
  v10 = *((_DWORD *)this + 58);
  if ( v10 == -1 )
    v10 = *(_DWORD *)a5;
  if ( v10 != 1 )
    goto LABEL_23;
  v11 = *((_OWORD *)a3 + 1);
  v34 = *(_OWORD *)a3;
  v12 = *((_OWORD *)a3 + 2);
  v35 = v11;
  v13 = *((_OWORD *)a3 + 3);
  v36 = v12;
  v37 = v13;
  D2DMatrixMultiply((struct D2DMatrix *)&v34, (CPolygon *)((char *)this + 144), (const struct D2DMatrix *)&v34);
  if ( CMILMatrix::IsFacingUser((CMILMatrix *)&v34) )
  {
LABEL_23:
    v14 = *((_OWORD *)a4 + 1);
    v34 = *(_OWORD *)a4;
    v15 = *((_OWORD *)a4 + 2);
    v35 = v14;
    v16 = *((_OWORD *)a4 + 3);
    v36 = v15;
    v37 = v16;
    D2DMatrixMultiply((struct D2DMatrix *)&v34, (CPolygon *)((char *)this + 144), (const struct D2DMatrix *)&v34);
    v19.m128_u64[1] = _mm_unpacklo_ps(
                        _mm_unpacklo_ps((__m128)(unsigned int)v34, (__m128)*(unsigned int *)(&v34 + 8)),
                        _mm_unpacklo_ps((__m128)*(unsigned int *)(&v34 + 4), (__m128)*(unsigned int *)(&v34 + 12))).m128_u64[1];
    v17 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)(unsigned int)v35, (__m128)DWORD2(v35)),
            _mm_unpacklo_ps((__m128)DWORD1(v35), (__m128)HIDWORD(v35)));
    v18 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)(unsigned int)v37, (__m128)DWORD2(v37)),
            _mm_unpacklo_ps((__m128)DWORD1(v37), (__m128)HIDWORD(v37)));
    *(double *)v19.m128_u64 = DirectX::XMMatrixInverse(0LL);
    v20 = v18;
    if ( !_mm_movemask_ps(
            _mm_or_ps(
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v18, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
              _mm_or_ps(
                _mm_cmpeq_ps(_mm_and_ps(v17, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
                _mm_cmpeq_ps(_mm_and_ps(v19, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
    {
      v21 = _mm_unpacklo_ps(
              _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)0LL),
              _mm_unpacklo_ps((__m128)LODWORD(a2->y), (__m128)LODWORD(FLOAT_1_0)));
      v22 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v21, v21, 255), v20),
                _mm_mul_ps(_mm_shuffle_ps(v21, v21, 170), (__m128)_xmm)),
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v21, v21, 85), v17), _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), v19)));
      v23 = _mm_shuffle_ps(v22, v22, 255);
      v24 = _mm_div_ps(v22, _mm_shuffle_ps(v23, v23, 0));
      v33 = v24;
      IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v33);
      *a6 = IsPointInPolygon;
      if ( !IsPointInPolygon )
        goto LABEL_13;
      v26 = *((_QWORD *)this + 26);
      v27 = *(CGeometry **)(v26 + 368);
      if ( !v27 )
        goto LABEL_13;
      v33.m128_u64[0] = 0LL;
      ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v27, (const struct D2D_SIZE_F *)(v26 + 148), (struct CShape **)&v33);
      v6 = ShapeDataNoRef;
      if ( ShapeDataNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x1E8u);
        goto LABEL_18;
      }
      v29 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)v33.m128_u64[0] + 16LL))(
              v33.m128_u64[0],
              0LL,
              &v32);
      v6 = v29;
      if ( v29 >= 0 )
      {
LABEL_13:
        if ( !v32 )
          return v6;
        v30 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v32 + 56LL))(
                v32,
                _mm_unpacklo_ps(v24, _mm_shuffle_ps(v24, v24, 85)).m128_u64[0],
                0LL);
        v6 = v30;
        if ( v30 >= 0 )
          *a6 = v33.m128_i32[0] != 0;
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1F5u);
        goto LABEL_18;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x1E9u);
    }
  }
LABEL_18:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  return v6;
}
