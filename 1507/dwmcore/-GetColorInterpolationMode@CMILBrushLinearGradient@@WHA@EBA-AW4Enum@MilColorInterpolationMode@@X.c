/*
 * XREFs of ?GetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EBA?AW4Enum@MilColorInterpolationMode@@XZ @ 0x18009A210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILBrushLinearGradient::GetColorInterpolationMode(__int64 a1)
{
  return CD2DBitmap::GetAlphaMode((CD2DBitmap *)(a1 - 112));
}
