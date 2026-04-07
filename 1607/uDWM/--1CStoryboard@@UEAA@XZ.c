/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x18000F688
 * Callers:
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180001190 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x180001F58 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x180091C50 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
