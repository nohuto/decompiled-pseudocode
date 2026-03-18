/*
 * XREFs of ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180032790
 * Callers:
 *     ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18000CE10 (-GetTextureFormat@CDxHandleBitmapRealization@@UEAA-AW4DXGI_FORMAT@@XZ.c)
 *     ?GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@_N4PEAPEAUID2D1Bitmap1@@@Z @ 0x18000CF20 (-GetD2DBitmap@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEBV-$TMilRe.c)
 *     ?GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z @ 0x18000CFD0 (-GetDXGIResource@CDxHandleBitmapRealization@@UEAAJPEAPEAUIDXGIResource@@W4StereoContext@@@Z.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1800326A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoC.c)
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C9FC (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x18015CD50 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z @ 0x1800278A0 (-AddResourceNotifier@CD2DResource@@UEAAJPEAVIDeviceResourceNotify@@@Z.c)
 *     ?InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z @ 0x180030560 (-InitializeCache@CD2DBitmapCache@@UEAAXPEAVID2DBitmapCacheSource@@@Z.c)
 *     ?GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA?AW4D2D1_ALPHA_MODE@@XZ @ 0x180032650 (-GetD2DAlphaMode@CDxHandleBitmapRealization@@IEBA-AW4D2D1_ALPHA_MODE@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800AFA0C (-CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@P.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::EnsureD2DBitmap(CDxHandleBitmapRealization *this)
{
  unsigned int v1; // esi
  enum DXGI_ALPHA_MODE D2DAlphaMode; // eax
  int v5; // eax
  struct ID2DBitmapCacheSource *v6; // rdi
  int v7; // eax
  struct ID2DBitmapCacheSource *v8; // rbp
  void (__fastcall *v9)(CD2DBitmapCache *, struct ID2DBitmapCacheSource *); // r14
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  v10 = 0LL;
  if ( !*((_QWORD *)this + 57) )
  {
    D2DAlphaMode = CDxHandleBitmapRealization::GetD2DAlphaMode(this);
    v5 = CD2DBitmap::CreateFromSharedHandle(
           (char *)this + 32,
           *((_QWORD *)this + 39),
           *((_QWORD *)this + 38),
           (unsigned int)D2DAlphaMode,
           LODWORD(FLOAT_96_0),
           LODWORD(FLOAT_96_0),
           *((_DWORD *)this + 116),
           &v10);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x119u);
      v6 = (struct ID2DBitmapCacheSource *)v10;
    }
    else
    {
      v6 = (struct ID2DBitmapCacheSource *)v10;
      v7 = CD2DResource::AddResourceNotifier(
             (CD2DResource *)(v10 + 16),
             (CDxHandleBitmapRealization *)((char *)this + 24));
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x11Eu);
      }
      else
      {
        v8 = v6;
        *((_QWORD *)this + 57) = v6;
        v6 = 0LL;
        if ( v8 )
          v8 = (struct ID2DBitmapCacheSource *)((char *)v8 + 112);
        v9 = *(void (__fastcall **)(CD2DBitmapCache *, struct ID2DBitmapCacheSource *))(*((_QWORD *)this + 2) + 24LL);
        if ( v9 == CD2DBitmapCache::InitializeCache )
        {
          CD2DBitmapCache::InitializeCache((CDxHandleBitmapRealization *)((char *)this + 16), v8);
          return v1;
        }
        v9((CDxHandleBitmapRealization *)((char *)this + 16), v8);
      }
    }
    if ( v6 )
      (*(void (__fastcall **)(struct ID2DBitmapCacheSource *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v1;
}
