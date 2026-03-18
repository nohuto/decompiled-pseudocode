/*
 * XREFs of ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18001B430
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18001E8E0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?ClearCache@CD2DBitmapCache@@IEAAXXZ @ 0x18001B3CC (-ClearCache@CD2DBitmapCache@@IEAAXXZ.c)
 *     ?GetTextureFormat@CD2DBitmap@@UEBA?AW4DXGI_FORMAT@@XZ @ 0x18001B890 (-GetTextureFormat@CD2DBitmap@@UEBA-AW4DXGI_FORMAT@@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DBitmapCache::InitializeCache(CD2DBitmapCache *this, struct ID2DBitmapCacheSource *a2)
{
  __int64 v4; // r14
  __int64 v5; // r14
  __int64 v6; // r14
  void (__fastcall ***v7)(_QWORD, GUID *, char *); // rsi
  enum DXGI_FORMAT (__fastcall *v8)(CD2DBitmap *__hidden); // rsi
  enum DXGI_FORMAT TextureFormat; // eax

  CD2DBitmapCache::ClearCache((CD2DBitmapCache *)((char *)this - 16));
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 5));
    *((_QWORD *)this + 5) = 0LL;
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 7));
    *((_QWORD *)this + 7) = 0LL;
  }
  v6 = *((_QWORD *)this + 4);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 4));
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)a2 + 8LL))(a2);
  v7 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 4);
  if ( v7 )
  {
    (**v7)(*((_QWORD *)this + 4), &GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5, (char *)this + 40);
    v8 = *(enum DXGI_FORMAT (__fastcall **)(CD2DBitmap *__hidden))(**((_QWORD **)this + 4) + 32LL);
    if ( v8 == CD2DBitmap::GetTextureFormat )
      TextureFormat = CD2DBitmap::GetTextureFormat(*((CD2DBitmap **)this + 4));
    else
      TextureFormat = v8(*((CD2DBitmap **)this + 4));
    GetPixelFormatColorSpace(TextureFormat, (CD2DBitmapCache *)((char *)this + 48));
  }
}
