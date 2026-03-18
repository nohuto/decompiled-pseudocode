/*
 * XREFs of ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180139028
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015D7D0 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDi.c)
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18015F8A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleDecodeBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4S.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSRVNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180145018 (-GetSRVNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180145A54 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall GetBitmapShaderResourceViewFromBitmapSourceNoRef(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        const struct _GUID *a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // r14
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v10; // rbp
  int v11; // edi
  int v12; // eax
  __int64 v13; // rsi
  struct ID3D11Texture2D **v14; // rbx
  int SRVNoRef; // eax
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  CD3DDeviceLevel1 *v18; // [rsp+80h] [rbp+18h] BYREF

  v5 = a5;
  v18 = 0LL;
  v17 = 0LL;
  *a5 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a4, *(struct _LUID *)a3, &v18);
  v10 = v18;
  v11 = D3DDevice;
  LODWORD(a5) = D3DDevice;
  if ( D3DDevice >= 0 )
  {
    v12 = CHwTexturedColorSource::RealizeFromBitmapSource(
            v18,
            a1,
            (__int128 *)a2,
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 4),
            *((_QWORD *)a3 + 3),
            (__int64)&v17);
    v13 = v17;
    v11 = v12;
    LODWORD(a5) = v12;
    if ( v12 >= 0 )
    {
      v14 = (struct ID3D11Texture2D **)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
      SRVNoRef = CD3DTexture::GetSRVNoRef((CD3DTexture *)v14, v5);
      LODWORD(a5) = SRVNoRef;
      v11 = SRVNoRef;
      if ( SRVNoRef >= 0 )
      {
        if ( g_LockAndReadTexture )
          CD3DDeviceLevel1::ReadTexture(v10, v14[16]);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, SRVNoRef, 0x36Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x364u);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x35Cu);
  }
  if ( v10 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v10 + 384));
  TranslateDXGIorD3DErrorInContext(v11, 0, &a5);
  return (unsigned int)a5;
}
