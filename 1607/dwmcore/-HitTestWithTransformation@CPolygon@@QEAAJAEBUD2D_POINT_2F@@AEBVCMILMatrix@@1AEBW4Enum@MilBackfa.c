/*
 * XREFs of ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x180154AB4
 * Callers:
 *     ?BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z @ 0x180170A4C (-BspHitTest@CHitTestContext@@AEAAJAEBVCMILMatrix@@PEAVCPolygon@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z @ 0x18002CBC0 (-GetShapeDataNoRef@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z @ 0x180154DD4 (-IsPointInPolygon@CPolygon@@AEBA_NAEBT__m128@@@Z.c)
 *     ?XMMatrixInverse@DirectX@@YQ?AUXMMATRIX@1@PEAT__m128@@U21@@Z @ 0x180155010 (-XMMatrixInverse@DirectX@@YQ-AUXMMATRIX@1@PEAT__m128@@U21@@Z.c)
 */

__int64 __fastcall CPolygon::HitTestWithTransformation(
        CPolygon *this,
        const struct D2D_POINT_2F *a2,
        const struct CMILMatrix *a3,
        const struct CMILMatrix *a4,
        const enum MilBackfaceVisibility::Enum *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  __int128 v9; // xmm1
  int v10; // eax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm0
  __m128 v16; // xmm8
  __m128 v17; // xmm3
  __m128 v18; // xmm6
  __m128 v19; // xmm1
  __m128 v20; // xmm6
  bool IsPointInPolygon; // al
  __int64 v22; // rdx
  CGeometry *v23; // rcx
  int ShapeDataNoRef; // eax
  int v25; // eax
  unsigned int v27; // [rsp+28h] [rbp-E0h]
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  union __m128 v29; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v30; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v31[2]; // [rsp+68h] [rbp-A0h]
  __int128 v32; // [rsp+88h] [rbp-80h]
  int v33; // [rsp+98h] [rbp-70h]

  v6 = 0;
  v28 = 0LL;
  *a6 = 0;
  if ( *((_BYTE *)this + 241) || !*((_BYTE *)this + 240) && *(_DWORD *)a5 )
    return v6;
  v9 = *((_OWORD *)a4 + 1);
  v10 = *((_DWORD *)a4 + 16);
  v30 = *(_OWORD *)a4;
  v11 = *((_OWORD *)a4 + 2);
  v31[0] = v9;
  v12 = *((_OWORD *)a4 + 3);
  v31[1] = v11;
  v32 = v12;
  v33 = v10;
  CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v30, (struct CMILMatrix *)&v30);
  v15.m128_u64[1] = _mm_unpacklo_ps(
                      _mm_unpacklo_ps((__m128)(unsigned int)v30, (__m128)*(unsigned int *)(&v30 + 8)),
                      _mm_unpacklo_ps((__m128)*(unsigned int *)(&v30 + 4), (__m128)*(unsigned int *)(&v30 + 12))).m128_u64[1];
  v13 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)LODWORD(v31[0]), (__m128)DWORD2(v31[0])),
          _mm_unpacklo_ps((__m128)DWORD1(v31[0]), (__m128)HIDWORD(v31[0])));
  v14 = _mm_unpacklo_ps(
          _mm_unpacklo_ps((__m128)(unsigned int)v32, (__m128)DWORD2(v32)),
          _mm_unpacklo_ps((__m128)DWORD1(v32), (__m128)HIDWORD(v32)));
  *(double *)v15.m128_u64 = DirectX::XMMatrixInverse(0LL);
  v16 = v14;
  if ( !_mm_movemask_ps(
          _mm_or_ps(
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v14, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps((__m128)_xmm, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)),
            _mm_or_ps(
              _mm_cmpeq_ps(_mm_and_ps(v13, DirectX::g_XMAbsMask), DirectX::g_XMInfinity),
              _mm_cmpeq_ps(_mm_and_ps(v15, DirectX::g_XMAbsMask), DirectX::g_XMInfinity)))) )
  {
    v17 = _mm_unpacklo_ps(
            _mm_unpacklo_ps((__m128)LODWORD(a2->x), (__m128)0LL),
            _mm_unpacklo_ps((__m128)LODWORD(a2->y), (__m128)LODWORD(FLOAT_1_0)));
    v18 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v17, v17, 255), v16),
              _mm_mul_ps(_mm_shuffle_ps(v17, v17, 170), (__m128)_xmm)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 85), v13), _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v15)));
    v19 = _mm_shuffle_ps(v18, v18, 255);
    v20 = _mm_div_ps(v18, _mm_shuffle_ps(v19, v19, 0));
    v29 = v20;
    IsPointInPolygon = CPolygon::IsPointInPolygon(this, &v29);
    *a6 = IsPointInPolygon;
    if ( !IsPointInPolygon )
      goto LABEL_11;
    v22 = *((_QWORD *)this + 27);
    v23 = *(CGeometry **)(v22 + 296);
    if ( !v23 )
      goto LABEL_11;
    v29.m128_u64[0] = 0LL;
    ShapeDataNoRef = CGeometry::GetShapeDataNoRef(v23, (const struct D2D_SIZE_F *)(v22 + 192), (struct CShape **)&v29);
    v6 = ShapeDataNoRef;
    if ( ShapeDataNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShapeDataNoRef, 0x1E8u);
      goto LABEL_16;
    }
    v25 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)v29.m128_u64[0] + 16LL))(
            v29.m128_u64[0],
            0LL,
            &v28);
    v6 = v25;
    if ( v25 < 0 )
    {
      v27 = 489;
    }
    else
    {
LABEL_11:
      if ( !v28 )
        return v6;
      v25 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v28 + 56LL))(
              v28,
              _mm_unpacklo_ps(v20, _mm_shuffle_ps(v20, v20, 85)).m128_u64[0],
              0LL);
      v6 = v25;
      if ( v25 >= 0 )
      {
        *a6 = v29.m128_i32[0] != 0;
        goto LABEL_16;
      }
      v27 = 501;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v27);
  }
LABEL_16:
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return v6;
}
