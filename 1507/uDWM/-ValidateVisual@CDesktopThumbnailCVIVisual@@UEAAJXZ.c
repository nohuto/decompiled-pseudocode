/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x180099440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x180010AD0 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x18001E290 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x18003D5E4 (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
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
  struct CResource *v13; // rcx
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
  CResource *v24; // rcx
  int v25; // eax
  float v26; // xmm3_4
  double v27; // xmm1_8
  int v28; // eax
  int RectangleGeometry; // eax
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v32; // [rsp+38h] [rbp-48h]
  int v33; // [rsp+3Ch] [rbp-44h]
  __int64 v34; // [rsp+40h] [rbp-40h] BYREF
  __int64 v35; // [rsp+48h] [rbp-38h]
  _BYTE v36[12]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v37; // [rsp+5Ch] [rbp-24h]
  float v38; // [rsp+64h] [rbp-1Ch]
  __m128i v39; // [rsp+68h] [rbp-18h]

  v2 = CVisual::ValidateVisual((CVisual *)this);
  v3 = v2;
  if ( v2 >= 0 )
  {
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
            *(_DWORD *)&v36[8] = v6;
            v10 = 0;
            LODWORD(v37) = v8;
            v32 = v6;
            v33 = v8;
            *(_QWORD *)v36 = 0LL;
            v34 = 0LL;
            v35 = 0LL;
            v31 = 0LL;
            if ( v4 )
            {
              LODWORD(v34) = -*((_DWORD *)this + 26);
              HIDWORD(v34) = -*((_DWORD *)this + 27);
              v11 = *((_DWORD *)v5 + 49) - *((_DWORD *)v5 + 47);
              if ( v11 < 0 )
                v11 = 0;
              LODWORD(v35) = v11;
              v12 = *((_DWORD *)v5 + 50) - *((_DWORD *)v5 + 48);
              if ( v12 < 0 )
                v12 = 0;
              HIDWORD(v35) = v12;
              IntersectRectT<MilPointAndSizeL>(&v31, (int *)&v34, (int *)v36);
              v8 = v33;
              v7 = v32;
              v10 = HIDWORD(v31);
              v9 = v31;
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
            v34 = *((_QWORD *)v13 + 5);
            v20 = _mm_cvtsi32_si128(*((_DWORD *)v13 + 14));
            v39 = v16;
            v21 = (double)((int)v19 - v16.m128i_i32[0]);
            v22 = _mm_cvtepi32_pd(v15).m128d_f64[0] * v21 / ((double)v14 * _mm_cvtepi32_pd(v20).m128d_f64[0]);
            v23 = v17 & 0x100000;
            if ( v23 && !*((_BYTE *)this + 322) )
            {
              *(_QWORD *)v36 = v16.m128i_i64[0];
              *(_DWORD *)&v36[8] = (int)(v21 / v22);
              LODWORD(v37) = (int)((double)(HIDWORD(v19) - v16.m128i_i32[1]) / v22);
              IntersectRectT<MilPointAndSizeL>(&v31, (int *)v36, (int *)&v31);
              v18 = v34;
              v8 = v33;
              v7 = v32;
              v10 = HIDWORD(v31);
              v9 = v31;
            }
            if ( !v23 || !*((_BYTE *)this + 322) )
            {
              v24 = this[34];
              v37 = 0LL;
              *(_QWORD *)&v36[4] = 0LL;
              v25 = *((_DWORD *)this + 76) - v18;
              *(_DWORD *)v36 = 32;
              v26 = (double)v9 / v22 + (double)v25;
              v27 = (double)(*((_DWORD *)this + 77) - v39.m128i_i32[1]);
              *(float *)&v36[8] = v26;
              *(float *)&v37 = v27 + (double)v10 / v22;
              *(float *)&v27 = (double)v7 / v22;
              *((float *)&v37 + 1) = *(float *)&v27 + v26;
              v38 = (float)((double)v8 / v22) + *(float *)&v37;
              v28 = CResource::Send(v24, v36, 0x18u);
              v3 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x1C0u);
                return v3;
              }
              RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v9, v10, v7, v8, this + 33);
              v3 = RectangleGeometry;
              if ( RectangleGeometry < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x1C1u);
                return v3;
              }
              *((_BYTE *)this + 322) = 1;
            }
          }
        }
      }
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v2, 0x18Eu);
  }
  return v3;
}
