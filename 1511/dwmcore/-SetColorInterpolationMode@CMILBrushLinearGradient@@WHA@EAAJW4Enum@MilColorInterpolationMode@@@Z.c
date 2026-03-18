/*
 * XREFs of ?SetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilColorInterpolationMode@@@Z @ 0x1800BCFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::SetColorInterpolationMode(__int64 a1, int a2)
{
  return CMILBrushGradient::SetColorInterpolationMode(a1 - 112, a2);
}
