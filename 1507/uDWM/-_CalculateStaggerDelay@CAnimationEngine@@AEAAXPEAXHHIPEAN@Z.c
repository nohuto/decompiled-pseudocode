/*
 * XREFs of ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x1800314A8
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180031AD4 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAnimationEngine::_CalculateStaggerDelay(
        CAnimationEngine *this,
        void *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        double *a6)
{
  double *v6; // rbx
  int ThemeAnimationProperty; // eax
  int v11; // ecx
  int v12; // r8d
  float v13; // xmm3_4
  double v14; // xmm4_8
  float v15; // xmm1_4
  float v16; // xmm2_4
  bool v17; // r9
  unsigned int v18; // r10d
  unsigned int v19; // edx
  int i; // ecx
  double v21; // xmm0_8
  int v22; // [rsp+40h] [rbp-10h] BYREF
  int v23; // [rsp+44h] [rbp-Ch] BYREF
  float v24; // [rsp+48h] [rbp-8h] BYREF
  int v25; // [rsp+70h] [rbp+20h] BYREF
  int v26; // [rsp+74h] [rbp+24h]

  v26 = HIDWORD(this);
  v6 = a6;
  v22 = 0;
  v23 = 0;
  LODWORD(a6) = 0;
  *v6 = 0.0;
  v25 = 0;
  v24 = 1.0;
  if ( (int)GetThemeAnimationProperty(a2, a3, a4, 0LL, &v22, 4, &v25) >= 0 && (v22 & 5) == 5 )
  {
    if ( (int)GetThemeAnimationProperty(a2, a3, a4, 2LL, &v23, 4, &v25) >= 0 )
    {
      ThemeAnimationProperty = GetThemeAnimationProperty(a2, a3, a4, 3LL, &a6, 4, &v25);
      v11 = (int)a6;
      if ( ThemeAnimationProperty < 0 )
        v11 = 1000;
      LODWORD(a6) = v11;
      GetThemeAnimationProperty(a2, a3, a4, 4LL, &v24, 4, &v25);
    }
    v12 = v23;
    if ( v23 )
    {
      v13 = v24;
      v14 = DOUBLE_1_0;
      v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm);
      v17 = 0;
      if ( v15 >= 0.0000011920929 )
      {
        v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v24 - 1.0)) & _xmm);
        if ( v16 >= 0.0000011920929 )
          v17 = 1;
      }
      v18 = a5;
      v19 = 0;
      for ( i = (int)a6; v19 < v18; ++v19 )
      {
        if ( (float)i <= *v6 )
          break;
        *v6 = (double)v12 * v14 + *v6;
        if ( v17 )
          v14 = v14 * v13;
      }
      if ( i )
      {
        v21 = *v6;
        if ( (double)i <= *v6 )
          v21 = (double)i;
        *v6 = v21;
      }
      *v6 = *v6 / 1000.0;
    }
  }
}
