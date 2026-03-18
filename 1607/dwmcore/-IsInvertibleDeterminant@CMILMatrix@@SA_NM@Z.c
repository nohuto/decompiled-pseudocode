/*
 * XREFs of ?IsInvertibleDeterminant@CMILMatrix@@SA_NM@Z @ 0x180162380
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180055530 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180110A70 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18015015C (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CMILMatrix::IsInvertibleDeterminant(float a1)
{
  float v1; // xmm2_4

  v1 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a1 - 0.0)) & _xmm);
  return v1 >= 0.00000011920929 && _finite((float)(1.0 / a1)) != 0;
}
