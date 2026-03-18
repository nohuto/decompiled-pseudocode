/*
 * XREFs of ?IsInvertableDeterminant@CBaseMatrix@@SA_NM@Z @ 0x18000E600
 * Callers:
 *     ?CalcMode@CCpuClippingData@@CA?AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z @ 0x180017A14 (-CalcMode@CCpuClippingData@@CA-AW4Enum@CpuClippingMode@@PEAVCVisual@@W423@@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x1800F3BC0 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBaseMatrix::IsInvertableDeterminant(float a1)
{
  return a1 != 0.0 && _finite((float)(1.0 / a1)) != 0;
}
