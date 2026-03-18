/*
 * XREFs of ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BC0C
 * Callers:
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x18008B310 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x18008B380 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18008B608 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x18008BB48 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180065E88 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A18D0 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CHwBitmapCache::FormatCacheEntry *__fastcall CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(
        CHwBitmapCache::FormatCacheEntry *this)
{
  char *v2; // rcx
  CBitmapOfDeviceBitmaps::DeviceBitmapInfo *v3; // rbx
  CHwBitmapCache::FormatCacheEntry *result; // rax

  v2 = (char *)this + 16;
  v3 = (CBitmapOfDeviceBitmaps::DeviceBitmapInfo *)(v2 + 32);
  DynArrayImpl<1>::DynArrayImpl<1>(v2, v2 + 32, 4LL);
  `vector constructor iterator'(
    v3,
    72LL,
    4,
    (void (__fastcall *)(CBitmapOfDeviceBitmaps::DeviceBitmapInfo *))CHwBitmapCache::CacheEntry::CacheEntry);
  *(_DWORD *)this = 0;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
