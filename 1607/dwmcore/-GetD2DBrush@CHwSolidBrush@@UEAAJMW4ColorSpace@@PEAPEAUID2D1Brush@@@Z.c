/*
 * XREFs of ?GetD2DBrush@CHwSolidBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AAEB0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18002DE30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA?AU_D3DCOLORVALUE@@PEBU1@@Z @ 0x1800AAFA4 (-Convert_MilColorF_scRGB_To_MilColorF_sRGB@@YA-AU_D3DCOLORVALUE@@PEBU1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwSolidBrush::GetD2DBrush(const __m128i *a1, float a2, int a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  float v7; // xmm0_4
  __m128 v8; // xmm1
  D3DVALUE g; // xmm2_4
  D3DVALUE b; // xmm3_4
  __int64 v11; // rcx
  int v13; // eax
  struct _D3DCOLORVALUE v14; // [rsp+30h] [rbp-30h] BYREF
  struct _D3DCOLORVALUE v15; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  *(struct _D3DCOLORVALUE *)&v15.r = (struct _D3DCOLORVALUE)_mm_loadu_si128(a1 + 3);
  v7 = _mm_shuffle_ps(*(__m128 *)&v15.r, *(__m128 *)&v15.r, 255).m128_f32[0] * a2;
  v15.a = v7;
  if ( a3 == 1 )
  {
    v8 = (__m128)_mm_loadu_si128((const __m128i *)Convert_MilColorF_scRGB_To_MilColorF_sRGB(&v14, &v15));
    LODWORD(g) = _mm_shuffle_ps(v8, v8, 85).m128_u32[0];
    LODWORD(b) = _mm_shuffle_ps(v8, v8, 170).m128_u32[0];
    LODWORD(v7) = _mm_shuffle_ps(v8, v8, 255).m128_u32[0];
  }
  else
  {
    b = v15.b;
    g = v15.g;
    v8.m128_i32[0] = LODWORD(v15.r);
  }
  *a4 = 0LL;
  v11 = a1[4].m128i_i64[0];
  LODWORD(v15.r) = v8.m128_i32[0];
  v15.g = g;
  v15.b = b;
  v15.a = v7;
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, struct _D3DCOLORVALUE *))(*(_QWORD *)v11 + 64LL))(v11, &v15);
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD, struct _D3DCOLORVALUE *, _QWORD, const __m128i *))(**(_QWORD **)(a1->m128i_i64[1] + 40)
                                                                                              + 64LL))(
            *(_QWORD *)(a1->m128i_i64[1] + 40),
            &v15,
            0LL,
            a1 + 4);
    v4 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x4Eu);
      return v4;
    }
  }
  *a4 = a1[4].m128i_i64[0];
  return v4;
}
