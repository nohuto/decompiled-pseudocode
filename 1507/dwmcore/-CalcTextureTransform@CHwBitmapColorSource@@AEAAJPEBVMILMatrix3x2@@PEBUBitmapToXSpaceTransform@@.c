/*
 * XREFs of ?CalcTextureTransform@CHwBitmapColorSource@@AEAAJPEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@@Z @ 0x18001CE50
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x18001CA7C (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1800411B0 (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwBitmapColorSource::CalcTextureTransform(
        CHwBitmapColorSource *this,
        const struct MILMatrix3x2 *a2,
        const struct BitmapToXSpaceTransform *a3)
{
  int v4; // ecx
  int v6; // edx
  float v7; // xmm6_4
  float v8; // xmm5_4
  float v9; // xmm8_4
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm9_4
  float v13; // xmm13_4
  float v14; // xmm10_4
  float v15; // xmm14_4
  float v16; // xmm7_4
  float v17; // xmm15_4
  float v18; // xmm12_4
  float v19; // xmm13_4
  float v20; // xmm10_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  float v23; // xmm2_4
  float v24; // xmm3_4
  __int64 result; // rax

  v4 = *((_DWORD *)this + 54);
  v6 = *((_DWORD *)this + 55);
  if ( (unsigned int)(*((_DWORD *)this + 80) - 1) <= 1 )
    v4 = *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
  if ( (unsigned int)(*((_DWORD *)this + 81) - 1) <= 1 )
    v6 = *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
  v7 = (float)*((int *)this + 30);
  v8 = (float)*((int *)this + 31);
  v9 = (float)*((int *)this + 34) / (float)*((int *)this + 36);
  v10 = v9 * *(float *)a3;
  v11 = v9 * *((float *)a3 + 1);
  v12 = (float)*((int *)this + 35) / (float)*((int *)this + 37);
  v13 = v12 * *((float *)a3 + 4);
  v14 = v12 * *((float *)a3 + 5);
  v15 = (float)(v10 * (float)v4) + (float)(v13 * 0.0);
  v16 = (float)(v11 * (float)v4) + (float)(v14 * 0.0);
  v17 = (float)(v13 * (float)v6) + (float)(v10 * 0.0);
  v18 = (float)(v14 * (float)v6) + (float)(v11 * 0.0);
  v19 = (float)((float)(v13 * v8) + (float)(v10 * v7)) + *((float *)a3 + 12);
  v20 = (float)((float)(v14 * v8) + (float)(v11 * v7)) + *((float *)a3 + 13);
  v21 = (float)(v15 * v18) - (float)(v16 * v17);
  if ( v21 == 0.0 || (v22 = 1.0 / v21, !_finite((float)(1.0 / v21))) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x81Eu);
    return 2291662855LL;
  }
  else
  {
    *((_DWORD *)this + 12) = COERCE_UNSIGNED_INT(v22 * v16) ^ _xmm;
    *((float *)this + 11) = v22 * v18;
    *((_DWORD *)this + 13) = COERCE_UNSIGNED_INT(v22 * v17) ^ _xmm;
    *((float *)this + 14) = v22 * v15;
    *((float *)this + 15) = (float)((float)(v20 * v17) - (float)(v18 * v19)) * v22;
    *((float *)this + 16) = (float)((float)(v16 * v19) - (float)(v20 * v15)) * v22;
    v23 = (float)*((int *)this + 30);
    v24 = (float)*((int *)this + 31);
    result = 0LL;
    *((float *)this + 17) = (float)(v9 * *(float *)a2) + (float)(*((float *)a2 + 2) * 0.0);
    *((float *)this + 18) = (float)(v9 * *((float *)a2 + 1)) + (float)(*((float *)a2 + 3) * 0.0);
    *((float *)this + 19) = (float)(v12 * *((float *)a2 + 2)) + (float)(*(float *)a2 * 0.0);
    *((float *)this + 20) = (float)(v12 * *((float *)a2 + 3)) + (float)(*((float *)a2 + 1) * 0.0);
    *((float *)this + 21) = (float)((float)(v23 * *(float *)a2) + (float)(v24 * *((float *)a2 + 2)))
                          + *((float *)a2 + 4);
    *((float *)this + 22) = (float)((float)(v24 * *((float *)a2 + 3)) + (float)(v23 * *((float *)a2 + 1)))
                          + *((float *)a2 + 5);
  }
  return result;
}
