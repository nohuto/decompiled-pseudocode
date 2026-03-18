/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x18002CCA0
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OHI@EAAPEAXI@Z @ 0x1800BDF20 (--_ECHwTextureRenderTarget@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x18002CBD4 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
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
