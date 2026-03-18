/*
 * XREFs of ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800AF2EC
 * Callers:
 *     ?ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z @ 0x18000CA84 (-ShouldMerge@CDirtyRegion@@AEAA_NIIW4DirtyRegionOptimization@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

float __fastcall CalcOvehead(const struct MilRectF *a1, const struct MilRectF *a2)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  float *v6; // r9
  float *v7; // r10
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm8_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  __int128 v14; // [rsp+28h] [rbp-19h] BYREF
  float v15; // [rsp+38h] [rbp-9h] BYREF
  float v16; // [rsp+3Ch] [rbp-5h]
  float v17; // [rsp+40h] [rbp-1h]
  float v18; // [rsp+44h] [rbp+3h]

  v2 = *(float *)a1;
  v3 = *((float *)a1 + 1);
  v4 = *((float *)a1 + 2);
  v5 = *((float *)a1 + 3);
  v14 = *(_OWORD *)a2;
  v15 = v2;
  v16 = v3;
  v17 = v4;
  v18 = v5;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v15, (float *)&v14);
  v10 = v6[1];
  v11 = v6[2];
  v12 = v6[3];
  if ( *v6 > v2 )
    v2 = *v6;
  if ( v10 > v3 )
    v3 = v6[1];
  if ( v9 > v11 )
    v9 = v6[2];
  if ( v8 > v12 )
    v8 = v6[3];
  if ( v9 <= v2 || v8 <= v3 )
  {
    v8 = 0.0;
    v9 = 0.0;
    v3 = 0.0;
    v2 = 0.0;
  }
  return fmaxf(
           (float)((float)(v18 - v16) * (float)(v17 - v15))
         - (float)((float)((float)((float)(v12 - v10) * (float)(v11 - *v6))
                         + (float)((float)(v7[2] - *v7) * (float)(v7[3] - v7[1])))
                 - (float)((float)(v8 - v3) * (float)(v9 - v2))),
           0.0);
}
