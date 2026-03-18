/*
 * XREFs of ?GetAlphaMode@CD2DBitmap@@UEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x1800C00A0
 * Callers:
 *     ?GetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EBA?AW4Enum@MilColorInterpolationMode@@XZ @ 0x1800BFCC0 (-GetColorInterpolationMode@CMILBrushLinearGradient@@WHA@EBA-AW4Enum@MilColorInterpolationMode@@X.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::GetAlphaMode(CD2DBitmap *this)
{
  return *((unsigned int *)this + 27);
}
