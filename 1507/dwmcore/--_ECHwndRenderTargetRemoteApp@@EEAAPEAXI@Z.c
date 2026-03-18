/*
 * XREFs of ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x1800FA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x1800FA2D4 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
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
