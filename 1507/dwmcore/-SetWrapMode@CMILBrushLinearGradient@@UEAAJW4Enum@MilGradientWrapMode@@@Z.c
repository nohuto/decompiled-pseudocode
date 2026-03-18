/*
 * XREFs of ?SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1800F9E60
 * Callers:
 *     ?SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z @ 0x18009A3E0 (-SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILBrushLinearGradient::SetWrapMode(__int64 a1)
{
  return CMILBrushGradient::SetWrapMode(a1);
}
