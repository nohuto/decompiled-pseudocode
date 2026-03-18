/*
 * XREFs of ?ConvertRelativeTransformToAbsolute@CBrushTypeUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@PEAV3@@Z @ 0x180137584
 * Callers:
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18005DB98 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBrushTypeUtils::ConvertRelativeTransformToAbsolute(float *a1, __int64 a2, __int64 a3)
{
  float v3; // xmm5_4
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float v8; // xmm4_4
  float v9; // xmm0_4
  __int64 result; // rax
  float v11; // xmm6_4
  float v12; // xmm5_4
  float v13; // xmm0_4

  v3 = *a1;
  v4 = a1[2] - *a1;
  v5 = a1[3];
  v6 = a1[1];
  *(_DWORD *)a3 = *(_DWORD *)a2;
  v7 = v5 - v6;
  v8 = v7 / v4;
  v9 = (float)(v7 / v4) * *(float *)(a2 + 4);
  *(_QWORD *)(a3 + 8) = 0LL;
  *(float *)(a3 + 4) = v9;
  *(float *)(a3 + 16) = (float)(v4 / v7) * *(float *)(a2 + 16);
  *(_DWORD *)(a3 + 20) = *(_DWORD *)(a2 + 20);
  result = 1065353216LL;
  *(_QWORD *)(a3 + 40) = 1065353216LL;
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_QWORD *)(a3 + 32) = 0LL;
  *(float *)(a3 + 48) = (float)((float)((float)(v4 * *(float *)(a2 + 48)) - (float)(v3 * *(float *)a2))
                              - (float)((float)(v6 * *(float *)(a2 + 16)) * (float)(v4 / v7)))
                      + v3;
  v11 = v7 * *(float *)(a2 + 52);
  v12 = v3 * *(float *)(a2 + 4);
  v13 = v6 * *(float *)(a2 + 20);
  *(_DWORD *)(a3 + 56) = 0;
  *(_DWORD *)(a3 + 60) = 1065353216;
  *(float *)(a3 + 52) = (float)((float)(v11 - (float)(v12 * v8)) - v13) + v6;
  return result;
}
