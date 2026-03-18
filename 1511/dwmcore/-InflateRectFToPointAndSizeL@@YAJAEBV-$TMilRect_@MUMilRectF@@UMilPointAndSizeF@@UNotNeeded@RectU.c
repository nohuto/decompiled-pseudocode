/*
 * XREFs of ?InflateRectFToPointAndSizeL@@YAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAUMilPointAndSizeL@@@Z @ 0x180139D54
 * Callers:
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18010B720 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DC4 (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall InflateRectFToPointAndSizeL(float *a1)
{
  unsigned int v1; // ebx
  float *v2; // rcx
  __int64 v3; // r9
  unsigned __int32 *v4; // r10
  float v5; // xmm1_4
  __m128 v6; // xmm4
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  int v9; // ecx
  __m128 v10; // xmm1
  unsigned __int32 v11; // edx
  __m128 v12; // xmm0
  int v13; // eax
  unsigned __int32 v14; // r8d
  unsigned __int32 v15; // eax
  unsigned __int32 v17; // [rsp+50h] [rbp+18h]

  v1 = 0;
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(a1)
    && (v5 = *v2, *v2 >= -1073741800.0)
    && v5 <= 1073741800.0
    && (v6 = (__m128)*((unsigned int *)v2 + 1), v6.m128_f32[0] >= -1073741800.0)
    && v6.m128_f32[0] <= 1073741800.0
    && v2[2] <= 1073741800.0
    && v2[3] <= 1073741800.0 )
  {
    v7 = (__m128)*(unsigned int *)v2;
    v8 = 0LL;
    v9 = (int)v5;
    v10.m128_f32[0] = (float)(int)v5;
    v11 = v9 + _mm_cmplt_ss(v7, v10).m128_u32[0];
    *v4 = v11;
    v10.m128_f32[0] = (float)(int)v6.m128_f32[0];
    v12 = (__m128)*(unsigned int *)(v3 + 8);
    v13 = (int)v12.m128_f32[0];
    v17 = _mm_cmplt_ss(v6, v10).m128_u32[0];
    v10.m128_i32[0] = *(_DWORD *)(v3 + 8);
    v14 = (int)v6.m128_f32[0] + v17;
    v4[1] = v14;
    v12.m128_f32[0] = (float)(int)v12.m128_f32[0];
    v15 = v13 - v11 - _mm_cmplt_ss(v12, v10).m128_u32[0];
    v12.m128_i32[0] = *(_DWORD *)(v3 + 12);
    v4[2] = v15;
    v8.m128_f32[0] = (float)(int)v12.m128_f32[0];
    v4[3] = (int)v12.m128_f32[0] - v14 - _mm_cmplt_ss(v8, v12).m128_u32[0];
  }
  else
  {
    v1 = -2003304438;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304438, 0xF6u);
  }
  return v1;
}
