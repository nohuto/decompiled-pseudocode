/*
 * XREFs of ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018F1A0 (-GetBitmapShaderResourceViewNoRef@CDxHandleAdvancedDirectFlipBitmapRealization@@UEAAJU_LUID@@VDi.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180173264 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall GetBitmapShaderResourceViewFromBitmapSourceNoRef(
        struct IBitmapSource *a1,
        const struct PixelFormatInfo *a2,
        const struct BitmapSourceInfo *a3,
        const struct _GUID *a4,
        struct ID3D11ShaderResourceView **a5)
{
  struct ID3D11ShaderResourceView **v5; // r15
  CHwBitmapColorSource *v6; // rdi
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v11; // rsi
  int v12; // ebx
  int v13; // eax
  struct ID3D11Texture2D **v14; // r14
  int ShaderResourceViewNoRef; // eax
  CD3DDeviceLevel1 *v17; // [rsp+40h] [rbp-10h] BYREF
  CHwBitmapColorSource *v18; // [rsp+90h] [rbp+40h] BYREF

  v5 = a5;
  v17 = 0LL;
  v6 = 0LL;
  v18 = 0LL;
  *a5 = 0LL;
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, a4, *(struct _LUID *)a3, &v17);
  v11 = v17;
  v12 = D3DDevice;
  LODWORD(a5) = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DDevice, 0x2E6u);
  }
  else
  {
    v13 = CHwTexturedColorSource::RealizeFromBitmapSource(
            v17,
            a1,
            (__int128 *)a2,
            *((_DWORD *)a3 + 2),
            *((_DWORD *)a3 + 4),
            *((_QWORD *)a3 + 3),
            &v18);
    LODWORD(a5) = v13;
    v12 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2EEu);
      v6 = v18;
    }
    else
    {
      v6 = v18;
      v14 = (struct ID3D11Texture2D **)(*(__int64 (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v18 + 56LL))(v18);
      ShaderResourceViewNoRef = CD3DTexture::GetShaderResourceViewNoRef((CD3DTexture *)v14, v5);
      LODWORD(a5) = ShaderResourceViewNoRef;
      v12 = ShaderResourceViewNoRef;
      if ( ShaderResourceViewNoRef < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x2F5u);
      }
      else if ( g_LockAndReadTexture )
      {
        CD3DDeviceLevel1::ReadTexture(v11, v14[16]);
      }
    }
  }
  if ( v6 )
    (*(void (__fastcall **)(CHwBitmapColorSource *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v11 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v11 + 408));
  TranslateDXGIorD3DErrorInContext(v12, 0, (int *)&a5);
  return (unsigned int)a5;
}
