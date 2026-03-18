/*
 * XREFs of ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180159B08
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x180159ED4 (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 * Callees:
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     sqrt_0 @ 0x180099BEA (sqrt_0.c)
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x1801238A8 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 */

void __fastcall CGradientTextureGenerator::CalculateTextureMappingForLinearGradient(
        const struct CMilPoint2F *a1,
        char a2,
        struct CGradientSpanInfo *a3,
        struct CMILMatrix *a4)
{
  float v7; // xmm6_4
  float v8; // xmm7_4
  float v9; // xmm8_4
  float v10; // xmm10_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm9_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm3_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  __int64 v21; // [rsp+90h] [rbp+18h]

  if ( !a2 )
  {
    if ( *(_DWORD *)a3 > 1u )
    {
      v7 = *((float *)a1 + 2) - *(float *)a1;
      v8 = *((float *)a1 + 3) - *((float *)a1 + 1);
      v9 = *((float *)a3 + 2) - *((float *)a3 + 1);
      if ( *((float *)a3 + 3) >= 1.0 )
      {
        v19 = (float)(v8 * v8) + (float)(v7 * v7);
        if ( IsNaNOrIsEqualTo(v19, 0.0) )
          goto LABEL_6;
        v20 = v9 / v19;
        v16 = v20 * v7;
        v17 = v20 * v8;
        v18 = *((float *)a3 + 1) - (float)((float)((float)(v7 * *(float *)a1) + (float)(v8 * *((float *)a1 + 1))) * v20);
      }
      else
      {
        v21 = *(_QWORD *)a1;
        v10 = sqrt_0((float)((float)(v8 * v8) + (float)(v7 * v7)));
        if ( IsNaNOrIsEqualTo(v10, 0.0) )
        {
LABEL_6:
          *(_DWORD *)a3 = 1;
          goto LABEL_15;
        }
        v11 = *(float *)&v21;
        v12 = *((float *)&v21 + 1);
        v13 = v7 * (float)(1.0 / v10);
        v14 = v8 * (float)(1.0 / v10);
        if ( v9 <= 0.0 )
        {
          v9 = FLOAT_1_0;
        }
        else
        {
          v15 = (float)(1.0 - *((float *)a3 + 3)) * 0.5;
          v11 = *(float *)&v21 - (float)(v13 * v15);
          v12 = *((float *)&v21 + 1) - (float)(v14 * v15);
        }
        v16 = v13 * v9;
        v17 = v14 * v9;
        v18 = *((float *)a3 + 1) - (float)((float)((float)(v12 * v14) + (float)(v11 * v13)) * v9);
      }
      *((_DWORD *)a4 + 14) = 0;
      *((_DWORD *)a4 + 13) = 0;
      *((_DWORD *)a4 + 11) = 0;
      *((_DWORD *)a4 + 9) = 0;
      *((_DWORD *)a4 + 8) = 0;
      *((_DWORD *)a4 + 7) = 0;
      *((_DWORD *)a4 + 6) = 0;
      *((_DWORD *)a4 + 3) = 0;
      *((_DWORD *)a4 + 2) = 0;
      *((_DWORD *)a4 + 1) = 0;
      *((_DWORD *)a4 + 5) = 0;
      *(float *)a4 = v16;
      *((float *)a4 + 4) = v17;
      *((float *)a4 + 12) = v18;
      *((_DWORD *)a4 + 15) = 1065353216;
      *((_DWORD *)a4 + 10) = 1065353216;
    }
    if ( *(_DWORD *)a3 != 1 )
      return;
    goto LABEL_15;
  }
  *(_DWORD *)a3 = 1;
LABEL_15:
  memset_0(a4, 0, 0x40uLL);
  *((_DWORD *)a4 + 15) = 1065353216;
}
