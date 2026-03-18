/*
 * XREFs of ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180055A60
 * Callers:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x1800565AC (-CreateFromSharedHandle@CD2DBitmap@@SAJAEBU_GUID@@U_LUID@@PEAXW4D2D1_ALPHA_MODE@@MMVDisplayId@@P.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x1800193FC (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180055818 (-GetD3DDevice@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180055C38 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180072CE0 (-CreateD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMA.c)
 *     ??1?$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ @ 0x180083270 (--1-$CGuard@VCD3DDeviceLevel1@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsD2DBitmap(
        __int64 a1,
        const struct _GUID *a2,
        struct _LUID a3,
        void *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _QWORD *a9)
{
  int v9; // r14d
  CD3DDeviceLevel1 *v10; // rsi
  int v14; // edi
  int v15; // eax
  int D3DDevice; // eax
  DWORD CurrentThreadId; // eax
  void *v18; // r9
  struct D3D11_SUBRESOURCE_DATA *v19; // r8
  int v20; // eax
  int v21; // eax
  CD3DDeviceLevel1 *v23; // [rsp+30h] [rbp-71h] BYREF
  void *v24; // [rsp+38h] [rbp-69h]
  struct ID3D11Texture2D *v25; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-59h] BYREF
  int v27; // [rsp+50h] [rbp-51h]
  int v28; // [rsp+54h] [rbp-4Dh]
  BOOL v29; // [rsp+58h] [rbp-49h]
  __int64 v30; // [rsp+60h] [rbp-41h]
  struct D3D11_TEXTURE2D_DESC v31; // [rsp+68h] [rbp-39h] BYREF

  v9 = a5;
  v10 = 0LL;
  v25 = 0LL;
  v24 = a4;
  v23 = 0LL;
  v14 = -2147024809;
  *a9 = 0LL;
  if ( a5 && (a5 == 1 || a5 == 3) )
    v14 = 0;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v14, 0x945u);
  }
  else
  {
    v15 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)(a1 - 16), a3);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v15, 0x946u);
    }
    else
    {
      D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a2, a3, &v23);
      v14 = D3DDevice;
      if ( D3DDevice < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, D3DDevice, 0x948u);
        v10 = v23;
      }
      else
      {
        v10 = v23;
        ++*((_DWORD *)v23 + 128);
        CurrentThreadId = GetCurrentThreadId();
        v18 = v24;
        *((_DWORD *)v10 + 129) = CurrentThreadId;
        v20 = CD3DDeviceLevel1::OpenSharedTexture((__int64 **)v10, &v31, v19, v18, 1, &v25);
        v14 = v20;
        if ( v20 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v20, 0x953u);
        }
        else
        {
          if ( v31.Format == DXGI_FORMAT_R8_UNORM || v31.Format == DXGI_FORMAT_R8G8_UNORM )
            v9 = 3;
          v29 = 0;
          v24 = (void *)__PAIR64__(v9, v31.Format);
          v26 = __PAIR64__(v9, v31.Format);
          v27 = a6;
          v28 = a7;
          if ( (v31.BindFlags & 0x20) != 0 && v31.Format != DXGI_FORMAT_R10G10B10A2_UNORM )
            v29 = v31.Format != DXGI_FORMAT_B8G8R8X8_UNORM;
          v30 = 0LL;
          v21 = CD2DContext::CreateD2DBitmap(v10, v25, &v31, &v26, a8, a9);
          v14 = v21;
          if ( v21 < 0 )
            MilInstrumentationCheckHR(0x14u, &dword_1801663C8, 1u, v21, 0x97Au);
        }
        CGuard<CD3DDeviceLevel1>::~CGuard<CD3DDeviceLevel1>(&v23);
      }
    }
  }
  if ( v25 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v25->lpVtbl->Release)(v25);
  if ( v10 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v10 + 392));
  return (unsigned int)v14;
}
