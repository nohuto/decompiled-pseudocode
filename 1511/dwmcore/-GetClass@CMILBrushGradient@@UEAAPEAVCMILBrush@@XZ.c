/*
 * XREFs of ?GetClass@CMILBrushGradient@@UEAAPEAVCMILBrush@@XZ @ 0x18015A500
 * Callers:
 *     ?GetClass@CMILBrushLinearGradient@@UEAAPEAVCMILBrush@@XZ @ 0x180113660 (-GetClass@CMILBrushLinearGradient@@UEAAPEAVCMILBrush@@XZ.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CMILBrushGradient::GetClass(CMILBrushGradient *this)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( this != (CMILBrushGradient *)120 )
    return (CMILBrushGradient *)((char *)this - 96);
  return (struct CMILBrush *)v1;
}
