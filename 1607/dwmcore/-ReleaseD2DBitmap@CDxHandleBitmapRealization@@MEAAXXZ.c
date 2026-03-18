/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180054FD0
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800551A8 (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x180190500 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x18002F680 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18009DA70 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18009F5E0 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  __int64 v2; // rcx
  CMILCOMBase *v3; // rcx
  void (*v4)(void); // rax
  CD2DBitmapCache *v5; // rcx
  void (__fastcall *v6)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax

  v2 = *((_QWORD *)this + 52);
  if ( v2 )
  {
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v2 + 16), (CDxHandleBitmapRealization *)((char *)this + 24));
    v3 = (CMILCOMBase *)*((_QWORD *)this + 52);
    if ( v3 )
    {
      v4 = *(void (**)(void))(*(_QWORD *)v3 + 16LL);
      if ( (char *)v4 == (char *)CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(v3);
      else
        v4();
      *((_QWORD *)this + 52) = 0LL;
    }
    v5 = (CDxHandleBitmapRealization *)((char *)this + 16);
    v6 = *(void (__fastcall **)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2) + 24LL);
    if ( v6 == CD2DBitmapCache::InitializeCache )
      CD2DBitmapCache::InitializeCache(v5, 0LL);
    else
      v6(v5, 0LL);
  }
}
