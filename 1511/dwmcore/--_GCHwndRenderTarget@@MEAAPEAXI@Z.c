/*
 * XREFs of ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x18007B9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18007E754 (--1CHwndRenderTarget@@MEAA@XZ.c)
 */

CHwndRenderTarget *__fastcall CHwndRenderTarget::`scalar deleting destructor'(CHwndRenderTarget *this, char a2)
{
  CHwndRenderTarget::~CHwndRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwndRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
