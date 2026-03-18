/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180011458
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@@Z @ 0x18000F80C (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800103E0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 *     ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180011FF0 (-GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180024850 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180071388 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800717A8 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x1800AF990 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSecondaryD2DBitmap(
        CD3DDeviceManager *this,
        const struct _GUID *a2,
        struct _LUID a3,
        struct D3D11_TEXTURE2D_DESC *a4,
        struct D2D1_BITMAP_PROPERTIES1 *a5,
        struct CSecondaryD2DBitmap **a6)
{
  DXGI_FORMAT Format; // r12d
  struct CSecondaryD2DBitmap **v8; // r13
  int v11; // eax
  unsigned int v12; // edi
  int D3DDevice; // eax
  CD3DDeviceLevel1 *v14; // rsi
  int v15; // ecx
  int v16; // edx
  struct D2D1_BITMAP_PROPERTIES1 *v17; // r15
  enum DXGI_FORMAT CompatibleTextureFormat; // eax
  int v19; // eax
  struct ID3D11Texture2D *v20; // r14
  int SecondaryD2DBitmap; // eax
  struct ID3D11Texture2D *v23; // [rsp+30h] [rbp-10h] BYREF
  CD3DDeviceLevel1 *v25; // [rsp+98h] [rbp+58h] BYREF

  Format = a4->Format;
  v8 = a6;
  v25 = 0LL;
  v23 = 0LL;
  *a6 = 0LL;
  v11 = CD3DDeviceManager::ValidateAdapterLuid(this, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v11, 0x8FDu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, a3, &v25);
    v14 = v25;
    v12 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, D3DDevice, 0x8FFu);
    }
    else
    {
      v15 = *((_DWORD *)v25 + 156);
      v16 = *((_DWORD *)v25 + 157);
      v17 = a5;
      if ( a4->Width > v15 )
      {
        a5->dpiX = (float)((float)v15 / (float)(int)a4->Width) * a5->dpiX;
        a4->Width = v15;
      }
      if ( a4->Height > v16 )
      {
        v17->dpiY = (float)((float)v16 / (float)(int)a4->Height) * v17->dpiY;
        a4->Height = v16;
      }
      CompatibleTextureFormat = CD3DDeviceLevel1::GetCompatibleTextureFormat(v14, a4->Format);
      a4->Format = CompatibleTextureFormat;
      if ( Format != CompatibleTextureFormat )
        v17->pixelFormat.format = CompatibleTextureFormat;
      ++*((_DWORD *)v14 + 126);
      a6 = (struct CSecondaryD2DBitmap **)v14;
      *((_DWORD *)v14 + 127) = GetCurrentThreadId();
      v19 = CD3DDeviceLevel1::CreateTexture(v14, (const struct DWM_TEXTURE2D_DESC *)a4, 0LL, &v23);
      v20 = v23;
      v12 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, v19, 0x923u);
      }
      else
      {
        SecondaryD2DBitmap = CD2DContext::CreateSecondaryD2DBitmap((struct CD2DResourceManager **)v14, v23, a4, v17, v8);
        v12 = SecondaryD2DBitmap;
        if ( SecondaryD2DBitmap < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_18016FE48, 1u, SecondaryD2DBitmap, 0x92Du);
      }
      CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&a6);
      if ( v20 )
        ((void (__fastcall *)(struct ID3D11Texture2D *))v20->lpVtbl->Release)(v20);
    }
    if ( v14 )
      CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v14 + 384));
  }
  return v12;
}
