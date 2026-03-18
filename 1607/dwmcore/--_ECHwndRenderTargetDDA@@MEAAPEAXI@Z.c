/*
 * XREFs of ??_ECHwndRenderTargetDDA@@MEAAPEAXI@Z @ 0x18012DCE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CHwndRenderTargetDDA@@MEAA@XZ @ 0x18012DC5C (--1CHwndRenderTargetDDA@@MEAA@XZ.c)
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
