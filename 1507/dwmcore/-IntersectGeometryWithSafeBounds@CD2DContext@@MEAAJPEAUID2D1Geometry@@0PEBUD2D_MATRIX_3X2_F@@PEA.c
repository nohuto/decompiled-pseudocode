/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180136900
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ceilf_0 @ 0x180099B5A (ceilf_0.c)
 *     floorf_0 @ 0x180099B7E (floorf_0.c)
 *     ?CreateGeometryGroup@CD2DFactory@@QEAAJW4D2D1_FILL_MODE@@PEAPEAUID2D1Geometry@@IPEAPEAUID2D1GeometryGroup@@@Z @ 0x180125950 (-CreateGeometryGroup@CD2DFactory@@QEAAJW4D2D1_FILL_MODE@@PEAPEAUID2D1Geometry@@IPEAPEAUID2D1Geom.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct ID2D1GeometryGroup **a6)
{
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __m128 v18; // xmm6
  float v19; // xmm7_4
  float v20; // xmm1_4
  __m128 v21; // xmm8
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  int v25; // eax
  enum D2D1_FILL_MODE v26; // edx
  __int64 v27; // r9
  CD2DFactory *v28; // rcx
  int v29; // eax
  struct ID2D1GeometryGroup *v30; // rax
  __int64 v32; // [rsp+38h] [rbp-99h] BYREF
  struct ID2D1Geometry *v33; // [rsp+40h] [rbp-91h] BYREF
  struct ID2D1Geometry *v34; // [rsp+48h] [rbp-89h] BYREF
  __int64 v35; // [rsp+50h] [rbp-81h] BYREF
  struct ID2D1GeometryGroup *v36; // [rsp+58h] [rbp-79h] BYREF
  __int64 v37; // [rsp+60h] [rbp-71h]
  struct ID2D1Geometry *v38[2]; // [rsp+68h] [rbp-69h] BYREF
  unsigned int X; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v40; // [rsp+7Ch] [rbp-55h]
  unsigned int v41; // [rsp+80h] [rbp-51h]
  unsigned int v42; // [rsp+84h] [rbp-4Dh]

  v33 = 0LL;
  v35 = 0LL;
  *a6 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v36 = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  v37 = a4;
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**(_QWORD **)(v9 + 24) + 80LL))(
          *(_QWORD *)(v9 + 24),
          &v33);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL) + 80LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
            &v34);
    v11 = v12;
    if ( v12 >= 0 )
    {
      v13 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v33 + 136LL))(v33, &v35);
      v11 = v13;
      if ( v13 >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v34 + 136LL))(v34, &v32);
        v11 = v14;
        if ( v14 >= 0 )
        {
          v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  v37,
                  LODWORD(FLOAT_0_25),
                  v35);
          v11 = v15;
          if ( v15 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 72LL))(v35);
            v11 = v16;
            if ( v16 >= 0 )
            {
              v17 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, unsigned int *))(*(_QWORD *)v33 + 32LL))(
                      v33,
                      0LL,
                      &X);
              v11 = v17;
              if ( v17 >= 0 )
              {
                v18 = (__m128)X;
                v19 = *(float *)&v41;
                if ( *(float *)&X <= *(float *)&v41 )
                {
                  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
                  if ( v20 < 8388608.0 )
                    v18 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&X));
                  v21 = (__m128)v40;
                  v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v40) & _xmm);
                  if ( v22 < 8388608.0 )
                    v21 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&v40));
                  v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v19) & _xmm);
                  if ( v23 < 8388608.0 )
                    v19 = (float)(int)ceilf_0(v19);
                  v24 = *(float *)&v42;
                  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v42) & _xmm) < 8388608.0 )
                    v24 = (float)(int)ceilf_0(*(float *)&v42);
                  if ( a5 )
                  {
                    *(_DWORD *)a5 = v18.m128_i32[0];
                    *(float *)(a5 + 8) = v19;
                    *(_DWORD *)(a5 + 4) = v21.m128_i32[0];
                    *(float *)(a5 + 12) = v24;
                  }
                  v18.m128_f32[0] = v18.m128_f32[0] - 1.0;
                  v21.m128_f32[0] = v21.m128_f32[0] - 1.0;
                  X = v18.m128_u32[0];
                  v40 = v21.m128_u32[0];
                  *(float *)&v41 = v19 + 1.0;
                  *(float *)&v42 = v24 + 1.0;
                  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v32 + 40LL))(
                    v32,
                    _mm_unpacklo_ps(v18, v21).m128_u64[0],
                    0LL);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 64LL))(v32, 1LL);
                  (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v32 + 40LL))(
                    v32,
                    _mm_unpacklo_ps((__m128)v41, (__m128)v42).m128_u64[0],
                    0LL);
                  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v32 + 64LL))(v32, 1LL);
                  v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 72LL))(v32);
                  v11 = v25;
                  if ( v25 >= 0 )
                  {
                    v28 = *(CD2DFactory **)(a1 + 16);
                    v38[0] = v33;
                    v38[1] = v34;
                    v29 = CD2DFactory::CreateGeometryGroup(v28, v26, v38, v27, &v36);
                    v11 = v29;
                    if ( v29 >= 0 )
                    {
                      v30 = v36;
                      v36 = 0LL;
                      *a6 = v30;
                    }
                    else
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x7B3u);
                    }
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x7A9u);
                  }
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x77Bu);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x776u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x774u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x76Cu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x76Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x76Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x769u);
  }
  if ( v33 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v33 + 16LL))(v33);
    v33 = 0LL;
  }
  if ( v35 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    v35 = 0LL;
  }
  if ( v34 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v34 + 16LL))(v34);
    v34 = 0LL;
  }
  if ( v32 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    v32 = 0LL;
  }
  if ( v36 )
    (*(void (__fastcall **)(struct ID2D1GeometryGroup *))(*(_QWORD *)v36 + 16LL))(v36);
  return v11;
}
