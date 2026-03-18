/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18008F758
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18008E790 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014092C (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180015A60 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x1800583CC (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18008B548 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x18008CC24 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180090930 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180090964 (-GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x18009687C (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@IKK@Z @ 0x18013C4A8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@.c)
 *     ?Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z @ 0x18013CBA8 (-Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        __int16 a3,
        __int64 a4,
        struct CDWMOffScreenSwapChain **a5)
{
  struct CDWMOffScreenSwapChain *RefreshRate; // rbx
  HWND v7; // r9
  struct CDWMSwapChain *v10; // r13
  DXGI_MODE_SCANLINE_ORDER ScanlineOrdering; // eax
  char v12; // dl
  int v13; // edi
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  int v18; // eax
  bool v19; // al
  struct _LUID v20; // r8
  unsigned int v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  int v24; // eax
  struct CDWMSwapChain *v25; // rax
  struct CStandardSwapChain *v26; // rsi
  unsigned int v27; // r14d
  int v29; // r9d
  UINT v30; // eax
  UINT v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  struct IDXGIOutput *DXGIOutput; // [rsp+58h] [rbp-A8h]
  struct IDXGISwapChainDWM *v37; // [rsp+60h] [rbp-A0h] BYREF
  struct CDWMSwapChain **v38; // [rsp+68h] [rbp-98h]
  struct IDXGISwapChainDWM1 *v39; // [rsp+70h] [rbp-90h] BYREF
  DXGI_MODE_SCANLINE_ORDER v40; // [rsp+78h] [rbp-88h]
  struct CDWMOffScreenSwapChain *v41; // [rsp+80h] [rbp-80h] BYREF
  struct IDXGISwapChain *v42; // [rsp+88h] [rbp-78h] BYREF
  struct CStandardSwapChain *v43; // [rsp+90h] [rbp-70h] BYREF
  UINT Height; // [rsp+98h] [rbp-68h]
  struct CDWMSwapChain *v45; // [rsp+A0h] [rbp-60h] BYREF
  UINT Width; // [rsp+A8h] [rbp-58h]
  struct CDWMSwapChain *v47; // [rsp+B0h] [rbp-50h]
  struct CDWMSwapChainDDA *v48; // [rsp+B8h] [rbp-48h] BYREF
  struct CDWMOffScreenSwapChain *v49; // [rsp+C0h] [rbp-40h]
  UINT v50; // [rsp+C8h] [rbp-38h] BYREF
  UINT v51; // [rsp+CCh] [rbp-34h]
  DXGI_FORMAT Format; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D4h] [rbp-2Ch]
  DXGI_SAMPLE_DESC SampleDesc; // [rsp+D8h] [rbp-28h]
  DXGI_USAGE BufferUsage; // [rsp+E0h] [rbp-20h]
  UINT BufferCount; // [rsp+E4h] [rbp-1Ch]
  int v57; // [rsp+E8h] [rbp-18h]
  DXGI_SWAP_EFFECT SwapEffect; // [rsp+ECh] [rbp-14h]
  int v59; // [rsp+F0h] [rbp-10h]
  UINT Flags; // [rsp+F4h] [rbp-Ch]
  DXGI_RATIONAL v61; // [rsp+F8h] [rbp-8h] BYREF
  DXGI_MODE_SCANLINE_ORDER v62; // [rsp+100h] [rbp+0h]
  DXGI_MODE_SCALING Scaling; // [rsp+104h] [rbp+4h]
  BOOL Windowed; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+110h] [rbp+10h] BYREF
  int v66; // [rsp+114h] [rbp+14h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+124h] [rbp+24h]

  RefreshRate = (struct CDWMOffScreenSwapChain *)a2->BufferDesc.RefreshRate;
  v7 = 0LL;
  v38 = a5;
  v43 = 0LL;
  v10 = 0LL;
  Width = a2->BufferDesc.Width;
  Height = a2->BufferDesc.Height;
  ScanlineOrdering = a2->BufferDesc.ScanlineOrdering;
  v12 = 0;
  *a5 = 0LL;
  v13 = *((_DWORD *)this + 209);
  v47 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v41 = RefreshRate;
  v49 = RefreshRate;
  v40 = ScanlineOrdering;
  DXGIOutput = 0LL;
  if ( v13 < 0 )
  {
    v35 = 1781;
    goto LABEL_46;
  }
  v14 = a3 & 0x4000;
  if ( v14 || a4 && (unsigned __int8)CDisplay::IsOffscreenRenderTarget((CDisplay *)a4) )
    v12 = 1;
  if ( a2->OutputWindow == v7 )
  {
    if ( !v12 )
    {
      DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a4);
      do
      {
        if ( (a3 & 0x2000) != 0 )
        {
          v30 = a2->BufferDesc.Height;
          v31 = a2->BufferDesc.Width;
          v57 = 0;
          v51 = v30;
          Format = a2->BufferDesc.Format;
          SampleDesc = a2->SampleDesc;
          BufferUsage = a2->BufferUsage;
          BufferCount = a2->BufferCount;
          SwapEffect = a2->SwapEffect;
          Flags = a2->Flags;
          v61 = a2->BufferDesc.RefreshRate;
          v62 = a2->BufferDesc.ScanlineOrdering;
          Scaling = a2->BufferDesc.Scaling;
          Windowed = a2->Windowed;
          v32 = *((_QWORD *)this + 70);
          v50 = v31;
          v53 = 1;
          v59 = 3;
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UINT *, DXGI_RATIONAL *, struct IDXGIOutput *, struct IDXGISwapChainDWM **))(**(_QWORD **)(v32 + 32) + 24LL))(
                  *(_QWORD *)(v32 + 32),
                  *((_QWORD *)this + 68),
                  &v50,
                  &v61,
                  DXGIOutput,
                  &v37);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IDXGIOutput *, struct IDXGISwapChainDWM **))(**(_QWORD **)(*((_QWORD *)this + 70) + 24LL) + 24LL))(
                  *(_QWORD *)(*((_QWORD *)this + 70) + 24LL),
                  *((_QWORD *)this + 68),
                  a2,
                  DXGIOutput,
                  &v37);
        }
        v13 = v15;
      }
      while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), v15) );
      LODWORD(RefreshRate) = (_DWORD)v41;
      v10 = v47;
      if ( v13 >= 0 )
        goto LABEL_12;
      v35 = 1837;
