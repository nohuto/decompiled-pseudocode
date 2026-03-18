/*
 * XREFs of ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180132080
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18010BF88 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Transform@CBaseMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180047170 (-Transform@CBaseMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180066F90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CPolygon::D2DGeometryFromPolygon(
        const struct MilPoint4F **this,
        struct ID2D1PathGeometry *a2,
        const struct CMILMatrix *a3)
{
  __int128 v3; // xmm0
  __int128 v5; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __m128 v9; // xmm6
  __int64 (__fastcall *v10)(struct ID2D1PathGeometry *, __int64 *); // rbx
  __m128 v11; // xmm7
  int v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r14
  __m128 v17; // xmm7
  __m128 v18; // xmm6
  void (__fastcall *v19)(__int64, unsigned __int64); // rbx
  int v20; // eax
  __int64 v22; // [rsp+38h] [rbp-59h] BYREF
  float v23; // [rsp+40h] [rbp-51h] BYREF
  float v24; // [rsp+44h] [rbp-4Dh]
  float v25; // [rsp+4Ch] [rbp-45h]
  _OWORD v26[4]; // [rsp+58h] [rbp-39h] BYREF

  v3 = *(_OWORD *)a3;
  v22 = 0LL;
  v5 = *((_OWORD *)a3 + 1);
  v26[0] = v3;
  v7 = *((_OWORD *)a3 + 2);
  v26[1] = v5;
  v8 = *((_OWORD *)a3 + 3);
  v26[2] = v7;
  v26[3] = v8;
  D2DMatrixMultiply((struct D2DMatrix *)v26, (const struct D2DMatrix *)(this + 18), (const struct D2DMatrix *)v26);
  CBaseMatrix::Transform((CBaseMatrix *)v26, this[2], (struct MilPoint4F *)&v23);
  v9 = (__m128)LODWORD(v23);
  v11 = (__m128)LODWORD(v24);
  v9.m128_f32[0] = v23 / v25;
  v10 = *(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)a2 + 136LL);
  v11.m128_f32[0] = v24 / v25;
  v23 = v23 / v25;
  v24 = v24 / v25;
  v12 = v10(a2, &v22);
  v13 = v12;
  if ( v12 >= 0 )
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v22 + 40LL))(
      v22,
      _mm_unpacklo_ps(v9, v11).m128_u64[0],
      0LL);
    v14 = *((_DWORD *)this + 10);
    if ( v14 > 1 )
    {
      v15 = 20LL;
      v16 = v14 - 1;
      do
      {
        CBaseMatrix::Transform(
          (CBaseMatrix *)v26,
          (const struct MilPoint4F *)((char *)this[2] + v15),
          (struct MilPoint4F *)&v23);
        v17 = (__m128)LODWORD(v23);
        v18 = (__m128)LODWORD(v24);
        v19 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v22 + 80LL);
        v23 = v23 / v25;
        v17.m128_f32[0] = v23;
        v24 = v24 / v25;
        v18.m128_f32[0] = v24;
        v19(v22, _mm_unpacklo_ps(v17, v18).m128_u64[0]);
        v15 += 20LL;
        --v16;
      }
      while ( v16 );
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 64LL))(v22, 1LL);
    v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
    v13 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x23Eu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x22Au);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v13;
}
