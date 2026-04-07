/*
 * XREFs of ?UpdateViewPort@CImage@@QEAAJXZ @ 0x18007949C
 * Callers:
 *     ?ValidateVisual@CImage@@UEAAJXZ @ 0x18003C830 (-ValidateVisual@CImage@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall CImage::UpdateViewPort(CImage *this)
{
  CResource *v1; // r9
  unsigned int v2; // ebx
  __m128i v3; // xmm1
  __m128i v4; // xmm2
  float v5; // xmm1_4
  unsigned int v6; // eax
  float v7; // xmm2_4
  __m128i v8; // xmm0
  int v9; // eax
  int v10; // eax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+34h] [rbp-24h]
  __int64 v14; // [rsp+3Ch] [rbp-1Ch]
  float v15; // [rsp+44h] [rbp-14h]

  v1 = (CResource *)*((_QWORD *)this + 36);
  v2 = 0;
  if ( v1 )
  {
    v3 = _mm_cvtsi32_si128(*((_DWORD *)this + 76));
    v4 = _mm_cvtsi32_si128(*((_DWORD *)this + 77));
    v13 = 0LL;
    v14 = 0LL;
    LODWORD(v5) = _mm_cvtepi32_ps(v3).m128_u32[0];
    v15 = 0.0;
    v6 = *((_DWORD *)this + 78);
    v12 = 35;
    LODWORD(v7) = _mm_cvtepi32_ps(v4).m128_u32[0];
    *((float *)&v13 + 1) = v5;
    *(float *)&v14 = v7;
    if ( !v6 )
      v6 = *((_DWORD *)this + 28);
    v8 = _mm_cvtsi32_si128(v6);
    v9 = *((_DWORD *)this + 79);
    *((float *)&v14 + 1) = _mm_cvtepi32_ps(v8).m128_f32[0] + v5;
    if ( !v9 )
      v9 = *((_DWORD *)this + 29);
    v15 = (float)v9 + v7;
    v10 = CResource::Send(v1, &v12, 0x18u);
    v2 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0xFBu);
  }
  return v2;
}
