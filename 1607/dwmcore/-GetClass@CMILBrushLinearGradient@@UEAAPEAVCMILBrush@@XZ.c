/*
 * XREFs of ?GetClass@CMILBrushLinearGradient@@UEAAPEAVCMILBrush@@XZ @ 0x18012BAF0
 * Callers:
 *     ?GetClass@CMILBrushLinearGradient@@WHA@EAAPEAVCMILBrush@@XZ @ 0x1800BFCB0 (-GetClass@CMILBrushLinearGradient@@WHA@EAAPEAVCMILBrush@@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
struct CMILBrush *__fastcall CMILBrushLinearGradient::GetClass(CMILBrushLinearGradient *this)
{
  return CMILBrushGradient::GetClass(this);
}
