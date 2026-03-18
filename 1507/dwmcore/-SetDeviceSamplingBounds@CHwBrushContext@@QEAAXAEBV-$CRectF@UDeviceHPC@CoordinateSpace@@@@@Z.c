/*
 * XREFs of ?SetDeviceSamplingBounds@CHwBrushContext@@QEAAXAEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18009B0FC
 * Callers:
 *     ?SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800833D8 (-SetDeviceRenderingAndSamplingBounds@CHwBrushContext@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwBrushContext::SetDeviceSamplingBounds(float *a1, float *a2)
{
  a1[12] = *a2 + 0.5;
  a1[13] = a2[1] + 0.5;
  a1[14] = a2[2] - 0.5;
  a1[15] = a2[3] - 0.5;
}
