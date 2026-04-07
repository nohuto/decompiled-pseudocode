/*
 * XREFs of ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180039F38
 * Callers:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x180009B98 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z @ 0x1800381F0 (-FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCResource@@@Z.c)
 * Callees:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001E170 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 */

char __fastcall CDesktopManager::_IsSameAsTargetCachedCVI(int a1, int a2)
{
  __m128i v4; // xmm6
  float ScalingFactorForCVI; // xmm2_4
  char v6; // dl
  __m128i v7; // xmm0
  int v8; // r8d
  int v9; // eax
  float v10; // xmm1_4
  int v11; // r8d
  __m128i v13; // [rsp+20h] [rbp-28h] BYREF

  v13 = *(__m128i *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1288);
  v4 = v13;
  ScalingFactorForCVI = CDesktopManager::GetScalingFactorForCVI(
                          CDesktopManager::s_pDesktopManagerInstance,
                          (const struct tagRECT *)&v13);
  v6 = 0;
  v7 = _mm_srli_si128(v4, 12);
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 8)) - _mm_cvtsi128_si32(v4);
  v9 = _mm_cvtsi128_si32(_mm_srli_si128(v4, 4));
  if ( v8 < 0 )
    v8 = 0;
  v10 = (float)v8;
  v11 = _mm_cvtsi128_si32(v7) - v9;
  if ( v11 < 0 )
    v11 = 0;
  if ( a1 == (int)(float)(v10 * ScalingFactorForCVI) && a2 == (int)(float)((float)v11 * ScalingFactorForCVI) )
    return 1;
  return v6;
}
