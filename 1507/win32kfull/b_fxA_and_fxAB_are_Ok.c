/*
 * XREFs of b_fxA_and_fxAB_are_Ok @ 0x1C0007930
 * Callers:
 *     vFillGLYPHDATA @ 0x1C00B23C0 (vFillGLYPHDATA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall b_fxA_and_fxAB_are_Ok(__int64 a1, __int64 a2, int *a3, int a4, int a5)
{
  float v5; // xmm4_4
  float v7; // xmm3_4
  int v8; // eax
  int v11; // ecx
  unsigned int v12; // esi
  float v13; // xmm0_4
  float v14; // xmm1_4
  __m128i v15; // xmm2
  int v16; // edx
  int v17; // r11d
  int v18; // ebp
  float v19; // xmm0_4
  float v20; // xmm0_4
  int v21; // r14d
  int v22; // eax
  int v23; // ecx
  int *v24; // r8
  __int64 v25; // r9
  int v26; // eax
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  int v31; // edx
  int v32; // ecx
  int v34; // [rsp+8h] [rbp-40h]
  _DWORD v35[5]; // [rsp+Ch] [rbp-3Ch] BYREF

  v5 = *(float *)(a1 + 216);
  v7 = *(float *)(a1 + 220);
  v8 = *(_DWORD *)(a1 + 288);
  v11 = *(_DWORD *)(a1 + 292);
  v12 = 1;
  v13 = v5 * (float)*(int *)(a2 + 16);
  v14 = v7 * (float)*(int *)(a2 + 16);
  v15 = _mm_cvtsi32_si128(*(_DWORD *)(a2 + 20));
  v16 = *(_DWORD *)(a1 + 296);
  v17 = (int)v13;
  v18 = v8 + (int)v13;
  v19 = _mm_cvtepi32_ps(v15).m128_f32[0];
  *(float *)v15.m128i_i32 = v19 * v7;
  v20 = v19 * v5;
  v21 = v11 + (int)v14;
  v34 = (int)v20 + v8;
  v22 = v11 + (int)*(float *)v15.m128i_i32;
  v23 = *(_DWORD *)(a1 + 300);
  v35[0] = v22;
  v35[1] = v16 + (int)v20;
  v24 = v35;
  v35[2] = v23 + (int)*(float *)v15.m128i_i32;
  v25 = 3LL;
  v26 = v16 + v17;
  v27 = v18;
  v35[3] = v26;
  v35[4] = v23 + (int)v14;
  v28 = v21;
  do
  {
    v29 = *(v24 - 1);
    if ( v29 < v27 )
      v27 = *(v24 - 1);
    if ( v29 > v18 )
      v18 = *(v24 - 1);
    v30 = *v24;
    v24 += 2;
    if ( v30 < v28 )
      v28 = v30;
    if ( v30 > v21 )
      v21 = v30;
    --v25;
  }
  while ( v25 );
  v31 = (v27 >> 4) - 1;
  v32 = (v28 >> 4) - 1;
  if ( v31 > *a3 )
    *a3 = v31;
  if ( v32 > a3[1] )
    a3[1] = v32;
  if ( ((v18 + 15) >> 4) + 1 < a4 + *a3 || ((v21 + 15) >> 4) + 1 < a5 + a3[1] )
    return 0;
  return v12;
}
