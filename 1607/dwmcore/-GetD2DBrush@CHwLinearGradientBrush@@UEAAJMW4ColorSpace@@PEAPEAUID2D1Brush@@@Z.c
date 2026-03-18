/*
 * XREFs of ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180018940
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180002F58 (-CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpac.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800AAFA4 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwLinearGradientBrush::GetD2DBrush(__int64 *a1, float a2, int a3, _QWORD *a4)
{
  _QWORD *v8; // rdx
  __int64 v9; // xmm1_8
  const struct _D3DCOLORVALUE *v10; // rdi
  __m128 v11; // xmm1
  __m128 v12; // xmm1
  unsigned __int32 v13; // xmm0_4
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  int v16; // eax
  unsigned int v17; // ebx
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __int64 v21; // [rsp+30h] [rbp-51h]
  struct _D3DCOLORVALUE v22; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+58h] [rbp-29h] BYREF
  __int64 v24; // [rsp+60h] [rbp-21h] BYREF
  struct _D3DCOLORVALUE v25; // [rsp+68h] [rbp-19h] BYREF
  float v26; // [rsp+78h] [rbp-9h] BYREF
  __int128 v27; // [rsp+7Ch] [rbp-5h]
  int v28; // [rsp+8Ch] [rbp+Bh]
  int v29; // [rsp+90h] [rbp+Fh]

  v8 = *(_QWORD **)(a1[8] + 216);
  v9 = *(_QWORD *)((char *)v8 + 140);
  v10 = (const struct _D3DCOLORVALUE *)v8[20];
  v23 = *(_QWORD *)((char *)v8 + 132);
  *(_QWORD *)&v22.r = v9;
  v24 = v23;
  v23 = v9;
  if ( a3 == 1 )
  {
    v11 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v25, v10));
    LODWORD(v22.r) = v11.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v11, v11, 255).m128_u32[0];
    LODWORD(v22.b) = _mm_shuffle_ps(v11, v11, 170).m128_u32[0];
    LODWORD(v22.g) = _mm_shuffle_ps(v11, v11, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v22.r;
    v12 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v22, v10 + 1));
    LODWORD(v22.r) = v12.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    v13 = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    LODWORD(v22.b) = _mm_shuffle_ps(v12, v12, 170).m128_u32[0];
  }
  else
  {
    v19 = (__m128)_mm_loadu_si128((const __m128i *)v10);
    v20 = (__m128)_mm_loadu_si128((const __m128i *)&v10[1]);
    LODWORD(v22.r) = v19.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v19, v19, 255).m128_u32[0];
    LODWORD(v22.b) = _mm_shuffle_ps(v19, v19, 170).m128_u32[0];
    LODWORD(v22.g) = _mm_shuffle_ps(v19, v19, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v22.r;
    LODWORD(v22.r) = v20.m128_i32[0];
    v13 = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    LODWORD(v22.b) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
  }
  v14 = a1[1];
  v28 = 0;
  v15 = a1 + 9;
  v29 = 0;
  LODWORD(v22.g) = v13;
  LODWORD(v21) = a3;
  v27 = _xmm;
  v26 = a2;
  v16 = CD2DContext::CreateLinearGradientBrush(
          v14,
          (__int128 *)&v25,
          (__int128 *)&v22,
          &v24,
          &v23,
          v21,
          (__int64)&v26,
          (__int64)(a1 + 9));
  v17 = v16;
  if ( v16 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x85u);
  else
    *a4 = *v15;
  return v17;
}
