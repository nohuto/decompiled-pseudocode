/*
 * XREFs of ??_GCAppSwitch@@UEAAPEAXI@Z @ 0x180091C00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CGroupingStoryboard@@UEAA@XZ @ 0x180001F58 (--1CGroupingStoryboard@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAppSwitch *__fastcall CAppSwitch::`scalar deleting destructor'(CAppSwitch *this, char a2)
{
  CGroupingStoryboard::~CGroupingStoryboard(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAppSwitch *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
