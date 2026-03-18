/*
 * XREFs of ?CalculateTextureSize@CGradientTextureGenerator@@CAXPEBVCMilPoint2F@@_NW4Enum@MilGradientWrapMode@@PEAVCGradientSpanInfo@@@Z @ 0x180018568
 * Callers:
 *     ?CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@UDeviceHPC@2@@@W4Enum@MilGradientWrapMode@@HPEAVCGradientSpanInfo@@PEAVCMILMatrix@@@Z @ 0x18001835C (-CalculateTextureSizeAndMapping@CGradientTextureGenerator@@SAJPEBUMilPoint2F@@00PEBV-$CMatrix@UB.c)
 * Callees:
 *     ?RoundToPow2@@YAII@Z @ 0x1800186B4 (-RoundToPow2@@YAII@Z.c)
 *     floorf_0 @ 0x1800BF60E (floorf_0.c)
 *     sqrtf_0 @ 0x1800BF6B6 (sqrtf_0.c)
 */

unsigned __int64 __fastcall CGradientTextureGenerator::CalculateTextureSize(_QWORD *a1, char a2, int a3, __int64 a4)
{
  unsigned __int64 result; // rax
  char v5; // di
  char v6; // bp
  float v7; // xmm8_4
  float v8; // xmm0_4
  float v9; // xmm6_4
  unsigned int v12; // r10d
  float v13; // xmm0_4
  float v14; // xmm7_4
  int v15; // ecx
  unsigned int v16; // ecx
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v5 = 0;
  v6 = 0;
  v7 = 0.0;
  v8 = 0.0;
  v9 = 0.0;
  v12 = 1;
  if ( !a2 )
  {
    v13 = sqrtf_0(
            (float)((float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(a1[1])) * (float)(COERCE_FLOAT(*a1) - COERCE_FLOAT(a1[1])))
          + (float)((float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(a1[1])))
                  * (float)(COERCE_FLOAT(HIDWORD(*a1)) - COERCE_FLOAT(HIDWORD(a1[1])))));
    if ( a3 == 1 )
      v13 = v13 * 2.0;
    v9 = FLOAT_1024_0;
    if ( v13 <= 1024.0 )
      v9 = fmaxf(v13, 0.0);
    if ( a3 )
    {
      v14 = FLOAT_1_0;
      v16 = (int)floorf_0(v9);
      if ( v16 <= 1 )
        v16 = 1;
      if ( v9 <= 1.0 )
        v9 = FLOAT_1_0;
    }
    else
    {
      v14 = FLOAT_1_0;
      if ( v9 < 1.0 )
        v15 = v9 >= 0.00390625;
      else
        v15 = (int)floorf_0(v9);
      v5 = 1;
      v6 = 1;
      v16 = v15 + 2;
    }
    v12 = 1024;
    if ( v16 < 0x400 )
      v12 = RoundToPow2(v16);
    result = v12;
    if ( v5 )
      result = v12 - 1;
    if ( v6 )
      result = (unsigned int)(result - 1);
    v8 = (float)(int)result;
    if ( v5 )
    {
      v7 = v14;
      v8 = v8 + v14;
    }
    else if ( a3 == 1 && v12 > 1 )
    {
      v8 = v8 * 0.5;
    }
  }
  *(float *)(a4 + 4) = v7;
  *(float *)(a4 + 12) = v9;
  *(float *)(a4 + 8) = v8;
  *(_DWORD *)a4 = v12;
  return result;
}
