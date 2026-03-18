/*
 * XREFs of ??1CMILBrushGradient@@MEAA@XZ @ 0x18014BCC0
 * Callers:
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x18014BB18 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 *     ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x18014BD30 (--_GCMILBrushGradient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x180056DCC (--1CMILResourceCache@@IEAA@XZ.c)
 *     ??1CGradientColorData@@QEAA@XZ @ 0x18011FF84 (--1CGradientColorData@@QEAA@XZ.c)
 */

void __fastcall CMILBrushGradient::~CMILBrushGradient(CMILBrushGradient *this)
{
  *(_QWORD *)this = &CMILBrushGradient::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 3) = &CMILBrush::`vftable';
  *((_QWORD *)this + 7) = &CMILBrushGradient::`vftable'{for `CMILResourceCache'};
  *((_QWORD *)this + 15) = &CMILBrushGradient::`vftable'{for `IMILBrushGradient'};
  CGradientColorData::~CGradientColorData((void **)this + 20);
  CMILResourceCache::~CMILResourceCache((CMILBrushGradient *)((char *)this + 56));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
