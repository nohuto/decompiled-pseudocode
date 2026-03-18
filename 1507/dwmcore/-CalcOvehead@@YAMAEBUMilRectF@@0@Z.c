/*
 * XREFs of ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x18005C55C
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800404F0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
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
  float v13; // xmm2_4
  __int128 v15; // [rsp+28h] [rbp-19h] BYREF
  float v16; // [rsp+38h] [rbp-9h] BYREF
  float v17; // [rsp+3Ch] [rbp-5h]
  float v18; // [rsp+40h] [rbp-1h]
  float v19; // [rsp+44h] [rbp+3h]

  v2 = *(float *)a1;
  v3 = *((float *)a1 + 1);
  v4 = *((float *)a1 + 2);
  v5 = *((float *)a1 + 3);
  v15 = *(_OWORD *)a2;
  v16 = v2;
  v17 = v3;
  v18 = v4;
  v19 = v5;
  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&v16, (float *)&v15);
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
  v13 = (float)((float)(v19 - v17) * (float)(v18 - v16))
      - (float)((float)((float)((float)(v12 - v10) * (float)(v11 - *v6))
                      + (float)((float)(v7[2] - *v7) * (float)(v7[3] - v7[1])))
              - (float)((float)(v8 - v3) * (float)(v9 - v2)));
  if ( v13 <= 0.0 )
    return 0.0;
  return v13;
}
