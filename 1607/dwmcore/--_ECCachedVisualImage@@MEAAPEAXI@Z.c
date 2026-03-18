/*
 * XREFs of ??_ECCachedVisualImage@@MEAAPEAXI@Z @ 0x180033AF0
 * Callers:
 *     ??_ECCachedVisualImage@@OBA@EAAPEAXI@Z @ 0x1800C0620 (--_ECCachedVisualImage@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CCachedVisualImage@@MEAA@XZ @ 0x180033A44 (--1CCachedVisualImage@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
