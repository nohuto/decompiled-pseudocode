/*
 * XREFs of ??1CStoryboard@@UEAA@XZ @ 0x1800075F4
 * Callers:
 *     ??_GCCrossFade@@UEAAPEAXI@Z @ 0x180001E00 (--_GCCrossFade@@UEAAPEAXI@Z.c)
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800024A8 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x1800933C0 (--_ECVirtualDesktopSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CStoryboard::~CStoryboard(CStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 88);
  *(_QWORD *)this = &CBaseObject::`vftable';
}
