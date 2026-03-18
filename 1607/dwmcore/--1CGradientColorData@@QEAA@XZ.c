/*
 * XREFs of ??1CGradientColorData@@QEAA@XZ @ 0x180018128
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1800176B0 (-GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAP.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x180017FF8 (--1CMILBrushGradient@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CGradientColorData::~CGradientColorData(CGradientColorData *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8

  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 32, a2, a3);
  DynArrayImpl<1>::~DynArrayImpl<1>(this, v4, v5);
}
