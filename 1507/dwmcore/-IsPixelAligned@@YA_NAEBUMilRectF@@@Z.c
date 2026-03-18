/*
 * XREFs of ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18005B7D8
 * Callers:
 *     ?CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z @ 0x18000C3F4 (-CreateFastHitTestRegion@CPrimitiveGroup@@AEBAJPEA_N@Z.c)
 *     ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x18005B580 (-BuildFromRectFs@CShape@@SAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
char __fastcall IsPixelAligned(const struct MilRectF *a1, __int64 a2, double a3)
{
  float v3; // xmm3_4
  char v4; // dl
  int v5; // eax
  float v6; // xmm3_4
  int v7; // eax
  float v8; // xmm3_4
  int v9; // eax
  float v10; // xmm3_4
  int v11; // eax
  __m128 v13; // rt1
  __m128 v14; // rt1
  __m128 v15; // rt1
  __m128 v16; // rt1
  float v17; // [rsp+20h] [rbp+8h]
  float v18; // [rsp+20h] [rbp+8h]
  float v19; // [rsp+20h] [rbp+8h]
  float v20; // [rsp+20h] [rbp+8h]

  v3 = *(float *)a1;
  v4 = 0;
  if ( (*(_DWORD *)a1 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    *(float *)&a3 = (float)(int)v3 - v3;
    v13.m128_f32[0] = FLOAT_N0_5;
    *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v13);
    v5 = (int)v3 - LODWORD(a3);
  }
  else
  {
    v17 = v3 + 6291456.25;
    v5 = (int)(LODWORD(v17) << 10) >> 11;
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v3 - (float)v5)) & _xmm) <= 0.00390625 )
  {
    v6 = *((float *)a1 + 1);
    if ( (LODWORD(v6) & 0x7FFFFFFFu) > 0x497FFFF0 )
    {
      *(float *)&a3 = (float)(int)v6 - v6;
      v14.m128_f32[0] = FLOAT_N0_5;
      *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v14);
      v7 = (int)v6 - LODWORD(a3);
    }
    else
    {
      v18 = v6 + 6291456.25;
      v7 = (int)(LODWORD(v18) << 10) >> 11;
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v6 - (float)v7)) & _xmm) <= 0.00390625 )
    {
      v8 = *((float *)a1 + 2);
      if ( (LODWORD(v8) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v8 - v8;
        v15.m128_f32[0] = FLOAT_N0_5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v15);
        v9 = (int)v8 - LODWORD(a3);
      }
      else
      {
        v19 = v8 + 6291456.25;
        v9 = (int)(LODWORD(v19) << 10) >> 11;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - (float)v9)) & _xmm) <= 0.00390625 )
      {
        v10 = *((float *)a1 + 3);
        if ( (LODWORD(v10) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v10 - v10;
          v16.m128_f32[0] = FLOAT_N0_5;
          v11 = (int)v10 - _mm_cmple_ss(*(__m128 *)&a3, v16).m128_u32[0];
        }
        else
        {
          v20 = v10 + 6291456.25;
          v11 = (int)(LODWORD(v20) << 10) >> 11;
        }
        return (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v10 - (float)v11)) & _xmm) <= 0.00390625;
      }
    }
  }
  return v4;
}
