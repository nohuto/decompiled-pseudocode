/*
 * XREFs of ?AdjustRelativeRectangle@@YAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV1@@Z @ 0x18005C9A8
 * Callers:
 *     ?GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV4@2PEAH@Z @ 0x18005CA78 (-GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005C308 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

bool __fastcall AdjustRelativeRectangle(float *a1)
{
  bool result; // al
  __int64 v2; // rdx
  float *v3; // r8
  __m128 v4; // xmm5
  float v5; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm3_4

  result = IsRectEmptyOrInvalid(a1);
  if ( result || (result = IsRectEmptyOrInvalid((float *)v2)) )
  {
    *(_OWORD *)v2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  }
  else
  {
    v4 = (__m128)_mm_loadu_si128((const __m128i *)v2);
    v5 = _mm_shuffle_ps(v4, v4, 85).m128_f32[0];
    v6 = (float)((float)(v3[2] - *v3) * v4.m128_f32[0]) + *v3;
    *(float *)v2 = v6;
    v7 = (float)((float)(v3[3] - v3[1]) * v5) + v3[1];
    *(float *)(v2 + 4) = v7;
    *(float *)(v2 + 8) = (float)((float)(v3[2] - *v3) * (float)(_mm_shuffle_ps(v4, v4, 170).m128_f32[0] - v4.m128_f32[0]))
                       + v6;
    *(float *)(v2 + 12) = (float)((float)(v3[3] - v3[1]) * (float)(_mm_shuffle_ps(v4, v4, 255).m128_f32[0] - v5)) + v7;
  }
  return result;
}
