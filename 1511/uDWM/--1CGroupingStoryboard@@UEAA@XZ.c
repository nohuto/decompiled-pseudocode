/*
 * XREFs of ??1CGroupingStoryboard@@UEAA@XZ @ 0x1800024A8
 * Callers:
 *     ??1CAppArrangementBase@@UEAA@XZ @ 0x180001C30 (--1CAppArrangementBase@@UEAA@XZ.c)
 *     ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x180093360 (--_GCAppSwitch@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CGroupingStoryboard::~CGroupingStoryboard(CGroupingStoryboard *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 120);
  CStoryboard::~CStoryboard(this);
}
