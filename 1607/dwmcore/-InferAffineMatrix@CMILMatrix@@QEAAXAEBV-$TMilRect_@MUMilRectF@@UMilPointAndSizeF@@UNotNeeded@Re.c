/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18005B2EC
 * Callers:
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180012C50 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180013220 (-CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x18006ADCC (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@1PEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x180073DA8 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXW4DXGI_MODE_ROTATION@@AEBV-$TMilRect_@HUtagRE.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18012E640 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  double v3; // xmm3_8
  float v4; // xmm4_4
  float v5; // xmm0_4
  double v6; // xmm3_8
  float v7; // xmm5_4
  float v8; // xmm1_4
  double v9; // xmm0_8
  float v10; // xmm1_4
  float v11; // xmm1_4
  char result; // al

  *(_BYTE *)(a1 + 65) = 125;
  *(_OWORD *)a1 = _xmm;
  *(_OWORD *)(a1 + 16) = _xmm;
  *(_OWORD *)(a1 + 32) = _xmm;
  *(_OWORD *)(a1 + 48) = _xmm;
  *(_BYTE *)(a1 + 64) = 85;
  v3 = (a3[2] - *a3) / (a2[2] - *a2);
  v4 = v3;
  *(float *)a1 = v4;
  v5 = *a3 - *a2 * v3;
  *(float *)(a1 + 48) = v5;
  v6 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v7 = v6;
  *(float *)(a1 + 20) = v7;
  v8 = a3[1];
  v9 = a2[1];
  *(_BYTE *)(a1 + 64) = 84;
  *(_BYTE *)(a1 + 65) = 125;
  *(float *)&v9 = v8 - v9 * v6;
  *(_DWORD *)(a1 + 52) = LODWORD(v9);
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v4 - 1.0)) & _xmm);
  if ( v10 >= 0.00012207031
    || (v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - 1.0)) & _xmm), v11 >= 0.00012207031) )
  {
    result = 124;
  }
  else
  {
    result = 84;
  }
  *(_BYTE *)(a1 + 64) = result;
  return result;
}
