/*
 * XREFs of ??1CGradientColorData@@QEAA@XZ @ 0x18011FF84
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180120020 (-GetBrushRealizationInternal@CLinearGradientBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x18014BCC0 (--1CMILBrushGradient@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CGradientColorData::~CGradientColorData(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 4);
  DynArrayImpl<1>::~DynArrayImpl<1>(this);
}
