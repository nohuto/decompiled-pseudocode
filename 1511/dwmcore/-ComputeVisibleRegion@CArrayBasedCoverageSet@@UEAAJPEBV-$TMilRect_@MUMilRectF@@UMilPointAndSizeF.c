/*
 * XREFs of ?ComputeVisibleRegion@CArrayBasedCoverageSet@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x180036420
 * Callers:
 *     ?ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_NPEA_NPEAPEAV2@PEAI@Z @ 0x1800550FC (-ComputeVisibleRegion@COcclusionContext@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 * Callees:
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180036D60 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036E98 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalculateSubtractionRectangles@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_NPEAV1@IPEAK@Z @ 0x180036EC4 (-CalculateSubtractionRectangles@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBAIAEBV1@_.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ?IntersectAndOptimize@@YA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0AEBV1@PEA_N2@Z @ 0x1800AB73C (-IntersectAndOptimize@@YA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 */

__int64 __fastcall CArrayBasedCoverageSet::ComputeVisibleRegion(
        __int64 a1,
        float *a2,
        __int32 a3,
        char a4,
        _BYTE *a5,
        __int64 a6,
        unsigned int *a7)
{
  char v7; // si
  float *v8; // r11
  float v10; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  __int128 v14; // xmm0
  char v15; // r10
  unsigned int v16; // r15d
  __int64 v17; // rbx
  float v18; // xmm8_4
  float v19; // xmm10_4
  float v20; // xmm3_4
  __int64 v21; // rsi
  const __m128i *v22; // rdi
  bool v23; // di
  _OWORD **v24; // r10
  char v26; // al
  float v27; // xmm1_4
  __m128 v28; // xmm2
  float v29; // xmm7_4
  float v30; // xmm8_4
  float v31; // xmm6_4
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm1_4
  __int64 v35; // r8
  int v36; // ebx
  unsigned int v37; // edx
  __int128 *v38; // r9
  __int32 v39; // ebx
  _OWORD *v40; // r9
  __int64 v41; // r11
  float v42; // xmm3_4
  __int64 v43; // r10
  float v44; // xmm1_4
  __int64 v45; // r8
  __int64 v46; // rax
  _OWORD **v47; // rcx
  __int64 v48; // r9
  __int128 *v49; // r8
  _OWORD *v50; // rax
  __int128 v51; // xmm0
  __int64 v52; // r11
  __int128 v53; // xmm0
  float v54; // xmm2_4
  float v55; // xmm0_4
  char v56; // [rsp+30h] [rbp-D0h] BYREF
  char v57; // [rsp+31h] [rbp-CFh] BYREF
  char v58; // [rsp+32h] [rbp-CEh]
  __int32 v59; // [rsp+34h] [rbp-CCh]
  __int64 v60; // [rsp+38h] [rbp-C8h]
  __m128 v61; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v62; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v63; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v64[64]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v65[4]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a4;
  v8 = a2;
  v58 = a4;
  *a5 = 0;
  *a7 = 0;
  v59 = a3;
  v60 = a6;
  if ( !a3 )
    return 0LL;
  v10 = a2[2];
  v11 = *a2;
  if ( v10 <= *a2 )
    return 0LL;
  v12 = a2[3];
  v13 = a2[1];
  if ( v12 <= v13 )
    return 0LL;
  v14 = *(_OWORD *)a2;
  v15 = 0;
  v16 = 0;
  v56 = 0;
  v62 = v14;
  v17 = 0LL;
  v18 = 0.0;
  v19 = 0.0;
  v20 = (float)(v12 - v13) * (float)(v10 - v11);
  if ( *(_DWORD *)(a1 + 48) )
  {
    v21 = *(_QWORD *)(a1 + 24);
    do
    {
      v22 = (const __m128i *)(v21 + 20 * v17);
      if ( v22[1].m128i_i32[0] >= a3 )
        break;
      v61 = (__m128)_mm_loadu_si128(v22);
      if ( _mm_shuffle_ps(v61, v61, 170).m128_f32[0] > v61.m128_f32[0] && v61.m128_f32[3] > v61.m128_f32[1] )
      {
        v26 = IntersectAndOptimize(
                (unsigned int)&v63,
                (unsigned int)&v62,
                (unsigned int)&v61,
                (unsigned int)&v57,
                (__int64)&v56);
        v15 = v56;
        if ( v26 )
        {
          if ( v56 )
            break;
          if ( v57 )
            v18 = v20
                - (float)((float)(*((float *)&v62 + 2) - *(float *)&v62)
                        * (float)(*((float *)&v62 + 3) - *((float *)&v62 + 1)));
          v27 = (float)((float)(*((float *)&v63 + 2) - *(float *)&v63)
                      * (float)(*((float *)&v63 + 3) - *((float *)&v63 + 1)))
              + v18;
          if ( v27 > v19 )
          {
            v16 = v17;
            v19 = (float)((float)(*((float *)&v63 + 2) - *(float *)&v63)
                        * (float)(*((float *)&v63 + 3) - *((float *)&v63 + 1)))
                + v18;
            if ( v27 >= (float)(v20 * 0.69999999) )
            {
              if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(
                                      v21 + 20 * v17,
                                      &v62) )
                break;
            }
          }
        }
        a3 = v59;
      }
      v17 = (unsigned int)(v17 + 1);
    }
    while ( (unsigned int)v17 < *(_DWORD *)(a1 + 48) );
    v7 = v58;
  }
  v23 = (v11 != *(float *)&v62
      || v13 != *((float *)&v62 + 1)
      || v10 != *((float *)&v62 + 2)
      || v12 != *((float *)&v62 + 3))
     && (!(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v8)
      || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v62))
     && (!(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v52)
      || !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v62));
  if ( v15 )
  {
    *a5 = 1;
    *a7 = 0;
  }
  else if ( v19 > (float)(v20 * 0.1) )
  {
    `vector constructor iterator'(
      (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v64,
      0x10uLL,
      4,
      TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
    v28 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 24) + 20LL * v16));
    LODWORD(v29) = _mm_shuffle_ps(v28, v28, 85).m128_u32[0];
    LODWORD(v30) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
    LODWORD(v31) = _mm_shuffle_ps(v28, v28, 255).m128_u32[0];
    if ( *(float *)&v62 > v28.m128_f32[0] )
      v28.m128_i32[0] = v62;
    if ( *((float *)&v62 + 1) > v29 )
      v29 = *((float *)&v62 + 1);
    if ( v30 > *((float *)&v62 + 2) )
      v30 = *((float *)&v62 + 2);
    if ( v31 > *((float *)&v62 + 3) )
      v31 = *((float *)&v62 + 3);
    if ( v30 <= v28.m128_f32[0] || v31 <= v29 )
    {
      v31 = 0.0;
      v30 = 0.0;
      v29 = 0.0;
      v28.m128_i32[0] = 0;
    }
    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v28.m128_f32[0]) & _xmm);
    if ( v32 < 8388608.0 )
      v28.m128_f32[0] = (float)(int)ceilf_0(v28.m128_f32[0]);
    LODWORD(v63) = v28.m128_i32[0];
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v29) & _xmm);
    if ( v33 < 8388608.0 )
      v29 = (float)(int)ceilf_0(v29);
    *((float *)&v63 + 1) = v29;
    v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v30) & _xmm);
    if ( v34 < 8388608.0 )
      v30 = (float)(int)floorf_0(v30);
    *((float *)&v63 + 2) = v30;
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31) & _xmm) < 8388608.0 )
      v31 = (float)(int)floorf_0(v31);
    *((float *)&v63 + 3) = v31;
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v63) )
    {
      LOBYTE(v35) = v7;
      v36 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::CalculateSubtractionRectangles(&v62, &v63, v35, v64);
      `vector constructor iterator'(
        (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)v65,
        0x10uLL,
        4,
        TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
      v37 = 0;
      if ( v36 )
      {
        v38 = (__int128 *)v64;
        v39 = v59;
        do
        {
          v63 = *v38;
          if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v63) )
          {
            v42 = *((float *)&v63 + 1);
            v43 = 0LL;
            v44 = *((float *)&v63 + 3);
            if ( *(_DWORD *)(a1 + 48) )
            {
              v45 = *(_QWORD *)(a1 + 24);
              do
              {
                if ( *(_DWORD *)(v45 + 20 * v43 + 16) >= v39 )
                  break;
                if ( *(float *)&v63 >= *(float *)(v45 + 20 * v43)
                  && *(float *)(v45 + 20 * v43 + 8) >= *((float *)&v63 + 2) )
                {
                  v54 = *(float *)(v45 + 20 * v43 + 4);
                  v55 = *(float *)(v45 + 20 * v43 + 12);
                  if ( v42 < v54 )
                  {
                    if ( v55 >= v44 && v44 > v54 )
                      v44 = *(float *)(v45 + 20 * v43 + 4);
                  }
                  else
                  {
                    if ( v55 >= v44 )
                      goto LABEL_59;
                    if ( v55 > v42 )
                      v42 = *(float *)(v45 + 20 * v43 + 12);
                  }
                }
                v43 = (unsigned int)(v43 + 1);
              }
              while ( (unsigned int)v43 < *(_DWORD *)(a1 + 48) );
            }
            v46 = v37++;
            v65[v46] = *v40;
          }
LABEL_59:
          v38 = v40 + 1;
        }
        while ( v41 != 1 );
      }
      v24 = (_OWORD **)v60;
      if ( v37 )
      {
        v47 = (_OWORD **)v60;
        v48 = v37;
        v49 = v65;
        do
        {
          v50 = *v47++;
          v51 = *v49++;
          *v50 = v51;
          --v48;
        }
        while ( v48 );
      }
      *a5 = 1;
      *a7 = v37;
      goto LABEL_16;
    }
  }
  v24 = (_OWORD **)v60;
LABEL_16:
  if ( !*a5 && v23 )
  {
    v53 = v62;
    *a5 = 1;
    *a7 = 1;
    **v24 = v53;
  }
  return 0LL;
}
