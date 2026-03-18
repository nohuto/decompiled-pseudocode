/*
 * XREFs of ??1CLinearGradientBrush@@MEAA@XZ @ 0x18011FFAC
 * Callers:
 *     ??_GCLinearGradientBrush@@MEAAPEAXI@Z @ 0x1800F9400 (--_GCLinearGradientBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ @ 0x180119110 (-UnRegisterNotifiers@CLinearGradientBrush@@UEAAXXZ.c)
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x18014BB18 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 */

void __fastcall CLinearGradientBrush::~CLinearGradientBrush(CLinearGradientBrush *this)
{
  *(_QWORD *)this = &CLinearGradientBrush::`vftable';
  CLinearGradientBrush::UnRegisterNotifiers((struct CResource **)this);
  *((_QWORD *)this + 57) = &CMILBrushSolid::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 61) = &CMILBrushSolid::`vftable'{for `IMILBrushSolid'};
  *((_QWORD *)this + 54) = &CMILCOMBase::`vftable';
  CMILBrushLinearGradient::~CMILBrushLinearGradient((CLinearGradientBrush *)((char *)this + 192));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 16);
  CBrush::~CBrush(this);
}
