/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x18007BA20 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 * Callees:
 *     ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180034398 (-GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800347F8 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180034D5C (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x18007E9EC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18009F438 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x1800B6B78 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B8844 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ @ 0x18010F230 (-ProcessUnusable@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@IKK@Z @ 0x18017D034 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@.c)
 *     ?Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z @ 0x18017D684 (-Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        __int16 a3,
        __int64 a4,
        struct CDWMOffScreenSwapChain **a5)
{
  struct CDWMOffScreenSwapChain *RefreshRate; // rbx
  HWND v6; // r10
  struct CDWMSwapChain *v10; // r12
  DXGI_MODE_SCANLINE_ORDER ScanlineOrdering; // ecx
  char v12; // dl
  int v13; // edi
  int v14; // r8d
  struct IDXGIOutput *DXGIOutput; // r12
  int v16; // eax
  char v17; // al
  unsigned int v18; // r8d
  struct CDWMSwapChain **v19; // r15
  int v20; // eax
  int v21; // eax
  char v22; // al
  struct _LUID v23; // r8
  unsigned int v24; // r9d
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  int v27; // eax
  struct CDWMSwapChain *v28; // rax
  struct CStandardSwapChain *v29; // rsi
  unsigned int v30; // ebx
  int v32; // eax
  UINT v33; // eax
  UINT v34; // ecx
  __int64 v35; // rax
  char v36; // al
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  struct IDXGISwapChainDWM *v40; // [rsp+58h] [rbp-A8h] BYREF
  struct CDWMOffScreenSwapChain **v41; // [rsp+60h] [rbp-A0h]
  DXGI_MODE_SCANLINE_ORDER v42; // [rsp+68h] [rbp-98h]
  UINT Width; // [rsp+6Ch] [rbp-94h]
  UINT Height; // [rsp+70h] [rbp-90h]
  struct CDWMSwapChain *v45; // [rsp+78h] [rbp-88h] BYREF
  struct CStandardSwapChain *v46; // [rsp+80h] [rbp-80h] BYREF
  struct IDXGISwapChain *v47; // [rsp+88h] [rbp-78h] BYREF
  struct IDXGISwapChainDWM1 *v48; // [rsp+90h] [rbp-70h] BYREF
  struct IDXGIOutput *v49; // [rsp+98h] [rbp-68h]
  struct CDWMOffScreenSwapChain *v50; // [rsp+A0h] [rbp-60h] BYREF
  struct CDWMSwapChain *v51; // [rsp+A8h] [rbp-58h]
  struct CDWMSwapChainDDA *v52; // [rsp+B0h] [rbp-50h] BYREF
  struct CDWMOffScreenSwapChain *v53; // [rsp+B8h] [rbp-48h]
  UINT v54; // [rsp+C0h] [rbp-40h] BYREF
  UINT v55; // [rsp+C4h] [rbp-3Ch]
  DXGI_FORMAT Format; // [rsp+C8h] [rbp-38h]
  int v57; // [rsp+CCh] [rbp-34h]
  DXGI_SAMPLE_DESC SampleDesc; // [rsp+D0h] [rbp-30h]
  DXGI_USAGE BufferUsage; // [rsp+D8h] [rbp-28h]
  UINT BufferCount; // [rsp+DCh] [rbp-24h]
  int v61; // [rsp+E0h] [rbp-20h]
  DXGI_SWAP_EFFECT SwapEffect; // [rsp+E4h] [rbp-1Ch]
  int v63; // [rsp+E8h] [rbp-18h]
  UINT Flags; // [rsp+ECh] [rbp-14h]
  DXGI_RATIONAL v65; // [rsp+F0h] [rbp-10h] BYREF
  DXGI_MODE_SCANLINE_ORDER v66; // [rsp+F8h] [rbp-8h]
  DXGI_MODE_SCALING Scaling; // [rsp+FCh] [rbp-4h]
  BOOL Windowed; // [rsp+100h] [rbp+0h]
  int v69; // [rsp+110h] [rbp+10h] BYREF
  int v70; // [rsp+114h] [rbp+14h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  int v72; // [rsp+124h] [rbp+24h]

  RefreshRate = (struct CDWMOffScreenSwapChain *)a2->BufferDesc.RefreshRate;
  v6 = 0LL;
  v41 = a5;
  v46 = 0LL;
  v10 = 0LL;
  Width = a2->BufferDesc.Width;
  Height = a2->BufferDesc.Height;
  ScanlineOrdering = a2->BufferDesc.ScanlineOrdering;
  v12 = 0;
  *a5 = 0LL;
  v13 = *((_DWORD *)this + 206);
  v51 = 0LL;
  v45 = 0LL;
  v52 = 0LL;
  v47 = 0LL;
  v40 = 0LL;
  v48 = 0LL;
  v50 = RefreshRate;
  v53 = RefreshRate;
  v42 = ScanlineOrdering;
  v49 = 0LL;
  if ( v13 < 0 )
  {
    if ( IsOOM(v13) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x747u);
    goto LABEL_24;
  }
  v14 = a3 & 0x4000;
  if ( v14 || a4 && (unsigned __int8)CDisplay::IsOffscreenRenderTarget((CDisplay *)a4) )
    v12 = 1;
  if ( a2->OutputWindow == v6 )
  {
    if ( !v12 )
    {
      DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a4);
      v49 = DXGIOutput;
      do
      {
        if ( (a3 & 0x2000) != 0 )
        {
          v33 = a2->BufferDesc.Height;
          v34 = a2->BufferDesc.Width;
          v61 = 0;
          v55 = v33;
          Format = a2->BufferDesc.Format;
          SampleDesc = a2->SampleDesc;
          BufferUsage = a2->BufferUsage;
          BufferCount = a2->BufferCount;
          SwapEffect = a2->SwapEffect;
          Flags = a2->Flags;
          v65 = a2->BufferDesc.RefreshRate;
          v66 = a2->BufferDesc.ScanlineOrdering;
          Scaling = a2->BufferDesc.Scaling;
          Windowed = a2->Windowed;
          v35 = *((_QWORD *)this + 79);
          v54 = v34;
          v57 = 1;
          v63 = 3;
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UINT *, DXGI_RATIONAL *, struct IDXGIOutput *, struct IDXGISwapChainDWM **))(**(_QWORD **)(v35 + 32) + 24LL))(
                  *(_QWORD *)(v35 + 32),
                  *((_QWORD *)this + 71),
                  &v54,
                  &v65,
                  DXGIOutput,
                  &v40);
        }
        else
        {
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IDXGIOutput *, struct IDXGISwapChainDWM **))(**(_QWORD **)(*((_QWORD *)this + 79) + 24LL) + 24LL))(
                  *(_QWORD *)(*((_QWORD *)this + 79) + 24LL),
                  *((_QWORD *)this + 71),
                  a2,
                  DXGIOutput,
                  &v40);
        }
        v13 = v16;
      }
      while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 880), v16) );
      v17 = IsOOM(v13);
      LODWORD(RefreshRate) = (_DWORD)v50;
      v10 = v51;
      if ( v17 && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      if ( v13 < 0 )
      {
        if ( IsOOM(v13) && IsCompBuild() )
          NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x77Fu);
        goto LABEL_24;
      }
      goto LABEL_13;
    }
  }
  else if ( !v12 )
  {
    do
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_SWAP_CHAIN_DESC *, struct IDXGISwapChain **))(**(_QWORD **)(*((_QWORD *)this + 79) + 16LL) + 80LL))(
              *(_QWORD *)(*((_QWORD *)this + 79) + 16LL),
              *((_QWORD *)this + 71),
              a2,
              &v47);
    while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 880), v13) );
    v36 = IsOOM(v13);
    v10 = v51;
    if ( v36 && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    if ( v13 < 0 )
    {
      if ( IsOOM(v13) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7B6u);
      goto LABEL_24;
    }
    goto LABEL_13;
  }
  if ( v14 )
  {
    v57 = 0;
    v61 = 0;
    v49 = CDisplay::GetDXGIOutput((CDisplay *)a4);
    v54 = a2->BufferDesc.Width;
    v55 = a2->BufferDesc.Height;
    Format = a2->BufferDesc.Format;
    SampleDesc = a2->SampleDesc;
    BufferUsage = a2->BufferUsage;
    BufferCount = a2->BufferCount;
    SwapEffect = a2->SwapEffect;
    Flags = a2->Flags;
    v37 = *((_QWORD *)this + 79);
    v63 = 3;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, UINT *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(**(_QWORD **)(v37 + 32) + 32LL))(
            *(_QWORD *)(v37 + 32),
            *((_QWORD *)this + 71),
            &v54,
            v49,
            &v48);
