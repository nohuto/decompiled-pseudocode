/*
 * XREFs of ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18013A524
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037D60 (-PreSubgraph@CDrawingContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x180059984 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z @ 0x1800674F4 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseMatrix::IsInvertableDeterminant(float a1)
{
  return a1 != 0.0 && _finite((float)(1.0 / a1)) != 0;
}
