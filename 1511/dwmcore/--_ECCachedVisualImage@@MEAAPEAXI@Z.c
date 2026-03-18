/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x18005B62C
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800BD610 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x18005B5AC (--1CCachedVisualImage@@MEAA@XZ.c)
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
