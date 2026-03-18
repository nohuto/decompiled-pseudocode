/*
 * XREFs of ?KeepOnlyFullValidRealizations@CD3DDeviceManager@@QEAA_NPEAVIBitmapSource@@@Z @ 0x1801333C0
 * Callers:
 *     ?ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAPSECTION@@@Z @ 0x18000DCB0 (-ProcessUnmapSection@CGdiSpriteBitmap@@UEAAJPEAVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UNMAP.c)
 * Callees:
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ @ 0x18013B980 (-KeepOnlyFullValidRealizations@FormatCacheEntry@CHwBitmapCache@@QEAA_NXZ.c)
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
    for ( i = 0; i < *((_DWORD *)this + 34); ++i )
    {
      v6 = *(_QWORD *)(32LL * i + *((_QWORD *)this + 13));
      v13 = 0LL;
      v15 = v6;
      ++*(_DWORD *)(v6 + 512);
      *(_DWORD *)(v6 + 516) = GetCurrentThreadId();
      ++*(_DWORD *)(v6 + 904);
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 24LL))(
             v14,
             *(unsigned int *)(v6 + 416),
             &v13) >= 0
        && v13 )
      {
        if ( CHwBitmapCache::FormatCacheEntry::KeepOnlyFullValidRealizations((CHwBitmapCache::FormatCacheEntry *)(v13 + 32)) )
          ++v4;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      }
      v7 = *(__int64 **)(v6 + 984);
      v8 = v6 + 976;
      while ( v7 != (__int64 *)v8 && *((_DWORD *)v7 + 8) == *(_DWORD *)(v6 + 904) )
      {
        *((_DWORD *)v7 + 8) = 0;
        v7 = (__int64 *)v7[1];
      }
      v9 = *v7;
      if ( *v7 != v8 )
      {
        v10 = *(_QWORD **)(v6 + 984);
        *v7 = v8;
        v11 = *(_QWORD **)(v6 + 968);
        *(_QWORD *)(v6 + 984) = v7;
        *v11 = v9;
        *(_QWORD *)(v9 + 8) = v11;
        *(_QWORD *)(v6 + 968) = v10;
        *v10 = v6 + 960;
      }
      --*(_DWORD *)(v6 + 904);
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v15);
    }
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return v4 == *((_DWORD *)this + 34);
}
