/*
 * XREFs of ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x180177720
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateGeometryGroup@CD2DFactory@@QEAAJW4D2D1_FILL_MODE@@PEAPEAUID2D1Geometry@@IPEAPEAUID2D1GeometryGroup@@@Z @ 0x180163E84 (-CreateGeometryGroup@CD2DFactory@@QEAAJW4D2D1_FILL_MODE@@PEAPEAUID2D1Geometry@@IPEAPEAUID2D1Geom.c)
 */

__int64 __fastcall CD2DContext::IntersectGeometryWithSafeBounds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct ID2D1GeometryGroup **a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __m128 v13; // xmm6
  float v14; // xmm7_4
  float v15; // xmm1_4
  __m128 v16; // xmm8
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  enum D2D1_FILL_MODE v20; // edx
  __int64 v21; // r9
  CD2DFactory *v22; // rcx
  struct ID2D1GeometryGroup *v23; // rax
  unsigned int v25; // [rsp+28h] [rbp-A9h]
  __int64 v26; // [rsp+48h] [rbp-89h] BYREF
  struct ID2D1Geometry *v27; // [rsp+50h] [rbp-81h] BYREF
  __int64 v28; // [rsp+58h] [rbp-79h] BYREF
  struct ID2D1Geometry *v29; // [rsp+60h] [rbp-71h] BYREF
  struct ID2D1GeometryGroup *v30; // [rsp+68h] [rbp-69h] BYREF
  struct ID2D1Geometry *v31[2]; // [rsp+70h] [rbp-61h] BYREF
  unsigned int X; // [rsp+80h] [rbp-51h] BYREF
  unsigned int v33; // [rsp+84h] [rbp-4Dh]
  unsigned int v34; // [rsp+88h] [rbp-49h]
  unsigned int v35; // [rsp+8Ch] [rbp-45h]

  v27 = 0LL;
  v28 = 0LL;
  *a6 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL) + 80LL))(
          *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
          &v27);
  v11 = v10;
  if ( v10 < 0 )
  {
    v25 = 2265;
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1Geometry **))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 24LL) + 80LL))(
            *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
            &v29);
    v11 = v10;
    if ( v10 < 0 )
    {
      v25 = 2266;
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v27 + 136LL))(v27, &v28);
      v11 = v10;
      if ( v10 < 0 )
      {
        v25 = 2267;
      }
      else
      {
        v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64 *))(*(_QWORD *)v29 + 136LL))(v29, &v26);
        v11 = v10;
        if ( v10 < 0 )
        {
          v25 = 2268;
        }
        else
        {
          v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, _DWORD, __int64))(*(_QWORD *)a3 + 88LL))(
                  a3,
                  a2,
                  1LL,
                  a4,
                  LODWORD(FLOAT_0_25),
                  v28);
          v11 = v10;
          if ( v10 < 0 )
          {
            v25 = 2276;
          }
          else
          {
            v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 72LL))(v28);
            v11 = v12;
            if ( v12 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x8E6u);
              goto LABEL_32;
            }
            v10 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, unsigned int *))(*(_QWORD *)v27 + 32LL))(
                    v27,
                    0LL,
                    &X);
            v11 = v10;
            if ( v10 < 0 )
            {
              v25 = 2283;
            }
            else
            {
              v13 = (__m128)X;
              v14 = *(float *)&v34;
              if ( *(float *)&X > *(float *)&v34 )
                goto LABEL_32;
              v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&X) & _xmm);
              if ( v15 < 8388608.0 )
                v13 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&X));
              v16 = (__m128)v33;
              v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v33) & _xmm);
              if ( v17 < 8388608.0 )
                v16 = (__m128)COERCE_UNSIGNED_INT((float)(int)floorf_0(*(float *)&v33));
              v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v14) & _xmm);
              if ( v18 < 8388608.0 )
                v14 = (float)(int)ceilf_0(v14);
              v19 = *(float *)&v35;
              if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v35) & _xmm) < 8388608.0 )
                v19 = (float)(int)ceilf_0(*(float *)&v35);
              if ( a5 )
              {
                *(_DWORD *)a5 = v13.m128_i32[0];
                *(float *)(a5 + 8) = v14;
                *(_DWORD *)(a5 + 4) = v16.m128_i32[0];
                *(float *)(a5 + 12) = v19;
              }
              v13.m128_f32[0] = v13.m128_f32[0] - 1.0;
              v16.m128_f32[0] = v16.m128_f32[0] - 1.0;
              X = v13.m128_u32[0];
              v33 = v16.m128_u32[0];
              *(float *)&v34 = v14 + 1.0;
              *(float *)&v35 = v19 + 1.0;
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v26 + 40LL))(
                v26,
                _mm_unpacklo_ps(v13, v16).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 64LL))(v26, 1LL);
              (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v26 + 40LL))(
                v26,
                _mm_unpacklo_ps((__m128)v34, (__m128)v35).m128_u64[0],
                0LL);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 64LL))(v26, 1LL);
              v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 72LL))(v26);
              v11 = v10;
              if ( v10 < 0 )
              {
                v25 = 2329;
              }
              else
              {
                v22 = *(CD2DFactory **)(a1 + 16);
                v31[0] = v27;
                v31[1] = v29;
                v10 = CD2DFactory::CreateGeometryGroup(v22, v20, v31, v21, &v30);
                v11 = v10;
                if ( v10 >= 0 )
                {
                  v23 = v30;
                  v30 = 0LL;
                  *a6 = v23;
                  goto LABEL_32;
                }
                v25 = 2339;
              }
            }
          }
        }
      }
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v25);
LABEL_32:
  if ( v27 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v27 + 16LL))(v27);
    v27 = 0LL;
  }
  if ( v28 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    v28 = 0LL;
  }
  if ( v29 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v29 + 16LL))(v29);
    v29 = 0LL;
  }
  if ( v26 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    v26 = 0LL;
  }
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1GeometryGroup *))(*(_QWORD *)v30 + 16LL))(v30);
  return v11;
}
