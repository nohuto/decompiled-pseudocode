/*
 * XREFs of ?SetWrapMode@CMILBrushLinearGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1800F3600
 * Callers:
 *     ?SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1800BD040 (-SetWrapMode@CMILBrushLinearGradient@@WHA@EAAJW4Enum@MilGradientWrapMode@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CMILBrushLinearGradient::SetWrapMode(__int64 a1, unsigned int a2)
{
  return CMILBrushGradient::SetWrapMode(a1, a2);
}
