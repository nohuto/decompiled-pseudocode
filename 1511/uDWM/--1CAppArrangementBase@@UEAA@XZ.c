/*
 * XREFs of ??1CAppArrangementBase@@UEAA@XZ @ 0x180001C30
 * Callers:
 *     ??_GCAppArrangementDelayed@@UEAAPEAXI@Z @ 0x180004720 (--_GCAppArrangementDelayed@@UEAAPEAXI@Z.c)
 *     ??_ECAppArrangementImmediate@@UEAAPEAXI@Z @ 0x1800932E0 (--_ECAppArrangementImmediate@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002B05C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CAppArrangementBase::~CAppArrangementBase(CAppArrangementBase *this)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 152);
  CGroupingStoryboard::~CGroupingStoryboard(this);
}
