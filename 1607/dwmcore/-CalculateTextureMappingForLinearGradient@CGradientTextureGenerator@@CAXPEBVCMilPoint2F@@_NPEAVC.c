/*
 * XREFs of ?CalculateTextureMappingForLinearGradient@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001821C
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001835C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 * Callees:
 *     ?IsNaNOrIsEqualTo@@YA_NMM@Z @ 0x180018538 (-IsNaNOrIsEqualTo@@YA_NMM@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18005BB80 (-Set2DAffineMatrix@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 *     ?SetToZeroMatrix@CMILMatrix@@QEAAXXZ @ 0x1800BF6F4 (-SetToZeroMatrix@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CGradientTextureGenerator::CalculateTextureMappingForLinearGradient(
        const struct CMilPoint2F *a1,
        char a2,
        struct CGradientSpanInfo *a3,
        struct CMILMatrix *a4)
{
  float v7; // xmm7_4
  float v8; // xmm6_4
  float v9; // xmm8_4
  float v10; // xmm9_4
  float v11; // xmm8_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm11_4
  float v16; // xmm3_4
  float v17; // xmm2_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm9_4
  __int64 v21; // [rsp+C0h] [rbp+18h]

  if ( a2 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_10;
  }
  if ( *(_DWORD *)a3 > 1u )
  {
    v7 = *((float *)a1 + 2) - *(float *)a1;
    v8 = *((float *)a1 + 3) - *((float *)a1 + 1);
    v9 = *((float *)a3 + 2) - *((float *)a3 + 1);
    if ( *((float *)a3 + 3) < 1.0 )
    {
      v21 = *(_QWORD *)a1;
      v15 = sqrtf_0((float)(v8 * v8) + (float)(v7 * v7));
      if ( !IsNaNOrIsEqualTo(v15, 0.0) )
      {
        v16 = *(float *)&v21;
        v17 = *((float *)&v21 + 1);
        v18 = v7 * (float)(1.0 / v15);
        v19 = v8 * (float)(1.0 / v15);
        if ( v9 <= 0.0 )
        {
          v9 = FLOAT_1_0;
        }
        else
        {
          v20 = (float)(1.0 - *((float *)a3 + 3)) * 0.5;
          v16 = *(float *)&v21 - (float)(v18 * v20);
          v17 = *((float *)&v21 + 1) - (float)(v19 * v20);
        }
        v13 = v18 * v9;
        v12 = v19 * v9;
        v14 = *((float *)a3 + 1) - (float)((float)((float)(v17 * v19) + (float)(v16 * v18)) * v9);
        goto LABEL_6;
      }
    }
    else
    {
      v10 = (float)(v8 * v8) + (float)(v7 * v7);
      if ( !IsNaNOrIsEqualTo(v10, 0.0) )
      {
        v11 = v9 / v10;
        v12 = v11 * v8;
        v13 = v11 * v7;
        v14 = *((float *)a3 + 1) - (float)((float)((float)(v8 * *((float *)a1 + 1)) + (float)(v7 * *(float *)a1)) * v11);
LABEL_6:
        CMILMatrix::Set2DAffineMatrix(a4, v13, 0.0, v12, 0.0, v14, 0.0);
        goto LABEL_7;
      }
    }
    *(_DWORD *)a3 = 1;
    goto LABEL_10;
  }
LABEL_7:
  if ( *(_DWORD *)a3 == 1 )
LABEL_10:
    CMILMatrix::SetToZeroMatrix(a4);
}
