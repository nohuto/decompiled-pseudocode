/*
 * XREFs of ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x180144C00
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18001B7E0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18014BAF0 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
 */

bool __fastcall CD3DDeviceManager::KeepOnlyFullValidRealizations(
        CD3DDeviceManager *this,
        int (__fastcall ***a2)(struct IBitmapSource *, GUID *, __int64 *))
{
  int (__fastcall **v2)(struct IBitmapSource *, GUID *, __int64 *); // rax
  int v4; // r12d
  unsigned int i; // r15d
  __int64 v6; // r14
  __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v2 = *a2;
  v14 = 0LL;
  v4 = 0;
  if ( (*v2)((struct IBitmapSource *)a2, &GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8, &v14) >= 0 )
  {
    for ( i = 0; i < *((_DWORD *)this + 32); ++i )
    {
      v6 = *(_QWORD *)(32LL * i + *((_QWORD *)this + 12));
      v13 = 0LL;
      v15 = v6;
      ++*(_DWORD *)(v6 + 504);
      *(_DWORD *)(v6 + 508) = GetCurrentThreadId();
      ++*(_DWORD *)(v6 + 856);
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 24LL))(
             v14,
             *(unsigned int *)(v6 + 408),
             &v13) >= 0
        && v13 )
      {
        if ( CHwBitmapCache::FormatCacheEntry::KeepOnlyFullValidRealizations((CHwBitmapCache::FormatCacheEntry *)(v13 + 32)) )
          ++v4;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      v7 = *(__int64 **)(v6 + 936);
      v8 = v6 + 928;
      while ( v7 != (__int64 *)v8 && *((_DWORD *)v7 + 8) == *(_DWORD *)(v6 + 856) )
      {
        *((_DWORD *)v7 + 8) = 0;
        v7 = (__int64 *)v7[1];
      }
      v9 = *v7;
      if ( *v7 != v8 )
      {
        v10 = *(_QWORD **)(v6 + 936);
        *v7 = v8;
        v11 = *(_QWORD **)(v6 + 920);
        *(_QWORD *)(v6 + 936) = v7;
        *v11 = v9;
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)(v6 + 920) = v10;
        *v10 = v6 + 912;
      }
      --*(_DWORD *)(v6 + 856);
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v15);
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4 == *((_DWORD *)this + 32);
}
