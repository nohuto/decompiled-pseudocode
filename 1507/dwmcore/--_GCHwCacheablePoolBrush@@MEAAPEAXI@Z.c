/*
 * XREFs of ??_GCHwCacheablePoolBrush@@MEAAPEAXI@Z @ 0x180142B7C
 * Callers:
 *     ??_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z @ 0x18009B690 (--_ECHwCacheablePoolBrush@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x180142A98 (--1CHwCacheablePoolBrush@@MEAA@XZ.c)
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
