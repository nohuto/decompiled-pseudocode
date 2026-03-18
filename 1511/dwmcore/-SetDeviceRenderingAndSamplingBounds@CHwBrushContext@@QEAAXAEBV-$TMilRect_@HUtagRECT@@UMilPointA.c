/*
 * XREFs of ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800AD5B0
 * Callers:
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBV?$CMatrix@ULocalRenderingHPC@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilCompositingMode@@@Z @ 0x18008CA30 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SetDeviceSamplingBounds@CHwBrushContext@@QEAAXAEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800BDDBC (-SetDeviceSamplingBounds@CHwBrushContext@@QEAAXAEBV-$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z.c)
 */

__int64 __fastcall CHwBrushContext::SetDeviceRenderingAndSamplingBounds(__int64 a1, __int64 a2)
{
  float v2; // xmm1_4
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  float v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (float)*(int *)(a2 + 4);
  v6[0] = (float)*(int *)a2;
  v3 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 8));
  v6[1] = v2;
  v4 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 12));
  LODWORD(v6[2]) = _mm_cvtepi32_ps(v3).m128_u32[0];
  LODWORD(v6[3]) = _mm_cvtepi32_ps(v4).m128_u32[0];
  return CHwBrushContext::SetDeviceSamplingBounds(a1, v6);
}
