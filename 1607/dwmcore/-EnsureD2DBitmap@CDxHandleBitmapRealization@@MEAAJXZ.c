/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180054A70
 * Callers:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x1800102B0 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x1800103A0 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180055220 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x180055388 (-Initialize@CDxHandleBitmapRealization@@IEAAJXZ.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x1801901E0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180054A48 (-GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA-AW4D2D1_ALPHA_MODE@@XZ.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x18009DBA0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18009F5E0 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800B29C0 (-CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@P.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  struct ID2DBitmapCacheSource *v1; // rbx
  unsigned int v3; // ebp
  enum DXGI_ALPHA_MODE D2DAlphaMode; // eax
  int v6; // eax
  __int64 v7; // rdi
  int v8; // eax
  CD2DBitmapCache *v9; // rcx
  void (__fastcall *v10)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *); // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = 0;
  v11 = 0LL;
  if ( *((_QWORD *)this + 52) )
    return v3;
  D2DAlphaMode = CDxHandleBitmapRealization::GetD2DAlphaMode(this);
  v6 = CD2DBitmap::CreateFromSharedHandle(
         (char *)this + 32,
         *((_QWORD *)this + 33),
         *((_QWORD *)this + 32),
         (unsigned int)D2DAlphaMode,
         LODWORD(FLOAT_96_0),
         LODWORD(FLOAT_96_0),
         *((_DWORD *)this + 106),
         &v11);
  v7 = v11;
  v3 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x160u);
  }
  else
  {
    v8 = CD2DResource::AddResourceNotifier(
           (CD2DResource *)(v11 + 16),
           (CDxHandleBitmapRealization *)((char *)this + 24));
    v3 = v8;
    if ( v8 >= 0 )
    {
      *((_QWORD *)this + 52) = v7;
      if ( v7 )
        v1 = (struct ID2DBitmapCacheSource *)(v7 + 112);
      v9 = (CDxHandleBitmapRealization *)((char *)this + 16);
      v10 = *(void (__fastcall **)(CD2DBitmapCache *__hidden, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2)
                                                                                             + 24LL);
      if ( v10 == CD2DBitmapCache::InitializeCache )
        CD2DBitmapCache::InitializeCache(v9, v1);
      else
        v10(v9, v1);
      return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x165u);
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return v3;
}
