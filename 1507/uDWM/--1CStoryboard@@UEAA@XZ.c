/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x18000FBB4
 * Callers:
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180001130 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x18009036C (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x180090580 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
