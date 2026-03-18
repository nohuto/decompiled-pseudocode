/*
 * XREFs of ?ComputeMinimumRealizationBounds@CHwBitmapColorSource@@CA_NAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@AEBUInternalRealizationParameters@1@PEAV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013D470
 * Callers:
 *     ?ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapWrapMode@@HMHAEAURealizationParameters@1@@Z @ 0x1800199B8 (-ComputeRealizationSize@CHwBitmapColorSource@@CAJIIAEBV-$CDelayComputedBounds@URealizationSampli.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x18001CA7C (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@W4Enum@MilBitmapInterpolationMode@@W43MilBitmapWrapMode@@W43RequiredBoundsCheck@1@@Z @ 0x18001D3B8 (-CheckRequiredRealizationBounds@CHwBitmapColorSource@@QEAA_NAEAV-$CDelayComputedBounds@URealizat.c)
 * Callees:
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180040290 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?GetBounds@?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV?$CRectF@URealizationSampling@CoordinateSpace@@@@@Z @ 0x1800E0B70 (-GetBounds@-$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@QEBA_NAEAV-$CRectF@URe.c)
 *     ?FloorSat@CFloatFPU@@SAHM@Z @ 0x180122C48 (-FloorSat@CFloatFPU@@SAHM@Z.c)
 */

char __fastcall CHwBitmapColorSource::ComputeMinimumRealizationBounds(struct MilRectF *a1, _DWORD *a2, int *a3)
{
  char Bounds; // r12
  int v6; // edi
  int v7; // esi
  float v8; // xmm2_4
  float v9; // xmm7_4
  float v10; // xmm1_4
  float v11; // xmm8_4
  float v12; // xmm9_4
  float v13; // xmm1_4
  float v14; // xmm6_4
  int v15; // ebp
  int v16; // eax
  int v17; // ecx
  int v18; // r15d
  int v19; // edi
  int v20; // eax
  __int128 v22; // [rsp+20h] [rbp-88h] BYREF

  Bounds = CDelayComputedBounds<CoordinateSpace::RealizationSampling>::GetBounds(a1, &v22);
  if ( !Bounds )
    return Bounds;
  v6 = a3[2];
  v7 = a3[3];
  v8 = *(float *)&v22;
  v9 = *((float *)&v22 + 2);
  if ( v6 != a2[1] )
  {
    v10 = (float)v6 / (float)(int)a2[1];
    v8 = *(float *)&v22 * v10;
    v9 = *((float *)&v22 + 2) * v10;
  }
  v11 = *((float *)&v22 + 1);
  v12 = *((float *)&v22 + 3);
  if ( v7 != a2[2] )
  {
    v13 = (float)v7 / (float)(int)a2[2];
    v11 = *((float *)&v22 + 1) * v13;
    v12 = *((float *)&v22 + 3) * v13;
  }
  if ( *a2 )
    v14 = FLOAT_1_5;
  else
    v14 = FLOAT_1_0;
  v15 = CFloatFPU::CeilingSat(v8 - v14);
  v16 = CFloatFPU::FloorSat(v14 + v9);
  v17 = v16;
  v18 = 1;
  if ( v15 < v16 )
  {
    if ( !a2[3] )
    {
      if ( v15 > 0 )
      {
        if ( v15 >= v6 )
          *a3 = v6 - 1;
        else
          *a3 = v15;
      }
      if ( v16 >= v6 )
        goto LABEL_23;
      v16 = 1;
      if ( v17 > 0 )
        v16 = v17;
      goto LABEL_22;
    }
    if ( v15 >= 0 && v16 <= v6 )
    {
      *a3 = v15;
LABEL_22:
      a3[2] = v16;
    }
  }
LABEL_23:
  v19 = CFloatFPU::CeilingSat(v11 - v14);
  v20 = CFloatFPU::FloorSat(v14 + v12);
  if ( v19 < v20 )
  {
    if ( a2[3] )
    {
      if ( v19 >= 0 && v20 <= v7 )
      {
        a3[1] = v19;
        a3[3] = v20;
      }
    }
    else
    {
      if ( v19 > 0 )
      {
        if ( v19 >= v7 )
          a3[1] = v7 - 1;
        else
          a3[1] = v19;
      }
      if ( v20 < v7 )
      {
        if ( v20 > 0 )
          v18 = v20;
        a3[3] = v18;
      }
    }
  }
  return Bounds;
}
