/*
 * XREFs of ??1CGroupingStoryboard@@UEAA@XZ @ 0x18009036C
 * Callers:
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x1800902C8 (--1CAppArrangementBase@@UEAA@XZ.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x180090520 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CGroupingStoryboard::~CGroupingStoryboard(void **this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 15);
  CStoryboard::~CStoryboard((CStoryboard *)this);
}
