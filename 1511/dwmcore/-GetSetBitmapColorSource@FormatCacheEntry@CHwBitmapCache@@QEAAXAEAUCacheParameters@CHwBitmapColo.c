/*
 * XREFs of ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x18008BB48
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x18008B380 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BC0C (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 *     ?GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x18008BC6C (-GetSetBitmapColorSource@CacheEntryList@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorS.c)
 */

void __fastcall CHwBitmapCache::FormatCacheEntry::GetSetBitmapColorSource(
        CHwBitmapCache::FormatCacheEntry *this,
        struct CHwBitmapColorSource::CacheParameters *a2,
        struct CHwBitmapColorSource **a3,
        struct CHwBitmapColorSource **a4)
{
  CHwBitmapCache::FormatCacheEntry **v7; // rsi
  CHwBitmapCache::FormatCacheEntry *v8; // rax

  while ( *(_DWORD *)this != *(_DWORD *)a2 )
  {
    if ( !*(_DWORD *)this )
    {
      *(_DWORD *)this = *(_DWORD *)a2;
      break;
    }
    v7 = (CHwBitmapCache::FormatCacheEntry **)((char *)this + 8);
    if ( !*((_QWORD *)this + 1) )
    {
      v8 = (CHwBitmapCache::FormatCacheEntry *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 336LL);
      if ( v8 )
        v8 = (CHwBitmapCache::FormatCacheEntry *)CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(v8);
      *v7 = v8;
      if ( !v8 )
        return;
    }
    this = *v7;
  }
  CHwBitmapCache::CacheEntryList::GetSetBitmapColorSource(
    (CHwBitmapCache::FormatCacheEntry *)((char *)this + 16),
    a2,
    a3,
    a4);
}
