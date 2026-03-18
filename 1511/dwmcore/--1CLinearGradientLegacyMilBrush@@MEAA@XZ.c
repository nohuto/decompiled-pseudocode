/*
 * XREFs of ??1CLinearGradientLegacyMilBrush@@MEAA@XZ @ 0x180013C30
 * Callers:
 *     ??_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z @ 0x180013780 (--_GCLinearGradientLegacyMilBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x180013B70 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x180014C34 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CLinearGradientLegacyMilBrush::~CLinearGradientLegacyMilBrush(struct CResource **this)
{
  *this = (struct CResource *)&CLinearGradientLegacyMilBrush::`vftable';
  CLinearGradientLegacyMilBrush::UnRegisterNotifiers(this);
  this[57] = (struct CResource *)&CMILBrushSolid::`vftable'{for `CMILBrush'};
  this[61] = (struct CResource *)&CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  this[54] = (struct CResource *)&CMILCOMBase::`vftable';
  CMILBrushLinearGradient::~CMILBrushLinearGradient((CMILBrushLinearGradient *)(this + 24));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 16);
  CLegacyMilBrush::~CLegacyMilBrush((CLegacyMilBrush *)this);
}
