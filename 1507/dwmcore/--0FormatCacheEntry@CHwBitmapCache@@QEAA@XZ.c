/*
 * XREFs of ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x180051FE0
 * Callers:
 *     ?ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ @ 0x180018600 (-ReleaseD3DResources@CHwBitmapCache@@UEAAXXZ.c)
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x180018670 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x180018900 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColorSource@@AEAPEAV4@PEAPEAV4@@Z @ 0x180051F24 (-GetSetBitmapColorSource@FormatCacheEntry@CHwBitmapCache@@QEAAXAEAUCacheParameters@CHwBitmapColo.c)
 * Callees:
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x18005198C (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??_H@YAXPEAX_KHP6APEAX0@Z@Z @ 0x180051CE0 (--_H@YAXPEAX_KHP6APEAX0@Z@Z.c)
 */

CHwBitmapCache::FormatCacheEntry *__fastcall CHwBitmapCache::FormatCacheEntry::FormatCacheEntry(
        CHwBitmapCache::FormatCacheEntry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rcx
  Mesh::MeshLine *v6; // rbx
  CHwBitmapCache::FormatCacheEntry *result; // rax

  v5 = (char *)this + 16;
  v6 = (Mesh::MeshLine *)(v5 + 32);
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)v5, v5 + 32, 4, a4, 72);
  `vector constructor iterator'(
    v6,
    72LL,
    4,
    (void (__fastcall *)(Mesh::MeshLine *))TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>);
  *(_DWORD *)this = 0;
  result = this;
  *((_QWORD *)this + 1) = 0LL;
  return result;
}
