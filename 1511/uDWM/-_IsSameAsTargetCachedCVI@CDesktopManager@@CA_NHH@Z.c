/*
 * XREFs of ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x18003E094
 * Callers:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x18003D99C (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x18003E020 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x1800213C4 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 */

char __fastcall CDesktopManager::_IsSameAsTargetCachedCVI(int a1, int a2)
{
  __m128i v4; // xmm6
  float ScalingFactorForCVI; // xmm0_4
  char v6; // dl
  float v7; // xmm2_4
  __m128i v8; // xmm1
  int v9; // r8d
  int v10; // eax
  float v11; // xmm0_4
  int v12; // r8d
  __m128i v14; // [rsp+20h] [rbp-28h] BYREF

  v14 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1304);
  v4 = v14;
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(
                          CDesktopManager::s_pDesktopManagerInstance,
                          (const struct tagRECT *)&v14);
  v6 = 0;
  v7 = ScalingFactorForCVI;
  v8 = _mm_srli_si128(v4, 12);
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - _mm_cvtsi128_si32(v4);
  v10 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  if ( v9 < 0 )
    v9 = 0;
  v11 = (float)v9 * ScalingFactorForCVI;
  v12 = _mm_cvtsi128_si32(v8) - v10;
  if ( v12 < 0 )
    v12 = 0;
  if ( a1 == (int)v11 && a2 == (int)(float)((float)v12 * v7) )
    return 1;
  return v6;
}
