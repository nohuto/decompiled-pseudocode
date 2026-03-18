/*
 * XREFs of ?SetEndPoints@CMILBrushGradient@@UEAAXPEBUMilPoint2F@@00@Z @ 0x18009A3B0
 * Callers:
 *     ?SetEndPoints@CMILBrushLinearGradient@@WHA@EAAXPEBUMilPoint2F@@00@Z @ 0x18009A3D0 (-SetEndPoints@CMILBrushLinearGradient@@WHA@EAAXPEBUMilPoint2F@@00@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushGradient::SetEndPoints(
        CMILBrushGradient *this,
        const struct MilPoint2F *a2,
        const struct MilPoint2F *a3,
        const struct MilPoint2F *a4)
{
  *(_QWORD *)((char *)this + 12) = *(_QWORD *)a2;
  *(_QWORD *)((char *)this + 20) = *(_QWORD *)a3;
  *(_QWORD *)((char *)this + 28) = *(_QWORD *)a4;
}
