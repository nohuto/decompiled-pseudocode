/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x18001E8E0
 * Callers:
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x180007A80 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18001E810 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089FB0 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x18014E1D0 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x180016000 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x18001B430 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800565AC (-CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@P.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // esi
  unsigned int v4; // eax
  __int64 v5; // r9
  int v6; // eax
  struct ID2DBitmapCacheSource *v7; // rdi
  int v8; // eax
  struct ID2DBitmapCacheSource *v9; // rbp
  void (__fastcall *v10)(CD2DBitmapCache *, struct ID2DBitmapCacheSource *); // r14
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v11 = 0LL;
  if ( !*((_QWORD *)this + 57) )
  {
    v4 = *((_DWORD *)this + 32);
    v5 = 3LL;
    if ( v4 )
      v5 = v4;
    v6 = CD2DBitmap::CreateFromSharedHandle(
           (char *)this + 32,
           *((_QWORD *)this + 39),
           *((_QWORD *)this + 38),
           v5,
           LODWORD(FLOAT_96_0),
           LODWORD(FLOAT_96_0),
           *((_DWORD *)this + 116),
           &v11);
    v1 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x119u);
      v7 = (struct ID2DBitmapCacheSource *)v11;
    }
    else
    {
      v7 = (struct ID2DBitmapCacheSource *)v11;
      v8 = CD2DResource::AddResourceNotifier(
             (CD2DResource *)(v11 + 16),
             (CDxHandleBitmapRealization *)((char *)this + 24));
      v1 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x11Eu);
      }
      else
      {
        v9 = v7;
        *((_QWORD *)this + 57) = v7;
        v7 = 0LL;
        if ( v9 )
          v9 = (struct ID2DBitmapCacheSource *)((char *)v9 + 112);
        v10 = *(void (__fastcall **)(CD2DBitmapCache *, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2) + 24LL);
        if ( v10 == CD2DBitmapCache::InitializeCache )
        {
          CD2DBitmapCache::InitializeCache((CDxHandleBitmapRealization *)((char *)this + 16), v9);
          return v1;
        }
        v10((CDxHandleBitmapRealization *)((char *)this + 16), v9);
      }
    }
    if ( v7 )
      (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v1;
}
