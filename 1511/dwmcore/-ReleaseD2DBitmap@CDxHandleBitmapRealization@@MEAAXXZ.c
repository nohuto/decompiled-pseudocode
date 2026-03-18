/*
 * XREFs of ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180032D90
 * Callers:
 *     ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x180032D1C (--1CDxHandleBitmapRealization@@MEAA@XZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ @ 0x18015D0F0 (-ReleaseD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CDxHandleYUVBitmapRealization@@UEAAKXZ @ 0x180004140 (-Release@CDxHandleYUVBitmapRealization@@UEAAKXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180027790 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180030560 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 */

void __fastcall CDxHandleBitmapRealization::ReleaseD2DBitmap(CDxHandleBitmapRealization *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned int (__fastcall *v4)(CDxHandleYUVBitmapRealization *); // rsi
  void (__fastcall *v5)(CD2DBitmapCache *, struct ID2DBitmapCacheSource *); // rdi

  v2 = *((_QWORD *)this + 57);
  if ( v2 )
  {
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(v2 + 16), (CDxHandleBitmapRealization *)((char *)this + 24));
    v3 = *((_QWORD *)this + 57);
    if ( v3 )
    {
      v4 = *(unsigned int (__fastcall **)(CDxHandleYUVBitmapRealization *))(*(_QWORD *)v3 + 16LL);
      if ( v4 == CDxHandleYUVBitmapRealization::Release )
        CDxHandleYUVBitmapRealization::Release(*((CDxHandleYUVBitmapRealization **)this + 57));
      else
        v4(*((CDxHandleYUVBitmapRealization **)this + 57));
      *((_QWORD *)this + 57) = 0LL;
    }
    v5 = *(void (__fastcall **)(CD2DBitmapCache *, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2) + 24LL);
    if ( v5 == CD2DBitmapCache::InitializeCache )
      CD2DBitmapCache::InitializeCache((CDxHandleBitmapRealization *)((char *)this + 16), 0LL);
    else
      v5((CDxHandleBitmapRealization *)((char *)this + 16), 0LL);
  }
}
