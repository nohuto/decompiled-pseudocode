/*
 * XREFs of ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B8844
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A4648 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ??1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ @ 0x1800B8A84 (--1WarpExtension_EndCreateSharedResourceHelper@@QEAA@XZ.c)
 *     ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z @ 0x1800B9374 (--0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z.c)
 *     ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800B95DC (-InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::Create(
        CD3DDeviceLevel1 **a1,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        const struct CDisplay *a3,
        struct CDWMOffScreenSwapChain **a4)
{
  __int128 v6; // xmm0
  HANDLE v7; // r13
  CDWMOffScreenSwapChain *v8; // rdi
  char v9; // r15
  CD3DDeviceLevel1 *v10; // rax
  __int64 *v11; // rsi
  int v12; // eax
  struct ID3D11Texture2D *v13; // r14
  unsigned int v14; // ebx
  CDWMOffScreenSwapChain *v15; // rax
  struct CD3DResourceManager *v16; // rdx
  void (__fastcall **v17)(_QWORD); // rax
  __int64 (__fastcall *v18)(CDWMOffScreenSwapChain *); // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  __int128 v24; // [rsp+30h] [rbp-D0h] BYREF
  struct ID3D11Texture2D *v25; // [rsp+40h] [rbp-C0h] BYREF
  struct CD3DResourceManager *v26; // [rsp+48h] [rbp-B8h]
  struct CDisplay *v27; // [rsp+50h] [rbp-B0h]
  struct CDWMOffScreenSwapChain **v28; // [rsp+58h] [rbp-A8h]
  int v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  _DWORD v31[5]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+94h] [rbp-6Ch]
  int v33; // [rsp+9Ch] [rbp-64h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  int v35; // [rsp+A8h] [rbp-58h]
  __int128 v36; // [rsp+B0h] [rbp-50h]
  WCHAR Name[64]; // [rsp+C0h] [rbp-40h] BYREF

  v26 = (struct CD3DResourceManager *)a1;
  DWORD2(v24) = 23;
  *(_QWORD *)&v24 = "DWM Offscreen SwapChain";
  v6 = v24;
  v34 = 40LL;
  *a4 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v31[0] = a2->BufferDesc.Width;
  v9 = 0;
  v31[1] = a2->BufferDesc.Height;
  v31[4] = a2->BufferDesc.Format;
  v10 = a1[16];
  v36 = v6;
  v31[2] = 1;
  v31[3] = 1;
  v32 = 1LL;
  v33 = 0;
  v11 = (__int64 *)*((_QWORD *)v10 + 69);
  v28 = a4;
  v27 = a3;
  v25 = 0LL;
  BYTE8(v24) = 0;
  *(_QWORD *)&v24 = v11;
  if ( v11 )
    (*(void (__fastcall **)(__int64 *))(*v11 + 8))(v11);
  if ( (*((_BYTE *)a1[16] + 560) & 4) != 0 )
  {
    v20 = *v11;
    v30 = 0LL;
    v29 = 2;
    v21 = (*(__int64 (__fastcall **)(__int64 *, int *))(v20 + 24))(v11, &v29);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x94u);
      goto LABEL_19;
    }
    v9 = 1;
    v35 = 2;
    BYTE8(v24) = 1;
  }
  else
  {
    v35 = 0;
  }
  v12 = CD3DDeviceLevel1::CreateTexture(a1[16], (const struct DWM_TEXTURE2D_DESC *)v31, 0LL, &v25);
  v13 = v25;
  v14 = v12;
  if ( v12 < 0 )
  {
    v23 = 159;
    goto LABEL_32;
  }
  if ( v9 )
  {
    v22 = *v11;
    v29 = 3;
    v12 = (*(__int64 (__fastcall **)(__int64 *, int *))(v22 + 24))(v11, &v29);
    v14 = v12;
    if ( v12 < 0 )
    {
      v23 = 169;
    }
    else
    {
      BYTE8(v24) = 0;
      v12 = StringCbPrintfW(Name, 0x80uLL, (size_t *)L"Local\\WarpResource_0x%I64x", v30);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v7 = OpenFileMappingW(0xF001Fu, 0, Name);
        goto LABEL_7;
      }
      v23 = 175;
    }
LABEL_32:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v23);
    goto LABEL_13;
  }
LABEL_7:
  v15 = (CDWMOffScreenSwapChain *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                             + 16LL))(
                                    WPF::g_pProcessHeap,
                                    496LL);
  if ( v15 )
    v8 = CDWMOffScreenSwapChain::CDWMOffScreenSwapChain(v15, a2, v13);
  if ( !v8 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xBFu);
    goto LABEL_13;
  }
  (**(void (__fastcall ***)(CDWMOffScreenSwapChain *))v8)(v8);
  v16 = v26;
  *((_QWORD *)v8 + 47) = v7;
  v7 = 0LL;
  *((_QWORD *)v8 + 37) = *((_QWORD *)v16 + 16);
  v17 = *(void (__fastcall ***)(_QWORD))v8;
  *((_OWORD *)v8 + 19) = *(_OWORD *)&a2->BufferDesc.Width;
  v18 = (__int64 (__fastcall *)(CDWMOffScreenSwapChain *))v17[31];
  *((_OWORD *)v8 + 20) = *(_OWORD *)&a2->BufferDesc.Format;
  *((_OWORD *)v8 + 21) = *(_OWORD *)&a2->SampleDesc.Quality;
  *((_OWORD *)v8 + 22) = *(_OWORD *)&a2->OutputWindow;
  *((_QWORD *)v8 + 46) = *(_QWORD *)&a2->Flags;
  v12 = v18(v8);
  v14 = v12;
  if ( v12 < 0 )
  {
    v23 = 202;
    goto LABEL_32;
  }
  v12 = CDWMOffScreenSwapChain::InitForGdiBlt(v8, a2, v27);
  v14 = v12;
  if ( v12 < 0 )
  {
    v23 = 203;
    goto LABEL_32;
  }
  *v28 = v8;
  v8 = 0LL;
LABEL_13:
  if ( v13 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v13->lpVtbl->Release)(v13);
  if ( v8 )
    (*(void (__fastcall **)(CDWMOffScreenSwapChain *))(*(_QWORD *)v8 + 8LL))(v8);
  if ( v7 )
    CloseHandle(v7);
LABEL_19:
  WarpExtension_EndCreateSharedResourceHelper::~WarpExtension_EndCreateSharedResourceHelper((WarpExtension_EndCreateSharedResourceHelper *)&v24);
  return v14;
}
