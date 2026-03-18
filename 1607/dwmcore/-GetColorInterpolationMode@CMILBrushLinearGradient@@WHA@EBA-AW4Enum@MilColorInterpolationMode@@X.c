/*
 * XREFs of ?GetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EBA?AW4Enum@MilColorInterpolationMode@@XZ @ 0x1800BFCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

enum D2D1_ALPHA_MODE __fastcall CMILBrushLinearGradient::GetColorInterpolationMode(__int64 a1)
{
  return CD2DBitmap::GetAlphaMode((CD2DBitmap *)(a1 - 112));
}
