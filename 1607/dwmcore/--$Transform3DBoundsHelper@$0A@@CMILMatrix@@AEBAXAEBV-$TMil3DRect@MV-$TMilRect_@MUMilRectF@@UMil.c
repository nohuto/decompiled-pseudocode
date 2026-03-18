/*
 * XREFs of ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800594B0
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001569C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAUMilPoint3F@@@Z @ 0x180015810 (-Transform3DRectToPerspective@CMILMatrix@@QEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPo.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A580 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsTranslate@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A7A0 (--$IsTranslate@$00@CMILMatrix@@AEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

char __fastcall CMILMatrix::Transform3DBoundsHelper<0>(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rcx
  float *v5; // r10
  float *v6; // rax
  __int128 v7; // xmm0
  float *v8; // rcx
  float *v9; // r10
  float *v10; // r10
  float *v11; // r11
  __int64 v12; // rcx
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm4_4
  float v16; // xmm5_4
  float v17; // xmm6_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  int v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm0_4
  __int128 v36; // [rsp+20h] [rbp-59h] BYREF
  __int128 v37; // [rsp+38h] [rbp-41h] BYREF
  float v38; // [rsp+50h] [rbp-29h] BYREF
  char v39; // [rsp+54h] [rbp-25h] BYREF

  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2)
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[5]) & _xmm) < 0.00012207031
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5[4]) & _xmm) < 0.00012207031 )
  {
    v36 = *(_OWORD *)v5;
    LOBYTE(v6) = CMILMatrix::Transform2DBoundsHelper<0>(v4, &v36, &v37);
    v7 = v37;
    *(_OWORD *)a3 = v37;
    *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v36 = v7;
  }
  else
  {
    LOBYTE(v6) = CMILMatrix::IsTranslate<1>();
    if ( (_BYTE)v6 )
    {
      *(float *)a3 = *v9 + v8[12];
      *((float *)a3 + 1) = v9[1] + v8[13];
      *((float *)a3 + 4) = v9[4] + v8[14];
      *((float *)a3 + 2) = v9[2] + v8[12];
      *((float *)a3 + 3) = v9[3] + v8[13];
      *((float *)a3 + 5) = v9[5] + v8[14];
    }
    else
    {
      LOBYTE(v6) = CMILMatrix::IsTranslateAndScale<1>((__int64)v8);
      if ( (_BYTE)v6 )
      {
        *(float *)a3 = (float)(*v10 * *v11) + v11[12];
        *((float *)a3 + 1) = (float)(v10[1] * v11[5]) + v11[13];
        *((float *)a3 + 4) = (float)(v10[4] * v11[10]) + v11[14];
        *((float *)a3 + 2) = (float)(v10[2] * *v11) + v11[12];
        *((float *)a3 + 3) = (float)(v10[3] * v11[5]) + v11[13];
        *((float *)a3 + 5) = (float)(v10[5] * v11[10]) + v11[14];
        if ( *v11 <= 0.0 || v11[5] <= 0.0 || v11[10] <= 0.0 )
        {
          v29 = *a3;
          v30 = *((float *)a3 + 2);
          if ( *(float *)a3 > v30 )
          {
            *(float *)a3 = v30;
            a3[2] = v29;
          }
          v31 = *((float *)a3 + 1);
          v32 = *((float *)a3 + 3);
          if ( v31 > v32 )
          {
            *((float *)a3 + 1) = v32;
            *((float *)a3 + 3) = v31;
          }
          v33 = *((float *)a3 + 4);
          v34 = *((float *)a3 + 5);
          if ( v33 > v34 )
          {
            *((float *)a3 + 4) = v34;
            *((float *)a3 + 5) = v33;
          }
        }
      }
      else
      {
        CMILMatrix::Transform3DRectToPerspective(v11, v10, &v38);
        v6 = (float *)&v39;
        v12 = 2LL;
        *(_QWORD *)&v37 = 0x7F7FFFFF7F7FFFFFLL;
        *((_QWORD *)&v37 + 1) = 0xFF7FFFFFFF7FFFFFuLL;
        *(_OWORD *)a3 = v37;
        *((_QWORD *)a3 + 2) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_3_4028235e38), (__m128)LODWORD(FLOAT_N3_4028235e38)).m128_u64[0];
        v13 = *((float *)a3 + 2);
        v14 = *((float *)a3 + 1);
        v15 = *((float *)a3 + 3);
        v16 = *((float *)a3 + 4);
        v17 = *((float *)a3 + 5);
        do
        {
          v18 = *(v6 - 1);
          if ( *(float *)a3 > v18 )
            *(float *)a3 = v18;
          if ( v18 > v13 )
            v13 = v18;
          if ( v14 > *v6 )
            v14 = *v6;
          if ( *v6 > v15 )
            v15 = *v6;
          v19 = v6[1];
          if ( v16 > v19 )
            v16 = v6[1];
          if ( v19 > v17 )
            v17 = v6[1];
          v20 = v6[2];
          if ( *(float *)a3 > v20 )
            *(float *)a3 = v20;
          if ( v20 > v13 )
            v13 = v20;
          v21 = v6[3];
          if ( v14 > v21 )
            v14 = v6[3];
          if ( v21 > v15 )
            v15 = v6[3];
          v22 = v6[4];
          if ( v16 > v22 )
            v16 = v6[4];
          if ( v22 > v17 )
            v17 = v6[4];
          v23 = v6[5];
          if ( *(float *)a3 > v23 )
            *(float *)a3 = v23;
          if ( v23 > v13 )
            v13 = v23;
          v24 = v6[6];
          if ( v14 > v24 )
            v14 = v6[6];
          if ( v24 > v15 )
            v15 = v6[6];
          v25 = v6[7];
          if ( v16 > v25 )
            v16 = v6[7];
          if ( v25 > v17 )
            v17 = v6[7];
          v26 = v6[8];
          if ( *(float *)a3 > v26 )
            *(float *)a3 = v26;
          if ( v26 > v13 )
            v13 = v26;
          v27 = v6[9];
          if ( v14 > v27 )
            v14 = v6[9];
          if ( v27 > v15 )
            v15 = v6[9];
          v28 = v6[10];
          if ( v16 > v28 )
            v16 = v6[10];
          if ( v28 > v17 )
            v17 = v6[10];
          v6 += 12;
          --v12;
        }
        while ( v12 );
        *((float *)a3 + 5) = v17;
        *((float *)a3 + 2) = v13;
        *((float *)a3 + 1) = v14;
        *((float *)a3 + 3) = v15;
        *((float *)a3 + 4) = v16;
      }
    }
  }
  return (char)v6;
}
