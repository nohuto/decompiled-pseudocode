/*
 * XREFs of ??1CAppArrangementBase@@UEAA@XZ @ 0x1800902C8
 * Callers:
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x180090440 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800904A0 (--_ECAppArrangementImmediate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAppArrangementBase::~CAppArrangementBase(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 19);
  CGroupingStoryboard::~CGroupingStoryboard((CGroupingStoryboard *)this);
}