LABEL_13:
    v19 = v41;
    goto LABEL_14;
  }
  v32 = CDWMOffScreenSwapChain::Create((CD3DDeviceLevel1 *)((char *)this + 880), a2, (const struct CDisplay *)a4, &v50);
  v13 = v32;
  if ( v32 < 0 )
  {
    if ( IsOOM(v32) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x78Eu);
    goto LABEL_24;
  }
  v19 = v41;
  *v41 = v50;
LABEL_14:
  if ( v40 )
  {
    v20 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, int *))(*(_QWORD *)v40 + 80LL))(v40, &v69);
    v13 = v20;
    if ( v20 < 0 )
    {
      if ( IsOOM(v20) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7BBu);
      goto LABEL_24;
    }
    v21 = HIDWORD(v71);
    if ( v71 != __PAIR64__(HIDWORD(v53), (unsigned int)RefreshRate) && v71 != 0x100000000LL )
    {
      *(_DWORD *)(a4 + 272) = v71;
      *(_DWORD *)(a4 + 276) = v21;
    }
    if ( v72 != v42 )
      *(_DWORD *)(a4 + 284) = v72;
    if ( (v69 != Width || v70 != Height) && (v69 || v70) )
    {
      v13 = 142213127;
      goto LABEL_24;
    }
    v22 = CDisplay::NeedsDesktopMoves((CDisplay *)a4);
    v27 = CDWMSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)this + 880),
            v40,
            v23.LowPart,
            &v45,
            v23,
            v26,
            v25,
            v24,
            v22);
    v13 = v27;
    if ( v27 < 0 )
    {
      if ( IsOOM(v27) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7E4u);
      v10 = v45;
      goto LABEL_24;
    }
    v28 = v45;
    goto LABEL_23;
  }
  if ( v48 )
  {
    v38 = CDWMSwapChainDDA::Create(
            (CD3DDeviceLevel1 *)((char *)this + 880),
            v48,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 16LL) + 56LL),
            &v52,
            *(struct _LUID *)(a4 + 232),
            *(_DWORD *)(a4 + 240),
            *(_DWORD *)(*(_QWORD *)(a4 + 16) + 4LL),
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 16LL) + 56LL));
    v13 = v38;
    if ( v38 < 0 )
    {
      if ( IsOOM(v38) && IsCompBuild() )
        NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7F2u);
      goto LABEL_24;
    }
    v28 = v52;
