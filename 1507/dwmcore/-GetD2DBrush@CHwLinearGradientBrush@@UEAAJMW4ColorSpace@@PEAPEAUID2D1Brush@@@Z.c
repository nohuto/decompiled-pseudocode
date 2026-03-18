/*
 * XREFs of ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180142C30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180072ED4 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x180135314 (-CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpac.c)
 */

__int64 __fastcall CHwLinearGradientBrush::GetD2DBrush(__int64 *a1, float a2, int a3, _QWORD *a4)
{
  _QWORD *v8; // rdx
  __int64 v9; // xmm1_8
  const struct _D3DCOLORVALUE *v10; // rdi
  struct _D3DCOLORVALUE *v11; // rax
  __m128 v12; // xmm1
  __m128 v13; // xmm1
  unsigned __int32 v14; // xmm0_4
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __int64 v17; // rcx
  _QWORD *v18; // rdi
  int v19; // eax
  unsigned int v20; // ebx
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
    v11 = Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v25, v10);
    v12 = (__m128)_mm_loadu_si128((const __m128i *)v11);
    LODWORD(v22.r) = v12.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v12, v12, 255).m128_u32[0];
    v22.b = v11->b;
    LODWORD(v22.g) = _mm_shuffle_ps(v12, v12, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v22.r;
    v13 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v22, v10 + 1));
    LODWORD(v22.r) = v13.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v13, v13, 255).m128_u32[0];
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
    LODWORD(v22.b) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  }
  else
  {
    v15 = (__m128)_mm_loadu_si128((const __m128i *)v10);
    v16 = (__m128)_mm_loadu_si128((const __m128i *)&v10[1]);
    LODWORD(v22.r) = v15.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v15, v15, 255).m128_u32[0];
    v22.b = v10->b;
    LODWORD(v22.g) = _mm_shuffle_ps(v15, v15, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v22.r;
    LODWORD(v22.r) = v16.m128_i32[0];
    v14 = _mm_shuffle_ps(v16, v16, 85).m128_u32[0];
    v22.b = v10[1].b;
    LODWORD(v22.a) = _mm_shuffle_ps(v16, v16, 255).m128_u32[0];
  }
  v17 = a1[1];
  v28 = 0;
  v18 = a1 + 9;
  v29 = 0;
  LODWORD(v22.g) = v14;
  v27 = _xmm;
  v26 = a2;
  v19 = CD2DContext::CreateLinearGradientBrush(
          v17,
          (__int128 *)&v25,
          (__int128 *)&v22,
          &v24,
          &v23,
          a3,
          (__int64)&v26,
          (__int64)(a1 + 9));
  v20 = v19;
  if ( v19 >= 0 )
    *a4 = *v18;
  else
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x85u);
  return v20;
}