LABEL_46:
      v29 = v13;
LABEL_49:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, v35);
      goto LABEL_22;
    }
  }
  else if ( !v12 )
  {
    do
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IDXGISwapChain **))(**(_QWORD **)(*((_QWORD *)this + 70) + 16LL) + 80LL))(
              *(_QWORD *)(*((_QWORD *)this + 70) + 16LL),
              *((_QWORD *)this + 68),
              a2,
              &v42);
    while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 896), v13) );
    v10 = v47;
    if ( v13 >= 0 )
      goto LABEL_12;
    v35 = 1892;
    goto LABEL_46;
  }
  if ( v14 )
  {
    v53 = 0;
    v57 = 0;
    DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a4);
    v50 = a2->BufferDesc.Width;
    v51 = a2->BufferDesc.Height;
    Format = a2->BufferDesc.Format;
    SampleDesc = a2->SampleDesc;
    BufferUsage = a2->BufferUsage;
    BufferCount = a2->BufferCount;
    SwapEffect = a2->SwapEffect;
    Flags = a2->Flags;
    v33 = *((_QWORD *)this + 70);
    v59 = 3;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UINT *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(**(_QWORD **)(v33 + 32) + 32LL))(
            *(_QWORD *)(v33 + 32),
            *((_QWORD *)this + 68),
            &v50,
            DXGIOutput,
            &v39);
  }
  else
  {
    v17 = CDWMOffScreenSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)this + 896),
            a2,
            (const struct CDisplay *)a4,
            &v41);
    v13 = v17;
    if ( v17 < 0 )
    {
      v35 = 1852;
LABEL_48:
      v29 = v17;
      goto LABEL_49;
    }
    *a5 = v41;
  }
LABEL_12:
  if ( v37 )
  {
    v17 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, int *))(*(_QWORD *)v37 + 80LL))(v37, &v65);
    v13 = v17;
    if ( v17 >= 0 )
    {
      v18 = HIDWORD(v67);
      if ( v67 != __PAIR64__(HIDWORD(v49), (unsigned int)RefreshRate) && v67 != 0x100000000LL )
      {
        *(_DWORD *)(a4 + 876) = v67;
        *(_DWORD *)(a4 + 880) = v18;
      }
      if ( v68 != v40 )
        *(_DWORD *)(a4 + 888) = v68;
      if ( (v65 != Width || v66 != Height) && (v65 || v66) )
      {
        v13 = 142213127;
        goto LABEL_22;
      }
      v19 = CDisplay::NeedsDesktopMoves((CDisplay *)a4);
      v24 = CDWMSwapChain::Create(
              (CD3DDeviceLevel1 *)((char *)this + 896),
              v37,
              v20.LowPart,
              &v45,
              v20,
              v23,
              v22,
              v21,
              v19);
      v13 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x792u);
        v10 = v45;
        goto LABEL_22;
      }
      v25 = v45;
      goto LABEL_21;
    }
    v35 = 1897;
    goto LABEL_48;
  }
  if ( v39 )
  {
    v17 = CDWMSwapChainDDA::Create(
            (CD3DDeviceLevel1 *)((char *)this + 896),
            v39,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 16LL) + 56LL),
            &v48,
            *(struct _LUID *)(a4 + 832),
            *(_DWORD *)(a4 + 848),
            *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4LL),
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 16LL) + 56LL));
    v13 = v17;
    if ( v17 >= 0 )
    {
      v25 = v48;
LABEL_21:
      v10 = 0LL;
      *v38 = v25;
LABEL_22:
      v26 = 0LL;
      goto LABEL_23;
    }
    v35 = 1952;
    goto LABEL_48;
  }
  if ( !v42 )
    goto LABEL_22;
  v34 = CStandardSwapChain::Create((CD3DDeviceLevel1 *)((char *)this + 896), v42, v16, &v43);
  v13 = v34;
  if ( v34 >= 0 )
  {
    v26 = 0LL;
    *v38 = v43;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x7AAu);
    v26 = v43;
  }
LABEL_23:
  v27 = CD3DDeviceLevel1::TranslateDriverError((__int64)this, v13, 4u);
  if ( v27 == -2003304307 )
    CD3DDeviceLevel1::ProcessUnusable(this, 0);
  if ( v42 )
    ((void (__fastcall *)(struct IDXGISwapChain *))v42->lpVtbl->Release)(v42);
  if ( v37 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM *))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v39 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v39 + 16LL))(v39);
  if ( v10 )
    (*(void (__fastcall **)(struct CDWMSwapChain *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v26 )
    (*(void (__fastcall **)(struct CStandardSwapChain *))(*(_QWORD *)v26 + 8LL))(v26);
  if ( DXGIOutput )
    ((void (__fastcall *)(struct IDXGIOutput *))DXGIOutput->lpVtbl->Release)(DXGIOutput);
  return v27;
}
