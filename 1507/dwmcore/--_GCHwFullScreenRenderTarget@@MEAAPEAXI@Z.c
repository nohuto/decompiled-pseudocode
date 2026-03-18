/*
 * XREFs of ??_GCHwFullScreenRenderTarget@@MEAAPEAXI@Z @ 0x18008AE70
 * Callers:
 *     ??_ECHwFullScreenRenderTarget@@OHI@EAAPEAXI@Z @ 0x18009B140 (--_ECHwFullScreenRenderTarget@@OHI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x18008ADD8 (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
