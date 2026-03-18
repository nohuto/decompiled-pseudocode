/*
 * XREFs of ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x180114310
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x180114244 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
 */

CHwndRenderTargetRemoteApp *__fastcall CHwndRenderTargetRemoteApp::`vector deleting destructor'(
        CHwndRenderTargetRemoteApp *this,
        const struct _TlgProvider_t *a2)
{
  char v2; // bl

  v2 = (char)a2;
  CHwndRenderTargetRemoteApp::~CHwndRenderTargetRemoteApp(this, a2);
  if ( (v2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwndRenderTargetRemoteApp *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
