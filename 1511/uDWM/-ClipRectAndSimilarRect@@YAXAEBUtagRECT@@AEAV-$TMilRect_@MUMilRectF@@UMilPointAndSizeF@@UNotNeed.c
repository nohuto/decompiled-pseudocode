/*
 * XREFs of ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180013044
 * Callers:
 *     ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BD50 (-AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

_UNKNOWN **__fastcall ClipRectAndSimilarRect(int *a1, float *a2, float *a3)
{
  _UNKNOWN **result; // rax
  float v4; // xmm3_4
  float v5; // xmm9_4
  float v6; // xmm8_4
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  __int128 v15; // [rsp+0h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = a2[2] - *a2;
  if ( v4 > 0.0 && (float)(a2[3] - a2[1]) > 0.0 )
  {
    v5 = (float)*a1;
    if ( v5 <= *a2 )
      v5 = *a2;
    v6 = (float)a1[1];
    *(float *)&v15 = v5;
    if ( v6 <= a2[1] )
      v6 = a2[1];
    v7 = (float)a1[2];
    *((float *)&v15 + 1) = v6;
    if ( a2[2] <= v7 )
      v7 = a2[2];
    v8 = (float)a1[3];
    *((float *)&v15 + 2) = v7;
    if ( a2[3] <= v8 )
      v8 = a2[3];
    v9 = a3[2];
    *((float *)&v15 + 3) = v8;
    v10 = (float)((float)(v5 - *a2) * (float)(v9 - *a3)) / v4;
    v11 = a3[3];
    v12 = v10 + *a3;
    v13 = v11 - a3[1];
    *a3 = v12;
    v14 = (float)((float)((float)(v6 - a2[1]) * v13) / (float)(a2[3] - a2[1])) + a3[1];
    a3[1] = v14;
    a3[2] = (float)((float)((float)(v9 - v12) * (float)(v7 - v5)) / (float)(a2[2] - *a2)) + v12;
    a3[3] = (float)((float)((float)(v11 - v14) * (float)(v8 - v6)) / (float)(a2[3] - a2[1])) + v14;
    *(_OWORD *)a2 = v15;
  }
  return result;
}
