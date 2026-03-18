/*
 * XREFs of ?EnsureBlackBitmapTargets@CD3DDeviceLevel1@@AEAAJXZ @ 0x180173B08
 * Callers:
 *     ?GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801742F0 (-GetStockOpaqueBlackImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x1801743D0 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x1800806B8 (-CreateRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormat.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEAUPixelFormatInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18017378C (-CreateRenderTargetBitmapFromTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@VDisplayId@@PEA.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180175230 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBlackBitmapTargets(CD3DDeviceLevel1 *this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // [rsp+20h] [rbp-50h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  const char *v14; // [rsp+40h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-28h]
  _BYTE v16[4]; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]
  __int64 v18; // [rsp+80h] [rbp+10h] BYREF
  __int64 v19; // [rsp+88h] [rbp+18h] BYREF

  v1 = 0;
  if ( !*((_QWORD *)this + 100) )
  {
    v18 = 0LL;
    v3 = PixelFormatInfoFromDXGIFormatAndAlphaMode(
           DXGI_FORMAT_B8G8R8A8_UNORM,
           DXGI_ALPHA_MODE_PREMULTIPLIED,
           (struct PixelFormatInfo *)v16);
    v1 = v3;
    if ( v3 < 0 )
    {
      if ( IsOOM(v3) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x5AEu);
    }
    else
    {
      v4 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v15 = 22;
      v14 = "DWM stock black bitmap";
      LOBYTE(v13) = 0;
      LODWORD(v12) = DisplayId::None;
      v5 = CD3DDeviceLevel1::CreateRenderTargetBitmap(
             (__int64)this,
             (__int64)&v14,
             1LL,
             1LL,
             v12,
             (__int64)v16,
             v13,
             &v18);
      v1 = v5;
      if ( v5 < 0 )
      {
        if ( IsOOM(v5) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x5B6u);
      }
      else
      {
        v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 120LL))(v18);
        v7 = *(_QWORD *)(v6 + 200);
        if ( v7 )
        {
          (*(void (__fastcall **)(_QWORD, __int64, const struct _D3DCOLORVALUE *))(**((_QWORD **)this + 72) + 400LL))(
            *((_QWORD *)this + 72),
            v7,
            &`CVisual::SetHeatMapColor'::`2'::sc_defaultValue);
          v19 = 0LL;
          v17 = 3;
          v8 = CD3DDeviceLevel1::CreateRenderTargetBitmapFromTexture(
                 (__int64)this,
                 *(_QWORD *)(v6 + 136),
                 DisplayId::None,
                 (__int64)v16,
                 &v19);
          v1 = v8;
          if ( v8 >= 0 )
          {
            *((_QWORD *)this + 100) = v18;
            *((_QWORD *)this + 99) = v19;
            return v1;
          }
          if ( IsOOM(v8) && IsCompBuild() )
            NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x5C7u);
          v9 = v19;
          if ( v19 )
          {
            v19 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
          }
        }
        else
        {
          v1 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x5BAu);
        }
      }
    }
    v10 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  return v1;
}
