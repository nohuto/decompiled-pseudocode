/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x18002D900
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OIA@EAAPEAXI@Z @ 0x1800C16F0 (--_ECHwTextureRenderTarget@@OIA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002D854 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CHwTextureRenderTarget *__fastcall CHwTextureRenderTarget::`scalar deleting destructor'(
        CHwTextureRenderTarget *this,
        char a2)
{
  CHwTextureRenderTarget::~CHwTextureRenderTarget(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwTextureRenderTarget *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
