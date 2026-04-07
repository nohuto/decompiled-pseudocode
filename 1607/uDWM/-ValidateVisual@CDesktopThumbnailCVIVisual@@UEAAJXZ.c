/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x180097940
 * Callers:
 *     <none>
 * Callees:
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x1800092A8 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18000B468 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800205A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // edi
  char v4; // al
  struct CResource *v5; // rcx
  unsigned int v6; // r13d
  int v7; // r12d
  int v8; // esi
  int v9; // r14d
  int v10; // r15d
  int v11; // eax
  int v12; // eax
  struct CResource *v13; // rax
  int v14; // edx
  __m128i v15; // xmm4
  __m128i v16; // xmm1
  int v17; // r13d
  int v18; // r9d
  unsigned __int64 v19; // r8
  __m128i v20; // xmm0
  double v21; // xmm2_8
  double v22; // xmm4_8
  int v23; // r13d
  struct CResource *v24; // rdx
  float v25; // xmm3_4
  double v26; // xmm1_8
  int v27; // eax
  int RectangleGeometry; // eax
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v31; // [rsp+38h] [rbp-48h]
  int v32; // [rsp+3Ch] [rbp-44h]
  __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  __int64 v34; // [rsp+48h] [rbp-38h]
  __int64 v35; // [rsp+50h] [rbp-30h] BYREF
  float v36; // [rsp+58h] [rbp-28h]
  float v37; // [rsp+5Ch] [rbp-24h]
  __m128i v38; // [rsp+60h] [rbp-20h]

  v2 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x18Eu);
    return v3;
  }
  if ( ((_DWORD)this[10] & 0x1000) != 0 )
  {
    if ( *((_BYTE *)this + 321) || (v4 = 1, (*((_DWORD *)this + 81) & 0x100000) != 0) )
      v4 = 0;
    if ( this[33] )
    {
      if ( this[34] )
      {
        v5 = this[37];
        if ( v5 )
        {
          v6 = *((_DWORD *)this + 28);
          v7 = v6;
          v8 = *((_DWORD *)this + 29);
          v9 = 0;
          v36 = *(float *)&v6;
          v10 = 0;
          v37 = *(float *)&v8;
          v31 = v6;
          v32 = v8;
          v35 = 0LL;
          v33 = 0LL;
          v34 = 0LL;
          v30 = 0LL;
          if ( v4 )
          {
            LODWORD(v33) = -*((_DWORD *)this + 26);
            HIDWORD(v33) = -*((_DWORD *)this + 27);
            v11 = *((_DWORD *)v5 + 49) - *((_DWORD *)v5 + 47);
            if ( v11 < 0 )
              v11 = 0;
            LODWORD(v34) = v11;
            v12 = *((_DWORD *)v5 + 50) - *((_DWORD *)v5 + 48);
            if ( v12 < 0 )
              v12 = 0;
            HIDWORD(v34) = v12;
            IntersectRectT<MilPointAndSizeL>(&v30, (int *)&v33, (int *)&v35);
            v8 = v32;
            v7 = v31;
            v10 = HIDWORD(v30);
            v9 = v30;
          }
          v13 = this[36];
          v14 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
          v15 = _mm_cvtsi32_si128(v6);
          v16 = *(__m128i *)((char *)v13 + 40);
          v17 = *((_DWORD *)this + 81);
          if ( v14 < 0 )
            v14 = 0;
          v18 = *(_OWORD *)((char *)v13 + 40);
          v19 = _mm_srli_si128(v16, 8).m128i_u64[0];
          v33 = *((_QWORD *)v13 + 5);
          v20 = _mm_cvtsi32_si128(*((_DWORD *)v13 + 14));
          v38 = v16;
          v21 = (double)((int)v19 - v16.m128i_i32[0]);
          v22 = _mm_cvtepi32_pd(v15).m128d_f64[0] * v21 / ((double)v14 * _mm_cvtepi32_pd(v20).m128d_f64[0]);
          v23 = v17 & 0x100000;
          if ( v23 && !*((_BYTE *)this + 322) )
          {
            v35 = v16.m128i_i64[0];
            LODWORD(v36) = (int)(v21 / v22);
            LODWORD(v37) = (int)((double)(HIDWORD(v19) - v16.m128i_i32[1]) / v22);
            IntersectRectT<MilPointAndSizeL>(&v30, (int *)&v35, (int *)&v30);
            v18 = v33;
            v8 = v32;
            v7 = v31;
            v10 = HIDWORD(v30);
            v9 = v30;
          }
          if ( !v23 || !*((_BYTE *)this + 322) )
          {
            v24 = this[34];
            v25 = (double)(*((_DWORD *)this + 76) - v18) + (double)v9 / v22;
            v26 = (double)(*((_DWORD *)this + 77) - v38.m128i_i32[1]);
            *(float *)&v35 = v25;
            *((float *)&v35 + 1) = v26 + (double)v10 / v22;
            *(float *)&v26 = (double)v7 / v22;
            v36 = *(float *)&v26 + v25;
            v37 = (float)((double)v8 / v22) + *((float *)&v35 + 1);
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)v24 + 2) + 288LL))(
                    *((_QWORD *)v24 + 2),
                    *((unsigned int *)v24 + 6),
                    &v35);
            v3 = v27;
            if ( v27 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x1C3u);
              return v3;
            }
            RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                                  (unsigned int)v9,
                                  (unsigned int)v10,
                                  (unsigned int)v7,
                                  (unsigned int)v8,
                                  this + 33);
            v3 = RectangleGeometry;
            if ( RectangleGeometry < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x1C5u);
              return v3;
            }
            *((_BYTE *)this + 322) = 1;
          }
        }
      }
    }
    *((_DWORD *)this + 20) &= ~0x1000u;
  }
  return v3;
}
