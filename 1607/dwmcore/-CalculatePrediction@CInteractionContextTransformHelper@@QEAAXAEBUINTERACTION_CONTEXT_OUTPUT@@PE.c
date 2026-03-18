/*
 * XREFs of ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x18018B220
 * Callers:
 *     ?_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUInteractionOutput@@@Z @ 0x1801706A4 (-_UpdateInteractionOutput@CInteractionContextWrapper@@AEAAXPEBUINTERACTION_CONTEXT_OUTPUT@@PEAUI.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x180098050 (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 *     _anonymous_namespace_::operator_ @ 0x18018B1B0 (_anonymous_namespace_--operator_.c)
 *     ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x18018BB38 (-TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z.c)
 */

void __fastcall CInteractionContextTransformHelper::CalculatePrediction(
        __m128 *this,
        const struct INTERACTION_CONTEXT_OUTPUT *a2,
        __m128 *a3,
        const struct tagRECT *a4,
        unsigned int a5,
        float a6,
        float a7,
        float *a8,
        float *a9)
{
  char v9; // bl
  bool v11; // zf
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __int32 v14; // r14d
  __m128 *v15; // rsi
  __m128 v16; // xmm10
  float *v17; // rax
  _DWORD *v18; // r9
  __int128 *v19; // r10
  float *v20; // r8
  __m128 v21; // xmm0
  float v22; // xmm1_4
  float v23; // xmm14_4
  __int64 v24; // xmm1_8
  float v25; // xmm3_4
  float v26; // xmm14_4
  float v27; // xmm11_4
  float v28; // xmm15_4
  float v29; // xmm12_4
  __m128i v30; // xmm7
  int v31; // eax
  float v32; // xmm6_4
  __int128 v33; // xmm0
  float v34; // xmm8_4
  float v35; // xmm7_4
  float *v36; // rdx
  float *v37; // r8
  __int128 *v38; // r10
  int v39; // r11d
  __int128 v40; // xmm0
  __int64 v41; // r10
  __int128 v42; // xmm0
  __int64 v43; // r10
  __int128 v44; // xmm0
  float v45; // xmm5_4
  float v46; // xmm4_4
  float v47; // xmm1_4
  float v48; // xmm0_4
  __int128 v49; // xmm0
  float *v50; // rdx
  float *v51; // r8
  float v52; // xmm4_4
  float v53; // xmm5_4
  __int128 v54; // xmm0
  __m128 v55; // [rsp+38h] [rbp-91h] BYREF
  int v56; // [rsp+48h] [rbp-81h]
  __int128 v57; // [rsp+50h] [rbp-79h] BYREF
  __int128 v58; // [rsp+60h] [rbp-69h]
  float v59; // [rsp+108h] [rbp+3Fh] BYREF
  float v60; // [rsp+110h] [rbp+47h] BYREF

  v9 = 1;
  if ( (*((_BYTE *)a2 + 4) & 1) != 0 )
  {
    v55.m128_u64[0] = 0LL;
    v56 = 0;
    v11 = a5 == 1;
    v55.m128_u64[1] = 1065353216LL;
    v12 = v55;
    this[9].m128_i8[4] = 0;
    this[8] = v12;
    this[9].m128_i32[0] = 0;
    this[9].m128_i8[5] = v11;
  }
  else
  {
    this[9].m128_i8[5] &= a5 == 1;
  }
  if ( !a3 )
    a3 = this + 8;
  v13 = *a3;
  v14 = a3[1].m128_i32[0];
  v15 = this + 8;
  v56 = v14;
  v16 = v13;
  v55 = v13;
  v17 = anonymous_namespace_::operator_((float *)&v57, v55.m128_f32, this[8].m128_f32);
  v20 = a9;
  v21 = *(__m128 *)v17;
  *(float *)&v58 = v17[4];
  v22 = _mm_shuffle_ps(v21, v21, 85).m128_f32[0] + a7;
  *a8 = v21.m128_f32[0] + a6;
  *v20 = v22;
  if ( *(_DWORD *)a2 == 1 && *((_DWORD *)a2 + 2) == 2 && v18 )
  {
    v23 = *((float *)a2 + 10);
    v24 = *((_QWORD *)v19 + 2);
    v25 = v23 + v16.m128_f32[0];
    v26 = v23 - *((float *)a2 + 5);
    v27 = v15->m128_f32[0];
    v28 = *((float *)a2 + 11) - *((float *)a2 + 6);
    v29 = *((float *)v19 + 33);
    v30 = _mm_cvtsi32_si128(v18[2] - *v18);
    v31 = v18[3] - v18[1];
    v32 = *((float *)a2 + 11) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    a6 = v26;
    v33 = *v19;
    v34 = (float)v31 - 1.0;
    a7 = v28;
    *(float *)&a8 = v27;
    v35 = _mm_cvtepi32_ps(v30).m128_f32[0] - 1.0;
    *(float *)&a9 = v29;
    v59 = v25;
    v60 = v32;
    v57 = v33;
    *(_QWORD *)&v58 = v24;
    if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v57) )
    {
      v40 = v38[3];
      *(_QWORD *)&v58 = *((_QWORD *)v38 + 8);
      v57 = v40;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v57,
        v25,
        v32,
        &v59,
        &v60);
      v42 = *(_OWORD *)(v41 + 48);
      *(_QWORD *)&v58 = *(_QWORD *)(v41 + 64);
      v57 = v42;
      CInteractionContextTransformHelper::TransformDirection((const struct D2D1::Matrix3x2F *)&v57, v26, v28, &a6, &a7);
      v44 = *(_OWORD *)(v43 + 48);
      *(_QWORD *)&v58 = *(_QWORD *)(v43 + 64);
      v57 = v44;
      CInteractionContextTransformHelper::TransformDirection(
        (const struct D2D1::Matrix3x2F *)&v57,
        v27,
        v29,
        (float *)&a8,
        (float *)&a9);
      v25 = v59;
      v26 = a6;
      v28 = a7;
      v27 = *(float *)&a8;
      v29 = *(float *)&a9;
      v32 = v60;
    }
    if ( *((_BYTE *)v38 + 149) == (_BYTE)v39
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm) <= v35
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm) <= v34 )
    {
      v9 = v39;
    }
    if ( *((_BYTE *)v38 + 148) == (_BYTE)v39 )
    {
      if ( v9 )
      {
        v45 = v25;
        v46 = v32;
        v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v25) & _xmm);
        if ( v47 > v35 )
        {
          v45 = v35;
          if ( v25 < 0.0 )
            LODWORD(v45) = LODWORD(v35) ^ _xmm;
          v46 = (float)(v45 * v32) / v25;
        }
        v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v46) & _xmm);
        if ( v48 > v34 )
        {
          v46 = v34;
          if ( v32 < 0.0 )
            LODWORD(v46) = LODWORD(v34) ^ _xmm;
          v45 = (float)(v46 * v25) / v32;
        }
        v49 = *v38;
        *(_QWORD *)&v58 = *((_QWORD *)v38 + 2);
        v57 = v49;
        *v36 = v45 - (float)(v27 + v26);
        *v37 = v46 - (float)(v29 + v28);
        if ( !D2D1::Matrix3x2F::IsIdentity((D2D1::Matrix3x2F *)&v57) )
        {
          v54 = *(__int128 *)((char *)v38 + 72);
          *(_QWORD *)&v58 = *((_QWORD *)v38 + 11);
          v57 = v54;
          CInteractionContextTransformHelper::TransformDirection(
            (const struct D2D1::Matrix3x2F *)&v57,
            v53,
            v52,
            v50,
            v51);
        }
      }
    }
    else if ( v9 )
    {
      *(_DWORD *)v36 = v39;
      *(_DWORD *)v37 = v39;
    }
    *((_BYTE *)v38 + 148) = v9;
  }
  *v15 = v16;
  v15[1].m128_i32[0] = v14;
}
