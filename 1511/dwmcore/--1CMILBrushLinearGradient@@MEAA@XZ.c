/*
 * XREFs of ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x180014C34
 * Callers:
 *     ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180013C30 (--1CLinearGradientLegacyMilBrush@@MEAA@XZ.c)
 *     ??_G?$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z @ 0x18015A320 (--_G-$LocalMILObject@VCMILBrushLinearGradient@@@@UEAAPEAXI@Z.c)
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
