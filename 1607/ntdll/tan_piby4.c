/*
 * XREFs of tan_piby4 @ 0x18009C1A0
 * Callers:
 *     tan @ 0x18009BED0 (tan.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall tan_piby4(double a1, double a2, int a3)
{
  int v3; // eax
  double v4; // xmm3_8
  __int128 v5; // xmm6
  double v6; // xmm2_8
  __int128 v7; // xmm5
  double v8; // xmm5_8
  __m128 result; // xmm0
  double v10; // [rsp+20h] [rbp+8h]

  v3 = 0;
  v4 = a2;
  v5 = *(_OWORD *)&a1;
  if ( a1 <= 0.68 )
  {
    if ( a1 >= -0.68 )
      goto LABEL_6;
    v3 = -1;
    *(double *)&v5 = a1 + 0.7853981633974483 + a2 + 3.061616997868382e-17;
  }
  else
  {
    v3 = 1;
    *((_QWORD *)&v5 + 1) = 0LL;
    *(double *)&v5 = 0.7853981633974483 - a1 + 3.061616997868382e-17 - a2;
  }
  v4 = 0.0;
LABEL_6:
  v6 = *(double *)&v5 * 2.0 * v4 + *(double *)&v5 * *(double *)&v5;
  *((_QWORD *)&v7 + 1) = *((_QWORD *)&v5 + 1);
  *(double *)&v7 = ((v6 * 0.0002240444485370221 - 0.02293450800575656) * v6 + 0.3723791597597922)
                 * (v6
                  * *(double *)&v5)
                 / (((0.02606566203986454 - v6 * 0.0002323714940885636) * v6 - 0.5156585157290311) * v6
                  + 1.117137479279377)
                 + v4;
  if ( v3 )
  {
    v8 = *(double *)&v7 + *(double *)&v5;
    if ( a3 )
    {
      result.m128_u64[1] = *((_QWORD *)&v5 + 1);
      *(double *)result.m128_u64 = v8 * 2.0 / (v8 - 1.0) - 1.0;
    }
    else
    {
      result = (__m128)*(unsigned __int64 *)&DOUBLE_1_0;
      *(double *)result.m128_u64 = 1.0 - v8 * 2.0 / (v8 + 1.0);
    }
    *(double *)result.m128_u64 = *(double *)result.m128_u64 * (double)v3;
  }
  else if ( a3 )
  {
    *(_QWORD *)&v10 = COERCE_UNSIGNED_INT64(-1.0 / (*(double *)&v7 + *(double *)&v5)) & 0xFFFFFFFF00000000uLL;
    result = (__m128)*(unsigned __int64 *)&v10;
    *(double *)result.m128_u64 = (v10
                                * COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(double *)&v7 + *(double *)&v5) & 0xFFFFFFFF00000000uLL)
                                + 1.0
                                + (*(double *)&v7
                                 - (COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(double *)&v7 + *(double *)&v5) & 0xFFFFFFFF00000000uLL)
                                  - *(double *)&v5))
                                * v10)
                               * (-1.0
                                / (*(double *)&v7 + *(double *)&v5))
                               + v10;
  }
  else
  {
    *(double *)&v7 = *(double *)&v7 + *(double *)&v5;
    return (__m128)v7;
  }
  return result;
}
