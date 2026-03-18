/*
 * XREFs of ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180022FC4
 * Callers:
 *     ?Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@@Z @ 0x1800746B0 (-Init@CHwFullScreenRenderTarget@@MEAAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z @ 0x18014FDCC (-UpdateFlippingChain@CHwHwndRenderTarget@@AEAAJII@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z @ 0x18002292C (-ProcessUnusable@CD3DDeviceLevel1@@QEAAX_N@Z.c)
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180022A70 (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180028200 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ @ 0x180070458 (-IsOffscreenRenderTarget@CDisplay@@QEBA_NXZ.c)
 *     ?GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ @ 0x180070478 (-GetDXGIOutput@CDisplay@@QEBAPEAUIDXGIOutput@@XZ.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800707C0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x1800B37CC (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_.c)
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800B4F38 (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDispl.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@IKK@Z @ 0x18014C468 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@.c)
 *     ?Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z @ 0x18014CB48 (-Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSwapChain(
        CD3DDeviceLevel1 *this,
        int *a2,
        __int16 a3,
        __int64 a4,
        struct CDWMOffScreenSwapChain **a5)
{
  struct CDWMOffScreenSwapChain *v5; // rbx
  __int64 v7; // r9
  struct CDWMSwapChain *v10; // r13
  int v11; // eax
  char v12; // dl
  int v13; // edi
  int v14; // r8d
  int v15; // eax
  unsigned int v16; // r8d
  int v17; // eax
  int v18; // eax
  bool v19; // al
  struct _LUID v20; // rdx
  unsigned int v21; // r8d
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  int v24; // eax
  struct CDWMSwapChain *v25; // rax
  struct CStandardSwapChain *v26; // rsi
  unsigned int v27; // r14d
  int v29; // r9d
  int v30; // eax
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // eax
  unsigned int v35; // [rsp+20h] [rbp-E0h]
  struct IDXGIOutput *DXGIOutput; // [rsp+58h] [rbp-A8h]
  struct IDXGISwapChainDWM *v37; // [rsp+60h] [rbp-A0h] BYREF
  struct CDWMSwapChain **v38; // [rsp+68h] [rbp-98h]
  struct IDXGISwapChainDWM1 *v39; // [rsp+70h] [rbp-90h] BYREF
  int v40; // [rsp+78h] [rbp-88h]
  struct CDWMOffScreenSwapChain *v41; // [rsp+80h] [rbp-80h] BYREF
  struct IDXGISwapChain *v42; // [rsp+88h] [rbp-78h] BYREF
  struct CStandardSwapChain *v43; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+98h] [rbp-68h]
  struct CDWMSwapChain *v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A8h] [rbp-58h]
  struct CDWMSwapChain *v47; // [rsp+B0h] [rbp-50h]
  struct CDWMSwapChainDDA *v48; // [rsp+B8h] [rbp-48h] BYREF
  struct CDWMOffScreenSwapChain *v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C8h] [rbp-38h] BYREF
  int v51; // [rsp+CCh] [rbp-34h]
  int v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+D4h] [rbp-2Ch]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  int v55; // [rsp+E0h] [rbp-20h]
  int v56; // [rsp+E4h] [rbp-1Ch]
  int v57; // [rsp+E8h] [rbp-18h]
  int v58; // [rsp+ECh] [rbp-14h]
  int v59; // [rsp+F0h] [rbp-10h]
  int v60; // [rsp+F4h] [rbp-Ch]
  __int64 v61; // [rsp+F8h] [rbp-8h] BYREF
  int v62; // [rsp+100h] [rbp+0h]
  int v63; // [rsp+104h] [rbp+4h]
  int v64; // [rsp+108h] [rbp+8h]
  int v65; // [rsp+110h] [rbp+10h] BYREF
  int v66; // [rsp+114h] [rbp+14h]
  __int64 v67; // [rsp+118h] [rbp+18h]
  int v68; // [rsp+124h] [rbp+24h]

  v5 = (struct CDWMOffScreenSwapChain *)*((_QWORD *)a2 + 1);
  v7 = 0LL;
  v38 = a5;
  v43 = 0LL;
  v10 = 0LL;
  v46 = *a2;
  v44 = a2[1];
  v11 = a2[5];
  v12 = 0;
  *a5 = 0LL;
  v13 = *((_DWORD *)this + 200);
  v47 = 0LL;
  v45 = 0LL;
  v48 = 0LL;
  v42 = 0LL;
  v37 = 0LL;
  v39 = 0LL;
  v41 = v5;
  v49 = v5;
  v40 = v11;
  DXGIOutput = 0LL;
  if ( v13 < 0 )
  {
    v35 = 1745;
    goto LABEL_46;
  }
  v14 = a3 & 0x4000;
  if ( v14 || a4 && CDisplay::IsOffscreenRenderTarget((CDisplay *)a4) )
    v12 = 1;
  if ( *((_QWORD *)a2 + 6) == v7 )
  {
    if ( !v12 )
    {
      DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a4);
      do
      {
        if ( (a3 & 0x2000) != 0 )
        {
          v30 = a2[1];
          v31 = *a2;
          v57 = 0;
          v51 = v30;
          v52 = a2[4];
          v54 = *(_QWORD *)(a2 + 7);
          v55 = a2[9];
          v56 = a2[10];
          v58 = a2[15];
          v60 = a2[16];
          v61 = *((_QWORD *)a2 + 1);
          v62 = a2[5];
          v63 = a2[6];
          v64 = a2[14];
          v32 = *((_QWORD *)this + 71);
          v50 = v31;
          v53 = 1;
          v59 = 3;
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64 *, struct IDXGIOutput *, struct IDXGISwapChainDWM **))(**(_QWORD **)(v32 + 32) + 24LL))(
                  *(_QWORD *)(v32 + 32),
                  *((_QWORD *)this + 69),
                  &v50,
                  &v61,
                  DXGIOutput,
                  &v37);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, struct IDXGIOutput *, struct IDXGISwapChainDWM **))(**(_QWORD **)(*((_QWORD *)this + 71) + 24LL) + 24LL))(
                  *(_QWORD *)(*((_QWORD *)this + 71) + 24LL),
                  *((_QWORD *)this + 69),
                  a2,
                  DXGIOutput,
                  &v37);
        }
        v13 = v15;
      }
      while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 848), v15) );
      LODWORD(v5) = (_DWORD)v41;
      v10 = v47;
      if ( v13 >= 0 )
        goto LABEL_12;
      v35 = 1801;
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
      v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, struct IDXGISwapChain **))(**(_QWORD **)(*((_QWORD *)this + 71) + 16LL)
                                                                                       + 80LL))(
              *(_QWORD *)(*((_QWORD *)this + 71) + 16LL),
              *((_QWORD *)this + 69),
              a2,
              &v42);
    while ( CD3DResourceManager::FreeSomeVideoMemory((CD3DDeviceLevel1 *)((char *)this + 848), v13) );
    v10 = v47;
    if ( v13 >= 0 )
      goto LABEL_12;
    v35 = 1856;
    goto LABEL_46;
  }
  if ( v14 )
  {
    v53 = 0;
    v57 = 0;
    DXGIOutput = CDisplay::GetDXGIOutput((CDisplay *)a4);
    v50 = *a2;
    v51 = a2[1];
    v52 = a2[4];
    v54 = *(_QWORD *)(a2 + 7);
    v55 = a2[9];
    v56 = a2[10];
    v58 = a2[15];
    v60 = a2[16];
    v33 = *((_QWORD *)this + 71);
    v59 = 3;
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, struct IDXGIOutput *, struct IDXGISwapChainDWM1 **))(**(_QWORD **)(v33 + 32) + 32LL))(
            *(_QWORD *)(v33 + 32),
            *((_QWORD *)this + 69),
            &v50,
            DXGIOutput,
            &v39);
  }
  else
  {
    v17 = CDWMOffScreenSwapChain::Create(
            (CD3DDeviceLevel1 *)((char *)this + 848),
            (struct DXGI_SWAP_CHAIN_DESC *)a2,
            (const struct CDisplay *)a4,
            &v41);
    v13 = v17;
    if ( v17 < 0 )
    {
      v35 = 1816;
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
      if ( v67 != __PAIR64__(HIDWORD(v49), (unsigned int)v5) && v67 != 0x100000000LL )
      {
        *(_DWORD *)(a4 + 272) = v67;
        *(_DWORD *)(a4 + 276) = v18;
      }
      if ( v68 != v40 )
        *(_DWORD *)(a4 + 284) = v68;
      if ( (v65 != v46 || v66 != v44) && (v65 || v66) )
      {
        v13 = 142213127;
        goto LABEL_22;
      }
      v19 = CDisplay::NeedsDesktopMoves((CDisplay *)a4);
      v24 = CDWMSwapChain::Create((CD3DDeviceLevel1 *)((char *)this + 848), v37, v21, &v45, v20, v23, v22, v21, v19);
      v13 = v24;
      if ( v24 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x76Eu);
        v10 = v45;
        goto LABEL_22;
      }
      v25 = v45;
      goto LABEL_21;
    }
    v35 = 1861;
    goto LABEL_48;
  }
  if ( v39 )
  {
    v17 = CDWMSwapChainDDA::Create(
            (CD3DDeviceLevel1 *)((char *)this + 848),
            v39,
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a4 + 16) + 16LL) + 56LL),
            &v48,
            *(struct _LUID *)(a4 + 232),
            *(_DWORD *)(a4 + 240),
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
    v35 = 1916;
    goto LABEL_48;
  }
  if ( !v42 )
    goto LABEL_22;
  v34 = CStandardSwapChain::Create((CD3DDeviceLevel1 *)((char *)this + 848), v42, v16, &v43);
  v13 = v34;
  if ( v34 >= 0 )
  {
    v26 = 0LL;
    *v38 = v43;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0x786u);
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
