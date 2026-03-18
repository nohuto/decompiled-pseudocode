/*
 * XREFs of ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x1800178A0
 * Callers:
 *     ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x180017530 (--_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x1800177F0 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x180017F70 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CLinearGradientLegacyMilBrush::`vftable';
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
  this[62] = (struct CResource *)&CMILBrushSolid::`vftable'{for `CMILBrush'};
  this[66] = (struct CResource *)&CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  this[59] = (struct CResource *)&CMILCOMBase::`vftable';
  CMILBrushLinearGradient::~CMILBrushLinearGradient((CMILBrushLinearGradient *)(this + 29));
  CLegacyMilBrush::~CLegacyMilBrush((CLegacyMilBrush *)this);
}
