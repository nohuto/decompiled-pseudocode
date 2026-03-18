/*
 * XREFs of ??_GCHwCacheablePoolBrush@@MEAAPEAXI@Z @ 0x18015144C
 * Callers:
 *     ??_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z @ 0x1800BE450 (--_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x180151368 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
 */

CHwCacheablePoolBrush *__fastcall CHwCacheablePoolBrush::`scalar deleting destructor'(
        CHwCacheablePoolBrush *this,
        char a2)
{
  CHwCacheablePoolBrush::~CHwCacheablePoolBrush(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwCacheablePoolBrush *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
