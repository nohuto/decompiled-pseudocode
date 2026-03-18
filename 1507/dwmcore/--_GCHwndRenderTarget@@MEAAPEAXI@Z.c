/*
 * XREFs of ??_GCHwndRenderTarget@@MEAAPEAXI@Z @ 0x18004A480
 * Callers:
 *     <none>
 * Callees:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x18004D4A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
