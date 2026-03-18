/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18007B860
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OIA@EAAPEAXI@Z @ 0x1800C1570 (--_ECHwFullScreenRenderTarget@@OIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x18007B364 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwFullScreenRenderTarget *__fastcall CHwFullScreenRenderTarget::`scalar deleting destructor'(
        CHwFullScreenRenderTarget *this,
        char a2)
{
  CHwFullScreenRenderTarget::~CHwFullScreenRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwFullScreenRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
