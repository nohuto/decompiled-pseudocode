/*
 * XREFs of ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x18014BB18
 * Callers:
 *     ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x1800F8D30 (--_G-$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z.c)
 *     ??1CLinearGradientBrush@@MEAA@XZ @ 0x18011FFAC (--1CLinearGradientBrush@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILBrushLinearGradient::~CMILBrushLinearGradient(CMILBrushLinearGradient *this)
{
  *(_QWORD *)this = &CMILBrushLinearGradient::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 3) = &CMILBrushLinearGradient::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 7) = &CMILBrushLinearGradient::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 15) = &CMILBrushLinearGradient::`vftable'{for `IMILBrushGradient'};
  *((_QWORD *)this + 29) = &CMILBrushLinearGradient::`vftable';
  CMILBrushGradient::~CMILBrushGradient(this);
}
