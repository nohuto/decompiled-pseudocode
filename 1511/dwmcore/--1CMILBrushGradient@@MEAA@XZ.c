/*
 * XREFs of ??1CMILBrushGradient@@MEAA@XZ @ 0x180014CB8
 * Callers:
 *     ??1CMILBrushLinearGradient@@MEAA@XZ @ 0x180014C34 (--1CMILBrushLinearGradient@@MEAA@XZ.c)
 *     ??_GCMILBrushGradient@@MEAAPEAXI@Z @ 0x18015A420 (--_GCMILBrushGradient@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CGradientColorData@@QEAA@XZ @ 0x180014DE8 (--1CGradientColorData@@QEAA@XZ.c)
 *     ??1CMILResourceCache@@IEAA@XZ @ 0x18008A754 (--1CMILResourceCache@@IEAA@XZ.c)
 */

void __fastcall CMILBrushGradient::~CMILBrushGradient(CMILBrushGradient *this)
{
  *(_QWORD *)this = &CMILBrushGradient::`vftable'{for `CMILObject'};
  *((_QWORD *)this + 3) = &CMILBrushGradient::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 7) = &CMILResourceCache::`vftable';
  *((_QWORD *)this + 15) = &CMILBrushGradient::`vftable'{for `IMILBrushGradient'};
  CGradientColorData::~CGradientColorData((CMILBrushGradient *)((char *)this + 160));
  CMILResourceCache::~CMILResourceCache((CMILBrushGradient *)((char *)this + 56));
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
