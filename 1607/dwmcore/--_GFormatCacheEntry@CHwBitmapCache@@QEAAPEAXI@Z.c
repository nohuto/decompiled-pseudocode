/*
 * XREFs of ??_GFormatCacheEntry@CHwBitmapCache@@QEAAPEAXI@Z @ 0x1800A28E0
 * Callers:
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x180081770 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1800817E0 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800A2968 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 * Callees:
 *     ??1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x1800A2968 (--1FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
