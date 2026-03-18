/*
 * XREFs of ?AdjustBounds@CDropShadow@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18014EEB4
 * Callers:
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180138EB0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CDropShadow::AdjustBounds(float *a1, float *a2)
{
  float v2; // xmm4_4
  float v3; // xmm1_4
  float v4; // xmm2_4
  float v5; // xmm3_4
  float v7[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[38];
  v3 = a1[41] + a2[1];
  v4 = a1[41] + a2[3];
  v5 = (float)(a1[40] + a2[2]) + v2;
  v7[0] = (float)(a1[40] + *a2) - v2;
  v7[2] = v5;
  v7[1] = v3 - v2;
  v7[3] = v4 + v2;
  return TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a2, v7);
}
