/*
 * XREFs of ??_ECHwndRenderTargetRemoteApp@@EEAAPEAXI@Z @ 0x18012D840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CHwndRenderTargetRemoteApp@@EEAA@XZ @ 0x18012D784 (--1CHwndRenderTargetRemoteApp@@EEAA@XZ.c)
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
