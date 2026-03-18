/*
 * XREFs of ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x180172A34
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x180021130 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18017C398 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 */

bool __fastcall CD3DDeviceManager::KeepOnlyFullValidRealizations(
        CD3DDeviceManager *this,
        int (__fastcall ***a2)(struct IBitmapSource *, GUID *, __int64 *))
{
  int (__fastcall **v2)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v4; // r14d
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 *v7; // rdx
  __int64 *v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v2 = *a2;
  v14 = 0LL;
  v4 = 0;
  if ( (*v2)((struct IBitmapSource *)a2, &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8, &v14) >= 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 64); ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 18) + 40LL * i);
      v13 = 0LL;
      ++*(_DWORD *)(v6 + 888);
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 24LL))(
             v14,
             *(unsigned int *)(v6 + 432),
             &v13) >= 0
        && v13 )
      {
        if ( CHwBitmapCache::FormatCacheEntry::KeepOnlyFullValidRealizations((CHwBitmapCache::FormatCacheEntry *)(v13 + 32)) )
          ++v4;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      v7 = *(__int64 **)(v6 + 968);
      v8 = (__int64 *)(v6 + 960);
      while ( v7 != v8 && *((_DWORD *)v7 + 8) == *(_DWORD *)(v6 + 888) )
      {
        *((_DWORD *)v7 + 8) = 0;
        v7 = (__int64 *)v7[1];
      }
      v9 = *v7;
      if ( (__int64 *)*v7 != v8 )
      {
        v10 = *(_QWORD **)(v6 + 968);
        *v7 = (__int64)v8;
        v11 = *(_QWORD **)(v6 + 952);
        *(_QWORD *)(v6 + 968) = v7;
        *v11 = v9;
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)(v6 + 952) = v10;
        *v10 = v6 + 944;
      }
      --*(_DWORD *)(v6 + 888);
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4 == *((_DWORD *)this + 64);
}
