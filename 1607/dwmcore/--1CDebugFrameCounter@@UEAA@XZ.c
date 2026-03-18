/*
 * XREFs of ??1CDebugFrameCounter@@UEAA@XZ @ 0x180113C08
 * Callers:
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x180113D18 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 *     ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x180113E90 (--_ECDebugFrameCounter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDisplayDebugFrameCounter@@UEAA@XZ @ 0x180119444 (--1CDisplayDebugFrameCounter@@UEAA@XZ.c)
 */

void __fastcall CDebugFrameCounter::~CDebugFrameCounter(CDebugFrameCounter *this)
{
  *(_QWORD *)this = &CDebugFrameCounter::`vftable';
  CDisplayDebugFrameCounter::~CDisplayDebugFrameCounter((CDebugFrameCounter *)((char *)this + 4656));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
