/*
 * XREFs of ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18008A880
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18008AAB4 (--1CHwBrushPool@@QEAA@XZ.c)
 * Callees:
 *     ??1CHwBitmapBrush@@UEAA@XZ @ 0x18008A8D8 (--1CHwBitmapBrush@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwBitmapBrush *__fastcall CHwBitmapBrush::`scalar deleting destructor'(CHwBitmapBrush *this, char a2)
{
  CHwBitmapBrush::~CHwBitmapBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
