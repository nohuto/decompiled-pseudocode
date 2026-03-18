/*
 * XREFs of ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x18008B608
 * Callers:
 *     ?GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z @ 0x18002B484 (-GetCache@CHwBitmapCache@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@XZ @ 0x180027CC8 (--0CD3DResource@@IEAA@XZ.c)
 *     ?Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z @ 0x18002823C (-Use@CD3DResourceManager@@QEAAXAEBVCD3DResource@@@Z.c)
 *     ??0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ @ 0x18008BC0C (--0FormatCacheEntry@CHwBitmapCache@@QEAA@XZ.c)
 */

CHwBitmapCache *__fastcall CHwBitmapCache::CHwBitmapCache(
        CHwBitmapCache *this,
        struct IMILResourceCache *a2,
        struct CD3DDeviceLevel1 *a3)
{
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // rdx
  char *v10; // rax
  unsigned int v11; // edx
  unsigned int v12; // eax
  CHwBitmapCache *result; // rax
  _QWORD *v14; // rdx
  char *v15; // rcx
  __int64 v16; // rcx
  unsigned __int32 v17; // r8d

  CD3DResource::CD3DResource(this);
  v4[17] = v5;
  *v4 = &CHwBitmapCache::`vftable'{for `CMILPoolResource'};
  v4[3] = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  v4[16] = &CHwBitmapCache::`vftable';
  v4[18] = v6;
  CHwBitmapCache::FormatCacheEntry::FormatCacheEntry((CHwBitmapCache::FormatCacheEntry *)(v4 + 20));
  v7 = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 140) = 1065353216;
  *((_DWORD *)this + 141) = 1065353216;
  *((_DWORD *)this + 142) = 1065353216;
  *(_QWORD *)((char *)this + 572) = 1065353216LL;
  *(_QWORD *)((char *)this + 580) = 0LL;
  *((_DWORD *)this + 147) = 0;
  *((_BYTE *)this + 592) = 0;
  v8 = *((_QWORD *)this + 17) + 848LL;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 1;
  if ( *((_BYTE *)this + 68) )
  {
    v14 = *(_QWORD **)(v8 + 88);
    v15 = (char *)this + 32;
    *((_QWORD *)this + 4) = v8 + 80;
    *((_QWORD *)this + 5) = v14;
    if ( *v14 != v8 + 80 )
      __fastfail(3u);
    *v14 = v15;
    *(_QWORD *)(v8 + 88) = v15;
    CD3DResourceManager::Use((CD3DResourceManager *)v8, this);
  }
  else
  {
    v9 = *(_QWORD **)(v8 + 40);
    v10 = (char *)this + 32;
    *((_QWORD *)this + 4) = v8 + 32;
    *((_QWORD *)this + 5) = v9;
    if ( *v9 != v8 + 32 )
      __fastfail(3u);
    *v9 = v10;
    *(_QWORD *)(v8 + 40) = v10;
  }
  v11 = *((_DWORD *)this + 18);
  if ( g_pMediaControl )
  {
    v16 = *((_QWORD *)g_pMediaControl + 2);
    v17 = v11 + _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 68), v11);
    if ( v17 > *(_DWORD *)(v16 + 76) )
      _InterlockedExchange((volatile __int32 *)(v16 + 76), v17);
  }
  *(_DWORD *)(v8 + 96) += v11;
  v12 = *(_DWORD *)(v8 + 96);
  if ( *(_DWORD *)(v8 + 100) < v12 )
    *(_DWORD *)(v8 + 100) = v12;
  *((_QWORD *)this + 2) = v8;
  result = this;
  *((_QWORD *)this + 19) = v7;
  *((_QWORD *)this + 63) = v7;
  return result;
}
