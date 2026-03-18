/*
 * XREFs of ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x180051EE8
 * Callers:
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x180018600 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051F84 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 * Callees:
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051F84 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CHwBitmapCache::FormatCacheEntry *__fastcall CHwBitmapCache::FormatCacheEntry::`scalar deleting destructor'(
        CHwBitmapCache::FormatCacheEntry *this,
        char a2)
{
  CHwBitmapCache::FormatCacheEntry::~FormatCacheEntry(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CHwBitmapCache::FormatCacheEntry *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
