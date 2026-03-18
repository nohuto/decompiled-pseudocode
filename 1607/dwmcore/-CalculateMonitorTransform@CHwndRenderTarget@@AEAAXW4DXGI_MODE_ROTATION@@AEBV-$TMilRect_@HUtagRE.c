/*
 * XREFs of ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073DA8
 * Callers:
 *     ?EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ @ 0x180074110 (-EnsureRenderTarget@CHwndRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B2EC (-InferAffineMatrix@CMILMatrix@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV?$CMatrix@UDeviceHPC@CoordinateSpace@@U12@@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073CA4 (-CalculateTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@PEBUtagRECT@@PEAV-$CMatrix@UDe.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::CalculateMonitorTransform(
        __int64 *a1,
        int a2,
        unsigned int *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(__int64 *); // rax
  unsigned int v11; // eax
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __m128i v14; // xmm3
  int v15; // eax
  __m128i v16; // xmm0
  __m128i v17; // xmm1
  unsigned __int32 v18; // xmm3_4
  _OWORD v19[4]; // [rsp+30h] [rbp-51h] BYREF
  int v20; // [rsp+70h] [rbp-11h]
  int v21; // [rsp+80h] [rbp-1h] BYREF
  int v22; // [rsp+84h] [rbp+3h]
  float v23; // [rsp+88h] [rbp+7h]
  float v24; // [rsp+8Ch] [rbp+Bh]
  float v25[4]; // [rsp+90h] [rbp+Fh] BYREF

  v20 = dword_1801EAD50;
  v9 = *a1;
  v19[0] = CMILMatrix::Identity;
  v19[1] = xmmword_1801EAD20;
  v10 = *(unsigned __int8 (__fastcall **)(__int64 *))(v9 + 144);
  v19[2] = xmmword_1801EAD30;
  v19[3] = xmmword_1801EAD40;
  if ( !v10(a1) )
  {
    v11 = a4[2] - *a4;
    v12 = _mm_cvtsi32_si128(*a3);
    v13 = _mm_cvtsi32_si128(a3[2]);
    v21 = 0;
    v22 = 0;
    v14 = _mm_cvtsi32_si128(v11);
    v15 = a4[3] - a4[1];
    LODWORD(v25[0]) = _mm_cvtepi32_ps(v12).m128_u32[0];
    v16 = _mm_cvtsi32_si128(a3[1]);
    LODWORD(v25[2]) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v17 = _mm_cvtsi32_si128(a3[3]);
    v18 = _mm_cvtepi32_ps(v14).m128_u32[0];
    v24 = (float)v15;
    v23 = *(float *)&v18;
    LODWORD(v25[1]) = _mm_cvtepi32_ps(v16).m128_u32[0];
    LODWORD(v25[3]) = _mm_cvtepi32_ps(v17).m128_u32[0];
    if ( ((a2 - 2) & 0xFFFFFFFD) == 0 )
    {
      v21 = 0;
      v22 = 0;
      v23 = (float)v15;
      v24 = *(float *)&v18;
    }
    CMILMatrix::InferAffineMatrix((__int64)v19, (float *)&v21, v25);
  }
  CHwndRenderTarget::CalculateTransform((__int64)a1, a2, a4, (const struct CMILMatrix *)v19, a5);
}
