/*
 * XREFs of ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x18011CEF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18011CD64 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 */

CDesktopRenderTarget *__fastcall CDesktopRenderTarget::`vector deleting destructor'(
        CDesktopRenderTarget *this,
        char a2)
{
  CDesktopRenderTarget::~CDesktopRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CDesktopRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
