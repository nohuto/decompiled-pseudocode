/*
 * XREFs of ??_ECDesktopRenderTarget@@EEAAPEAXI@Z @ 0x180106A30
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x1801068E0 (--1CDesktopRenderTarget@@EEAA@XZ.c)
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
