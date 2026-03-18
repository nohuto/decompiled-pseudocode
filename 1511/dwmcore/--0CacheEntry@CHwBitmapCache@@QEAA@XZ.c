/*
 * XREFs of ??0CacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180065F90
 * Callers:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 * Callees:
 *     <none>
 */

CHwBitmapCache::CacheEntry *__fastcall CHwBitmapCache::CacheEntry::CacheEntry(CHwBitmapCache::CacheEntry *this)
{
  *((_DWORD *)this + 14) = 0;
  return this;
}
