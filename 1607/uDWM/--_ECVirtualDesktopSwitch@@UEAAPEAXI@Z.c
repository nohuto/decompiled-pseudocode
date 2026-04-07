/*
 * XREFs of ??_ECVirtualDesktopSwitch@@UEAAPEAXI@Z @ 0x180091C50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CStoryboard@@UEAA@XZ @ 0x18000F688 (--1CStoryboard@@UEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CVirtualDesktopSwitch *__fastcall CVirtualDesktopSwitch::`vector deleting destructor'(
        CVirtualDesktopSwitch *this,
        char a2)
{
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 152);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 120);
  CStoryboard::~CStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CVirtualDesktopSwitch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
