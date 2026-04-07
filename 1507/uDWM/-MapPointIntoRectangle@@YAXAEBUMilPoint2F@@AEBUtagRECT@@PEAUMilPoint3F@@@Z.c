/*
 * XREFs of ?MapPointIntoRectangle@@YAXAEBUMilPoint2F@@AEBUtagRECT@@PEAUMilPoint3F@@@Z @ 0x180091690
 * Callers:
 *     ?_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180093908 (-_SetUnifiedCenter@CGroupingStoryboard@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800955D0 (-_WindowEnumCallback@CAppLaunchWithTile@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@P.c)
 * Callees:
 *     <none>
 */

void __fastcall MapPointIntoRectangle(const struct MilPoint2F *a1, const struct tagRECT *a2, struct MilPoint3F *a3)
{
  float v3; // xmm2_4
  signed int v4; // eax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  float v7; // xmm2_4
  int v8; // eax
  __m128i v9; // xmm0
  float v10; // xmm1_4

  v3 = *(float *)a1;
  v4 = a2->right - a2->left;
  v5 = _mm_cvtsi32_si128(a2->left);
  if ( v4 < 0 )
    v4 = 0;
  *((_DWORD *)a3 + 2) = 0;
  v6 = _mm_cvtsi32_si128(v4);
  v7 = v3 - _mm_cvtepi32_ps(v5).m128_f32[0];
  v8 = a2->bottom - a2->top;
  v9 = _mm_cvtsi32_si128(a2->top);
  LODWORD(v10) = _mm_cvtepi32_ps(v6).m128_u32[0];
  if ( v8 < 0 )
    v8 = 0;
  *(float *)a3 = v7 / v10;
  *((float *)a3 + 1) = (float)(*((float *)a1 + 1) - _mm_cvtepi32_ps(v9).m128_f32[0]) / (float)v8;
}