LABEL_23:
    *v19 = v28;
    v10 = 0LL;
LABEL_24:
    v29 = 0LL;
    goto LABEL_25;
  }
  if ( !v47 )
    goto LABEL_24;
  v39 = CStandardSwapChain::Create((CD3DDeviceLevel1 *)((char *)this + 880), v47, v18, &v46);
  v13 = v39;
  if ( v39 < 0 )
  {
    if ( IsOOM(v39) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7FCu);
    v29 = v46;
  }
  else
  {
    v29 = 0LL;
    *v19 = v46;
  }
LABEL_25:
  v30 = CD3DDeviceLevel1::TranslateDriverError((__int64)this, v13, 3);
  if ( v30 == -2003304307 )
    CD3DDeviceLevel1::ProcessUnusable(this);
  if ( v47 )
    ((void (__fastcall *)(struct IDXGISwapChain *))v47->lpVtbl->Release)(v47);
  if ( v40 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM *))(*(_QWORD *)v40 + 16LL))(v40);
  if ( v48 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v48 + 16LL))(v48);
  if ( v10 )
    (*(void (__fastcall **)(struct CDWMSwapChain *))(*(_QWORD *)v10 + 8LL))(v10);
  if ( v29 )
    (*(void (__fastcall **)(struct CStandardSwapChain *))(*(_QWORD *)v29 + 8LL))(v29);
  if ( v49 )
    ((void (__fastcall *)(struct IDXGIOutput *))v49->lpVtbl->Release)(v49);
  return v30;
}
