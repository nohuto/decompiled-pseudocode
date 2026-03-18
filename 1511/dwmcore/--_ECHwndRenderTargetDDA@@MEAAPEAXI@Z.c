/*
 * XREFs of ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x1801147B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x180114734 (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
 */

CHwndRenderTargetDDA *__fastcall CHwndRenderTargetDDA::`vector deleting destructor'(
        CHwndRenderTargetDDA *this,
        const struct _TlgProvider_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CHwndRenderTargetDDA::~CHwndRenderTargetDDA(this, a2);
  if ( (v2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwndRenderTargetDDA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
