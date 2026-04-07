/*
 * XREFs of ??_GWindowFrame@CTopLevelWindow@@UEAAPEAXI@Z @ 0x180046E00
 * Callers:
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180046D20 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1WindowFrame@CTopLevelWindow@@UEAA@XZ @ 0x180046E58 (--1WindowFrame@CTopLevelWindow@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CTopLevelWindow::WindowFrame *__fastcall CTopLevelWindow::WindowFrame::`scalar deleting destructor'(
        CTopLevelWindow::WindowFrame *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CTopLevelWindow::WindowFrame::~WindowFrame(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
