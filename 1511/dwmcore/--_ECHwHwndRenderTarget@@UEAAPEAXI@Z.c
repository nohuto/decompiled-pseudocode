/*
 * XREFs of ??_ECHwHwndRenderTarget@@UEAAPEAXI@Z @ 0x18014FC60
 * Callers:
 *     ??_ECHwHwndRenderTarget@@WHI@EAAPEAXI@Z @ 0x1800BE2C0 (--_ECHwHwndRenderTarget@@WHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwDisplayRenderTarget@@MEAA@XZ @ 0x18007FF38 (--1CHwDisplayRenderTarget@@MEAA@XZ.c)
 */

CHwHwndRenderTarget *__fastcall CHwHwndRenderTarget::`vector deleting destructor'(CHwHwndRenderTarget *this, char a2)
{
  CHwDisplayRenderTarget::~CHwDisplayRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwHwndRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
