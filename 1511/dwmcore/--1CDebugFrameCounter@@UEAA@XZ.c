/*
 * XREFs of ??1CDebugFrameCounter@@UEAA@XZ @ 0x1800FFC5C
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800FFDB8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 *     ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x1800FFF50 (--_ECDebugFrameCounter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x18010325C (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

void __fastcall CDebugFrameCounter::~CDebugFrameCounter(CDebugFrameCounter *this)
{
  *(_QWORD *)this = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CDebugFrameCounter *)((char *)this + 4656));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
