/*
 * XREFs of ??1CGradientColorData@@QEAA@XZ @ 0x180014DE8
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180013A30 (-GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAP.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x180014CB8 (--1CMILBrushGradient@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CGradientColorData::~CGradientColorData(CGradientColorData *this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 32);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
