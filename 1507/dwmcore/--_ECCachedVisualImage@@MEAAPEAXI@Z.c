/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18005354C
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x18009A9B0 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x1800534CC (--1CCachedVisualImage@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CCachedVisualImage *__fastcall CCachedVisualImage::`vector deleting destructor'(CCachedVisualImage *this, char a2)
{
  CCachedVisualImage::~CCachedVisualImage(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CCachedVisualImage *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
