/*
 * XREFs of ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180077160
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180031CC8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x1800324C8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x180089D00 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x18008C200 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BC85A (ceilf_0.c)
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 */

__int64 __fastcall CHwBitmapColorSource::ComputeMinimumRealizationBounds(int *a1, _DWORD *a2, int *a3)
{
  float v4; // xmm6_4
  float *v7; // rax
  float v8; // xmm8_4
  float v9; // xmm14_4
  float v10; // xmm13_4
  float v11; // xmm7_4
  float v12; // xmm15_4
  float v13; // xmm1_4
  float v14; // xmm9_4
  float *v15; // rax
  int v16; // xmm2_4
  unsigned int v17; // xmm1_4
  int v18; // ecx
  float v19; // xmm5_4
  float v20; // xmm10_4
  int v21; // xmm0_4
  float v22; // xmm8_4
  float v23; // xmm7_4
  float v24; // xmm4_4
  int v25; // xmm0_4
  int v26; // edx
  float v27; // xmm1_4
  float *v28; // rcx
  float v29; // xmm2_4
  float v30; // xmm0_4
  unsigned __int8 v31; // si
  int v32; // ecx
  int v33; // r14d
  int v34; // r15d
  float v35; // xmm2_4
  float v36; // xmm10_4
  int v37; // ecx
  float v38; // xmm7_4
  float v39; // xmm11_4
  float v40; // xmm2_4
  int v41; // ebx
  int v42; // ebp
  float v43; // xmm0_4
  int v44; // ecx
  float v45; // xmm7_4
  int v46; // ebp
  float v47; // xmm6_4
  __int64 result; // rax
  float v49; // xmm1_4
  float v50; // xmm1_4
  float v51; // [rsp+20h] [rbp-F8h]
  __int128 v52; // [rsp+28h] [rbp-F0h] BYREF
  int v53; // [rsp+38h] [rbp-E0h]
  int v54; // [rsp+3Ch] [rbp-DCh]
  unsigned int v55; // [rsp+40h] [rbp-D8h]
  int v56; // [rsp+44h] [rbp-D4h]

  v4 = FLOAT_1_0;
  if ( !*((_BYTE *)a1 + 24) )
  {
    v7 = (float *)*((_QWORD *)a1 + 2);
    v8 = v7[1];
    v9 = *v7;
    v10 = v7[5];
    v11 = v7[4];
    v12 = v7[13];
    v51 = v7[12];
    v13 = (float)(*v7 * v10) - (float)(v8 * v11);
    if ( v13 != 0.0 )
    {
      v14 = 1.0 / v13;
      if ( _finite((float)(1.0 / v13)) )
      {
        v15 = (float *)&v52;
        v16 = *a1;
        v17 = a1[2];
        v18 = 4;
        LODWORD(v19) = COERCE_UNSIGNED_INT(v14 * v8) ^ _xmm;
        LODWORD(v20) = COERCE_UNSIGNED_INT(v14 * v11) ^ _xmm;
        DWORD1(v52) = a1[1];
        v21 = a1[3];
        LODWORD(v52) = v16;
        *((_QWORD *)&v52 + 1) = __PAIR64__(DWORD1(v52), v17);
        v53 = v16;
        v54 = v21;
        v22 = (float)((float)(v8 * v51) - (float)(v9 * v12)) * v14;
        v55 = v17;
        v56 = v21;
        v23 = (float)((float)(v11 * v12) - (float)(v10 * v51)) * v14;
        do
        {
          v24 = *v15;
          *v15 = (float)((float)(v20 * v15[1]) + (float)((float)(v14 * v10) * *v15)) + v23;
          v15[1] = (float)((float)((float)(v14 * v9) * v15[1]) + (float)(v19 * v24)) + v22;
          v15 += 2;
          --v18;
        }
        while ( v18 );
        v25 = v52;
        v26 = 1;
        v27 = *((float *)&v52 + 1);
        v28 = (float *)&v52 + 3;
        a1[7] = v52;
        *((float *)a1 + 8) = v27;
        a1[9] = v25;
        *((float *)a1 + 10) = v27;
        do
        {
          v29 = *(v28 - 1);
          if ( *((float *)a1 + 7) > v29 )
          {
            *((float *)a1 + 7) = v29;
          }
          else if ( v29 > *((float *)a1 + 9) )
          {
            *((float *)a1 + 9) = v29;
          }
          v30 = *v28;
          if ( v27 > *v28 )
          {
            v27 = *v28;
          }
          else if ( v30 > *((float *)a1 + 10) )
          {
            *((float *)a1 + 10) = v30;
          }
          ++v26;
          v28 += 2;
        }
        while ( (unsigned __int64)v26 < 4 );
        *((float *)a1 + 8) = v27;
        *((_BYTE *)a1 + 24) = 1;
      }
    }
  }
  v31 = *((_BYTE *)a1 + 24);
  if ( !v31 )
    return 0LL;
  v32 = a2[1];
  v33 = a3[2];
  v34 = a3[3];
  v52 = *(_OWORD *)(a1 + 7);
  v35 = *(float *)&v52;
  v36 = *((float *)&v52 + 2);
  if ( v33 != v32 )
  {
    v49 = (float)v33 / (float)v32;
    v35 = *(float *)&v52 * v49;
    v36 = *((float *)&v52 + 2) * v49;
  }
  v37 = a2[2];
  v38 = *((float *)&v52 + 1);
  v39 = *((float *)&v52 + 3);
  if ( v34 != v37 )
  {
    v50 = (float)v34 / (float)v37;
    v38 = *((float *)&v52 + 1) * v50;
    v39 = *((float *)&v52 + 3) * v50;
  }
  if ( *a2 )
    v4 = FLOAT_1_5;
  v40 = v35 - v4;
  v41 = 0x7FFFFFFF;
  if ( v40 < -2147483600.0 )
  {
    v42 = 0x80000000;
  }
  else if ( v40 >= 2147483600.0 )
  {
    v42 = 0x7FFFFFFF;
  }
  else
  {
    v42 = (int)ceilf_0(v40);
  }
  v43 = v4 + v36;
  if ( (float)(v4 + v36) < -2147483600.0 )
  {
    v44 = 0x80000000;
  }
  else if ( v43 >= 2147483600.0 )
  {
    v44 = 0x7FFFFFFF;
  }
  else
  {
    v44 = (int)floorf_0(v43);
  }
  if ( v42 < v44 )
  {
    if ( a2[3] )
    {
      if ( v42 < 0 || v44 > v33 )
        goto LABEL_32;
      *a3 = v42;
    }
    else
    {
      if ( v42 > 0 )
      {
        if ( v42 >= v33 )
          *a3 = v33 - 1;
        else
          *a3 = v42;
      }
      if ( v44 >= v33 )
        goto LABEL_32;
      if ( v44 <= 0 )
      {
        a3[2] = 1;
        goto LABEL_32;
      }
    }
    a3[2] = v44;
  }
LABEL_32:
  v45 = v38 - v4;
  if ( v45 < -2147483600.0 )
  {
    v46 = 0x80000000;
  }
  else if ( v45 >= 2147483600.0 )
  {
    v46 = 0x7FFFFFFF;
  }
  else
  {
    v46 = (int)ceilf_0(v45);
  }
  v47 = v4 + v39;
  if ( v47 < -2147483600.0 )
  {
    v41 = 0x80000000;
  }
  else if ( v47 < 2147483600.0 )
  {
    v41 = (int)floorf_0(v47);
  }
  if ( v46 >= v41 )
    return v31;
  if ( !a2[3] )
  {
    if ( v46 > 0 )
    {
      if ( v46 >= v34 )
        a3[1] = v34 - 1;
      else
        a3[1] = v46;
    }
    if ( v41 >= v34 )
      return v31;
    result = v31;
    if ( v41 <= 0 )
    {
      a3[3] = 1;
      return result;
    }
LABEL_51:
    a3[3] = v41;
    return result;
  }
  if ( v46 < 0 )
    return v31;
  result = v31;
  if ( v41 <= v34 )
  {
    a3[1] = v46;
    goto LABEL_51;
  }
  return result;
}
