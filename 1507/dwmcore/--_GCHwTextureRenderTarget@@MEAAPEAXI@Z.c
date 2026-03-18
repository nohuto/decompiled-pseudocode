/*
 * XREFs of ??_GCHwTextureRenderTarget@@MEAAPEAXI@Z @ 0x180083140
 * Callers:
 *     ??_ECHwTextureRenderTarget@@OHI@EAAPEAXI@Z @ 0x18009B250 (--_ECHwTextureRenderTarget@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwTextureRenderTarget@@MEAA@XZ @ 0x180083074 (--1CHwTextureRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
