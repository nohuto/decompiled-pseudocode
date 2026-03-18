/*
 * XREFs of ??_ECRemoteApplicationWindow@@UEAAPEAXI@Z @ 0x18013ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CRemoteApplicationWindow@@UEAA@XZ @ 0x18013AD7C (--1CRemoteApplicationWindow@@UEAA@XZ.c)
 */

CRemoteApplicationWindow *__fastcall CRemoteApplicationWindow::`vector deleting destructor'(
        CRemoteApplicationWindow *this,
        char a2)
{
  CRemoteApplicationWindow::~CRemoteApplicationWindow(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CRemoteApplicationWindow *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
