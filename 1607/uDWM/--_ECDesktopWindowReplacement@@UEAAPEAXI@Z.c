/*
 * XREFs of ??_ECDesktopWindowReplacement@@UEAAPEAXI@Z @ 0x18007C700
 * Callers:
 *     <none>
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x18001F3D0 (--1CVisual@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CDesktopWindowReplacement *__fastcall CDesktopWindowReplacement::`vector deleting destructor'(
        CDesktopWindowReplacement *this,
        char a2)
{
  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopWindowReplacement *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
