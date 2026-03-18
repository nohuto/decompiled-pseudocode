/*
 * XREFs of ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x1800B8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800B8CA0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
