/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B4F38
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180022FC4 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180024850 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002ACD0 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800B51A0 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z @ 0x1800B59C8 (--0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800B5C7C (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        const struct CDisplay *a3,
        struct CDWMOffScreenSwapChain **a4)
{
  void *v4; // r15
  UINT Width; // eax
  struct CD3DResourceManager *v6; // rdi
  char v7; // r13
  __int64 v10; // rax
  __int64 *v11; // rsi
  int v12; // eax
  struct ID3D11Texture2D *v13; // r15
  int v14; // edi
  HANDLE v15; // rsi
  CDWMOffScreenSwapChain *v16; // rax
  struct CDWMOffScreenSwapChain *v17; // rdi
  struct CD3DResourceManager *v18; // r13
  _QWORD *v19; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+30h] [rbp-D0h]
  __int128 v26; // [rsp+38h] [rbp-C8h] BYREF
  struct ID3D11Texture2D *v27; // [rsp+48h] [rbp-B8h] BYREF
  struct CD3DResourceManager *v28; // [rsp+50h] [rbp-B0h]
  struct CDisplay *v29; // [rsp+58h] [rbp-A8h]
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+68h] [rbp-98h]
  _DWORD v32[10]; // [rsp+80h] [rbp-80h] BYREF
  int v33; // [rsp+A8h] [rbp-58h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  WCHAR Name[64]; // [rsp+C0h] [rbp-40h] BYREF

  v27 = 0LL;
  *(_QWORD *)&v26 = "DWM Offscreen SwapChain";
  v4 = 0LL;
  Width = a2->BufferDesc.Width;
  v6 = a1;
  v32[6] = 0;
  v7 = 0;
  v32[7] = 0;
  v32[9] = 0;
  v32[0] = Width;
  v32[1] = a2->BufferDesc.Height;
  v32[4] = a2->BufferDesc.Format;
  v10 = *((_QWORD *)a1 + 15);
  DWORD2(v26) = 23;
  v28 = a1;
  v32[2] = 1;
  v34 = v26;
  v32[3] = 1;
  v32[5] = 1;
  v32[8] = 40;
  v11 = *(__int64 **)(v10 + 536);
  v29 = a3;
  hObject = 0LL;
  BYTE8(v26) = 0;
  *(_QWORD *)&v26 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
  if ( (*(_BYTE *)(*((_QWORD *)v6 + 15) + 544LL) & 4) != 0 )
  {
    v21 = *v11;
    v31 = 0LL;
    v30 = 2;
    v22 = (*(__int64 (__fastcall **)(__int64 *, int *))(v21 + 24))(v11, &v30);
    v14 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x91u);
      goto LABEL_16;
    }
    v6 = v28;
    v7 = 1;
    BYTE8(v26) = 1;
    v33 = 2;
  }
  else
  {
    v33 = 0;
  }
  v12 = CD3DDeviceLevel1::CreateTexture(
          *((CD3DDeviceLevel1 **)v6 + 15),
          (const struct DWM_TEXTURE2D_DESC *)v32,
          0LL,
          &v27);
  v13 = v27;
  v14 = v12;
  if ( v12 < 0 )
  {
    v24 = 156;
LABEL_33:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v24);
    goto LABEL_13;
  }
  if ( !v7 )
  {
    v15 = 0LL;
    goto LABEL_8;
  }
  v23 = *v11;
  v30 = 3;
  v12 = (*(__int64 (__fastcall **)(__int64 *, int *))(v23 + 24))(v11, &v30);
  v14 = v12;
  if ( v12 < 0 )
  {
    v24 = 166;
    goto LABEL_33;
  }
  BYTE8(v26) = 0;
  v12 = StringCbPrintfW(Name, 0x80uLL, L"Local\\WarpResource_0x%I64x", v31);
  v14 = v12;
  if ( v12 < 0 )
  {
    v24 = 172;
    goto LABEL_33;
  }
  v15 = OpenFileMappingW(0xF001Fu, 0, Name);
  hObject = v15;
LABEL_8:
  v16 = (CDWMOffScreenSwapChain *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                    WPF::g_pProcessHeap,
                                    496LL);
  if ( v16 )
    v17 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v16, a2, v13);
  else
    v17 = 0LL;
  *a4 = v17;
  if ( !v17 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBCu);
    goto LABEL_13;
  }
  (**(void (__fastcall ***)(struct CDWMOffScreenSwapChain *))v17)(v17);
  v18 = v28;
  *((_QWORD *)*a4 + 47) = v15;
  hObject = 0LL;
  *((_QWORD *)*a4 + 37) = *((_QWORD *)v18 + 15);
  v19 = *a4;
  *((_OWORD *)v19 + 19) = *(_OWORD *)&a2->BufferDesc.Width;
  *((_OWORD *)v19 + 20) = *(_OWORD *)&a2->BufferDesc.Format;
  *((_OWORD *)v19 + 21) = *(_OWORD *)&a2->SampleDesc.Quality;
  *((_OWORD *)v19 + 22) = *(_OWORD *)&a2->OutputWindow;
  v19[46] = *(_QWORD *)&a2->Flags;
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a4 + 248LL))(*a4, v18);
  v14 = v12;
  if ( v12 < 0 )
  {
    v24 = 199;
    goto LABEL_33;
  }
  v12 = CDWMOffScreenSwapChain::InitForGdiBlt(*a4, a2, v29);
  v14 = v12;
  if ( v12 < 0 )
  {
    v24 = 200;
    goto LABEL_33;
  }
LABEL_13:
  if ( v13 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v13->lpVtbl->Release)(v13);
  v4 = hObject;
LABEL_16:
  if ( v14 < 0 && *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    *a4 = 0LL;
  }
  if ( v4 )
    CloseHandle(v4);
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v26);
  return (unsigned int)v14;
}
