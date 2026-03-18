/*
 * XREFs of ??_GCHwBitmapBrush@@UEAAPEAXI@Z @ 0x18002C2B0
 * Callers:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18002BC30 (--1CHwBrushPool@@QEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwBitmapBrush@@UEAA@XZ @ 0x18002C244 (--1CHwBitmapBrush@@UEAA@XZ.c)
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
