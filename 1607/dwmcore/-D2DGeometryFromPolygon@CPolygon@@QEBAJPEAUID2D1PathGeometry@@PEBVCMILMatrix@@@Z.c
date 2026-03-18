/*
 * XREFs of ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x180154844
 * Callers:
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180122064 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180025320 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z @ 0x180162698 (-Transform@CMILMatrix@@QEBAXPEBUMilPoint4F@@PEAU2@I@Z.c)
 */

__int64 __fastcall CPolygon::D2DGeometryFromPolygon(
        const struct MilPoint4F **this,
        struct ID2D1PathGeometry *a2,
        const struct CMILMatrix *a3)
{
  __int128 v3; // xmm0
  int v4; // eax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  unsigned int v10; // r9d
  __m128 v11; // xmm6
  __int64 (__fastcall *v12)(struct ID2D1PathGeometry *, __int64 *); // rax
  __m128 v13; // xmm7
  int v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // r9d
  unsigned int v17; // eax
  __int64 v18; // rbx
  __int64 v19; // rdi
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  void (__fastcall *v22)(__int64, unsigned __int64); // rax
  int v23; // eax
  __int64 v25; // [rsp+38h] [rbp-59h] BYREF
  _OWORD v26[4]; // [rsp+48h] [rbp-49h] BYREF
  int v27; // [rsp+88h] [rbp-9h]
  float v28; // [rsp+98h] [rbp+7h] BYREF
  float v29; // [rsp+9Ch] [rbp+Bh]
  float v30; // [rsp+A4h] [rbp+13h]

  v3 = *(_OWORD *)a3;
  v4 = *((_DWORD *)a3 + 16);
  v6 = *((_OWORD *)a3 + 1);
  v25 = 0LL;
  v26[0] = v3;
  v8 = *((_OWORD *)a3 + 2);
  v27 = v4;
  v26[1] = v6;
  v9 = *((_OWORD *)a3 + 3);
  v26[2] = v8;
  v26[3] = v9;
  CMILMatrix::Multiply((const struct CMILMatrix *)(this + 18), (const struct CMILMatrix *)v26, (struct CMILMatrix *)v26);
  CMILMatrix::Transform((CMILMatrix *)v26, this[2], (struct MilPoint4F *)&v28, v10);
  v11 = (__m128)LODWORD(v28);
  v13 = (__m128)LODWORD(v29);
  v11.m128_f32[0] = v28 / v30;
  v12 = *(__int64 (__fastcall **)(struct ID2D1PathGeometry *, __int64 *))(*(_QWORD *)a2 + 136LL);
  v13.m128_f32[0] = v29 / v30;
  v28 = v28 / v30;
  v29 = v29 / v30;
  v14 = v12(a2, &v25);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x22Cu);
  }
  else
  {
    (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v25 + 40LL))(
      v25,
      _mm_unpacklo_ps(v11, v13).m128_u64[0],
      0LL);
    v17 = *((_DWORD *)this + 10);
    if ( v17 > 1 )
    {
      v18 = 20LL;
      v19 = v17 - 1;
      do
      {
        CMILMatrix::Transform(
          (CMILMatrix *)v26,
          (const struct MilPoint4F *)((char *)this[2] + v18),
          (struct MilPoint4F *)&v28,
          v16);
        v20 = (__m128)LODWORD(v28);
        v21 = (__m128)LODWORD(v29);
        v22 = *(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v25 + 80LL);
        v28 = v28 / v30;
        v20.m128_f32[0] = v28;
        v29 = v29 / v30;
        v21.m128_f32[0] = v29;
        v22(v25, _mm_unpacklo_ps(v20, v21).m128_u64[0]);
        v18 += 20LL;
        --v19;
      }
      while ( v19 );
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 64LL))(v25, 1LL);
    v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 72LL))(v25);
    v15 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x240u);
  }
  if ( v25 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  return v15;
}
