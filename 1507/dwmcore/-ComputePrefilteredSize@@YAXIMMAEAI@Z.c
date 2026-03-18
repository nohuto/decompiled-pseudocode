/*
 * XREFs of ?ComputePrefilteredSize@@YAXIMMAEAI@Z @ 0x18005FA48
 * Callers:
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1800199B8 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 * Callees:
 *     ??$_Pow_int@M@@YAMMH@Z @ 0x18005FB80 (--$_Pow_int@M@@YAMMH@Z.c)
 *     logf_0 @ 0x180099BA2 (logf_0.c)
 */

void __fastcall ComputePrefilteredSize(int a1, float a2, float a3, unsigned int *a4)
{
  __m128 v6; // xmm8
  __m128 v7; // xmm7
  float v8; // xmm9_4
  float v9; // xmm6_4
  __m128 v10; // xmm2
  __m128 v11; // xmm6
  __int64 v12; // rcx
  __m128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // eax
  __m128 v16; // xmm0
  unsigned __int32 v17; // [rsp+80h] [rbp+8h]

  v6 = 0LL;
  v6.m128_f32[0] = (float)a1;
  v7 = v6;
  v7.m128_f32[0] = (float)a1 * a3;
  if ( v7.m128_f32[0] <= 1.0 )
  {
    *a4 = 1;
  }
  else
  {
    v8 = logf_0(a2);
    if ( v8 < 0.0 && (v9 = logf_0(a3) / v8, _finite(v9)) && v9 < v6.m128_f32[0] )
    {
      v10 = 0LL;
      v10.m128_f32[0] = v9;
      v11 = 0LL;
      v12 = (unsigned int)(int)v10.m128_f32[0];
      v13.m128_f32[0] = (float)(int)v12;
      v13.m128_f32[0] = _Pow_int<float>(v12, (unsigned int)v12 + _mm_cmplt_ss(v10, v13).m128_u32[0]) * v6.m128_f32[0];
      v14 = (int)v13.m128_f32[0];
      v11.m128_f32[0] = (float)(int)v13.m128_f32[0];
      v17 = _mm_cmplt_ss(v11, v13).m128_u32[0];
    }
    else
    {
      v16 = v7;
      v14 = (int)v7.m128_f32[0];
      v16.m128_f32[0] = (float)(int)v7.m128_f32[0];
      v17 = _mm_cmplt_ss(v16, v7).m128_u32[0];
    }
    v15 = v14 - v17;
    *a4 = v15;
    if ( v15 > a1 )
      v15 = a1;
    *a4 = v15;
  }
}
