/*
 * XREFs of ??1CAppArrangementBase@@UEAA@XZ @ 0x1800019A4
 * Callers:
 *     ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x180002B90 (--_ECAppArrangementImmediate@@UEAAPEAXI@Z.c)
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x1800035E0 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAppArrangementBase::~CAppArrangementBase(CAppArrangementBase *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 152);
  CGroupingStoryboard::~CGroupingStoryboard(this);
}
