/*
 * XREFs of ?InferAffineMatrix@CBaseMatrix@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180047700
 * Callers:
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180010810 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180019C90 (-CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@W4Enum@MilCompositingMode@@PEA_N@Z @ 0x180042618 (-DrawBitmapSourceWithPartialOcclusion@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBUMilRectF@@1HU.c)
 *     ?CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BD68 (-CalculateMonitorTransform@CHwndRenderTarget@@AEAAXPEAU-$TMILFlagsEnum@W4FlagsEnum@MilRTInitiali.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180115610 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  __int64 result; // rax
  double v4; // xmm3_8
  float v5; // xmm0_4
  float v6; // xmm0_4
  double v7; // xmm3_8
  float v8; // xmm0_4

  *(_QWORD *)(a1 + 52) = 0LL;
  *(_QWORD *)(a1 + 44) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 4) = 0LL;
  result = 1065353216LL;
  *(_DWORD *)(a1 + 20) = 1065353216;
  *(_DWORD *)a1 = 1065353216;
  *(_DWORD *)(a1 + 60) = 1065353216;
  *(_DWORD *)(a1 + 40) = 1065353216;
  v4 = (a3[2] - *a3) / (a2[2] - *a2);
  v5 = v4;
  *(float *)a1 = v5;
  v6 = *a3 - *a2 * v4;
  *(float *)(a1 + 48) = v6;
  v7 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v8 = v7;
  *(float *)(a1 + 20) = v8;
  *(float *)(a1 + 52) = a3[1] - a2[1] * v7;
  return result;
}
