/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800140F8
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@@Z @ 0x180012700 (-Create@CSecondaryD2DBitmap@@SAJAEBU_GUID@@U_LUID@@IIW4DXGI_FORMAT@@W4D2D1_ALPHA_MODE@@PEAPEAV1@.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800034F0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 *     ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x180016790 (-GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180034ED0 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180035658 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  CD3DDeviceLevel1 *v9; // rdi
  struct ID3D11Texture2D *v10; // r14
  int v13; // eax
  unsigned int v14; // ebx
  int D3DDevice; // eax
  struct D2D1_BITMAP_PROPERTIES1 *v16; // r14
  int v17; // ecx
  int v18; // edx
  enum DXGI_FORMAT CompatibleTextureFormat; // eax
  CD3DDeviceLevel1 *v20; // rcx
  int v21; // eax
  const struct D2D1_BITMAP_PROPERTIES1 *v22; // r9
  int SecondaryD2DBitmap; // eax
  CD3DDeviceLevel1 *v25; // [rsp+30h] [rbp-48h] BYREF
  struct ID3D11Texture2D *v27; // [rsp+98h] [rbp+20h] BYREF

  Format = a4->Format;
  v8 = a6;
  v9 = 0LL;
  v10 = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  *a6 = 0LL;
  v13 = CD3DDeviceManager::ValidateAdapterLuid(this, a3);
  v14 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v13, 0x8DCu);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, a3, &v25);
    v14 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, D3DDevice, 0x8DEu);
      v9 = v25;
      goto LABEL_14;
    }
    v9 = v25;
    v16 = a5;
    v17 = *((_DWORD *)v25 + 172);
    v18 = *((_DWORD *)v25 + 173);
    if ( a4->Width > v17 )
    {
      a5->dpiX = (float)((float)v17 / (float)(int)a4->Width) * a5->dpiX;
      a4->Width = v17;
    }
    if ( a4->Height > v18 )
    {
      v16->dpiY = (float)((float)v18 / (float)(int)a4->Height) * v16->dpiY;
      a4->Height = v18;
    }
    CompatibleTextureFormat = CD3DDeviceLevel1::GetCompatibleTextureFormat(v9, a4->Format);
    a4->Format = CompatibleTextureFormat;
    if ( Format != CompatibleTextureFormat )
      v16->pixelFormat.format = CompatibleTextureFormat;
    v21 = CD3DDeviceLevel1::CreateTexture(v20, (const struct DWM_TEXTURE2D_DESC *)a4, 0LL, &v27);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, v21, 0x8FFu);
      v10 = v27;
    }
    else
    {
      v22 = v16;
      v10 = v27;
      SecondaryD2DBitmap = CD2DContext::CreateSecondaryD2DBitmap((struct CD2DResourceManager **)v9, v27, a4, v22, v8);
      v14 = SecondaryD2DBitmap;
      if ( SecondaryD2DBitmap < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_1801ACAC0, 1u, SecondaryD2DBitmap, 0x909u);
    }
  }
  if ( v10 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v10->lpVtbl->Release)(v10);
LABEL_14:
  if ( v9 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v9 + 408));
  return v14;
}
