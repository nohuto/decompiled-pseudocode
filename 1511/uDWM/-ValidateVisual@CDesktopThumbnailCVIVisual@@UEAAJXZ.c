/*
 * XREFs of ?ValidateVisual@CDesktopThumbnailCVIVisual@@UEAAJXZ @ 0x18009AB30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z @ 0x18001A4F8 (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCResource@@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x1800236A0 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ??$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z @ 0x180040FAC (--$IntersectRectT@UMilPointAndSizeL@@@@YAHPEAUMilPointAndSizeL@@PEBU0@1@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopThumbnailCVIVisual::ValidateVisual(struct CResource **this, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // edi
  char v5; // al
  struct CResource *v6; // rcx
  unsigned int v7; // r13d
  int v8; // r12d
  int v9; // esi
  int v10; // r14d
  int v11; // r15d
  int v12; // eax
  int v13; // eax
  struct CResource *v14; // rcx
  int v15; // edx
  __m128i v16; // xmm4
  __m128i v17; // xmm1
  int v18; // r13d
  int v19; // r9d
  unsigned __int64 v20; // r8
  __m128i v21; // xmm0
  double v22; // xmm2_8
  double v23; // xmm4_8
  int v24; // r13d
  CResource *v25; // rcx
  int v26; // eax
  float v27; // xmm3_4
  double v28; // xmm1_8
  int v29; // eax
  int RectangleGeometry; // eax
  __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v33; // [rsp+38h] [rbp-48h]
  int v34; // [rsp+3Ch] [rbp-44h]
  __int64 v35; // [rsp+40h] [rbp-40h] BYREF
  __int64 v36; // [rsp+48h] [rbp-38h]
  _BYTE v37[12]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+5Ch] [rbp-24h]
  float v39; // [rsp+64h] [rbp-1Ch]
  __m128i v40; // [rsp+68h] [rbp-18h]

  v3 = CVisual::ValidateVisual((CVisual *)this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( ((_DWORD)this[10] & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 321) || (v5 = 1, (*((_DWORD *)this + 81) & 0x100000) != 0) )
        v5 = 0;
      if ( this[33] )
      {
        if ( this[34] )
        {
          v6 = this[37];
          if ( v6 )
          {
            v7 = *((_DWORD *)this + 28);
            v8 = v7;
            v9 = *((_DWORD *)this + 29);
            v10 = 0;
            *(_DWORD *)&v37[8] = v7;
            v11 = 0;
            LODWORD(v38) = v9;
            v33 = v7;
            v34 = v9;
            *(_QWORD *)v37 = 0LL;
            v35 = 0LL;
            v36 = 0LL;
            v32 = 0LL;
            if ( v5 )
            {
              LODWORD(v35) = -*((_DWORD *)this + 26);
              HIDWORD(v35) = -*((_DWORD *)this + 27);
              v12 = *((_DWORD *)v6 + 49) - *((_DWORD *)v6 + 47);
              if ( v12 < 0 )
                v12 = 0;
              LODWORD(v36) = v12;
              v13 = *((_DWORD *)v6 + 50) - *((_DWORD *)v6 + 48);
              if ( v13 < 0 )
                v13 = 0;
              HIDWORD(v36) = v13;
              IntersectRectT<MilPointAndSizeL>(&v32, (int *)&v35, (int *)v37);
              v9 = v34;
              v8 = v33;
              v11 = HIDWORD(v32);
              v10 = v32;
            }
            v14 = this[36];
            v15 = *((_DWORD *)this + 78) - *((_DWORD *)this + 76);
            v16 = _mm_cvtsi32_si128(v7);
            v17 = *(__m128i *)((char *)v14 + 40);
            v18 = *((_DWORD *)this + 81);
            if ( v15 < 0 )
              v15 = 0;
            v19 = *(_OWORD *)((char *)v14 + 40);
            v20 = _mm_srli_si128(v17, 8).m128i_u64[0];
            v35 = *((_QWORD *)v14 + 5);
            v21 = _mm_cvtsi32_si128(*((_DWORD *)v14 + 14));
            v40 = v17;
            v22 = (double)((int)v20 - v17.m128i_i32[0]);
            v23 = _mm_cvtepi32_pd(v16).m128d_f64[0] * v22 / ((double)v15 * _mm_cvtepi32_pd(v21).m128d_f64[0]);
            v24 = v18 & 0x100000;
            if ( v24 && !*((_BYTE *)this + 322) )
            {
              *(_QWORD *)v37 = v17.m128i_i64[0];
              *(_DWORD *)&v37[8] = (int)(v22 / v23);
              LODWORD(v38) = (int)((double)(HIDWORD(v20) - v17.m128i_i32[1]) / v23);
              IntersectRectT<MilPointAndSizeL>(&v32, (int *)v37, (int *)&v32);
              v19 = v35;
              v9 = v34;
              v8 = v33;
              v11 = HIDWORD(v32);
              v10 = v32;
            }
            if ( !v24 || !*((_BYTE *)this + 322) )
            {
              v25 = this[34];
              v38 = 0LL;
              *(_QWORD *)&v37[4] = 0LL;
              v26 = *((_DWORD *)this + 76) - v19;
              *(_DWORD *)v37 = 35;
              v27 = (double)v10 / v23 + (double)v26;
              v28 = (double)(*((_DWORD *)this + 77) - v40.m128i_i32[1]);
              *(float *)&v37[8] = v27;
              *(float *)&v38 = v28 + (double)v11 / v23;
              *(float *)&v28 = (double)v8 / v23;
              *((float *)&v38 + 1) = *(float *)&v28 + v27;
              v39 = (float)((double)v9 / v23) + *(float *)&v38;
              v29 = CResource::Send(v25, v37, 0x18u);
              v4 = v29;
              if ( v29 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x1C0u);
                return v4;
              }
              RectangleGeometry = ResourceHelper::CreateRectangleGeometry(v10, v11, v8, v9, this + 33);
              v4 = RectangleGeometry;
              if ( RectangleGeometry < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x1C1u);
                return v4;
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x18Eu);
  }
  return v4;
}
