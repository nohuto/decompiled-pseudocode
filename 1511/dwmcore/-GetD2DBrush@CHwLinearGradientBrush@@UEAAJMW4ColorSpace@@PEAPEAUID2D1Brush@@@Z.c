/*
 * XREFs of ?GetD2DBrush@CHwLinearGradientBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x180012D60
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpace@@PEBUD2D1_BRUSH_PROPERTIES@@PEAPEAUID2D1LinearGradientBrush@@@Z @ 0x18000FFD4 (-CreateLinearGradientBrush@CD2DContext@@QEAAJAEAU_D3DCOLORVALUE@@0AEAUD2D_POINT_2F@@1W4ColorSpac.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x180026934 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
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
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  int v17; // eax
  unsigned int v18; // ebx
  __m128 v20; // xmm1
  __m128 v21; // xmm2
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
    v20 = (__m128)_mm_loadu_si128((const __m128i *)v10);
    v21 = (__m128)_mm_loadu_si128((const __m128i *)&v10[1]);
    LODWORD(v22.r) = v20.m128_i32[0];
    LODWORD(v22.a) = _mm_shuffle_ps(v20, v20, 255).m128_u32[0];
    v22.b = v10->b;
    LODWORD(v22.g) = _mm_shuffle_ps(v20, v20, 85).m128_u32[0];
    *(struct _D3DCOLORVALUE *)&v25.r = *(struct _D3DCOLORVALUE *)&v22.r;
    LODWORD(v22.r) = v21.m128_i32[0];
    v14 = _mm_shuffle_ps(v21, v21, 85).m128_u32[0];
    v22.b = v10[1].b;
    LODWORD(v22.a) = _mm_shuffle_ps(v21, v21, 255).m128_u32[0];
  }
  v15 = a1[1];
  v28 = 0;
  v16 = a1 + 9;
  v29 = 0;
  LODWORD(v22.g) = v14;
  v27 = _xmm;
  v26 = a2;
  v17 = CD2DContext::CreateLinearGradientBrush(
          v15,
          (__int128 *)&v25,
          (__int128 *)&v22,
          &v24,
          &v23,
          a3,
          (__int64)&v26,
          (__int64)(a1 + 9));
  v18 = v17;
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x85u);
  else
    *a4 = *v16;
  return v18;
}
