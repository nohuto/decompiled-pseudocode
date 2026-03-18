/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18009F5E0
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     ?ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ @ 0x180054FD0 (-ReleaseD2DBitmap@CDxHandleBitmapRealization@@MEAAXXZ.c)
 * Callees:
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18009F84C (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x18009FB00 (-GetTextureFormat@CD2DBitmap@@UEBA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18009FF0C (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  void (__fastcall ***v7)(_QWORD, GUID *, char *); // rcx
  CD2DBitmap *v8; // rcx
  __int64 (*v9)(void); // rax
  enum DXGI_FORMAT TextureFormat; // eax

  CD2DBitmapCache::ClearCache((CD2DBitmapCache *)((char *)this - 16));
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 4);
  if ( v7 )
  {
    (**v7)(v7, &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, (char *)this + 40);
    v8 = (CD2DBitmap *)*((_QWORD *)this + 4);
    v9 = *(__int64 (**)(void))(*(_QWORD *)v8 + 32LL);
    if ( (char *)v9 == (char *)CD2DBitmap::GetTextureFormat )
      TextureFormat = CD2DBitmap::GetTextureFormat(v8);
    else
      TextureFormat = (unsigned int)v9();
    GetPixelFormatColorSpace(TextureFormat, (CD2DBitmapCache *)((char *)this + 48));
  }
}
