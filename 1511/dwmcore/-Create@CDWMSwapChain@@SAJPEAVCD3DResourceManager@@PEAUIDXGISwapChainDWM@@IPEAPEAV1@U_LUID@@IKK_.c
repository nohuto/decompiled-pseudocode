/*
 * XREFs of ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x1800B37CC
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180022FC4 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@U_LUID@@IKK_N@Z @ 0x180073BA8 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDWMSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChainDWM *a2,
        __int64 a3,
        struct CDWMSwapChain **a4,
        struct _LUID a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        bool a9)
{
  __int64 v10; // rax
  int v13; // eax
  int v14; // edi
  CDWMSwapChain *v15; // rax
  struct CDWMSwapChain *v16; // rdi
  unsigned int v18; // [rsp+20h] [rbp-91h]
  struct _LUID v19; // [rsp+28h] [rbp-89h]
  struct IDXGISwapChainDWM1 *v20; // [rsp+50h] [rbp-61h] BYREF
  struct IDXGIOutput *v21; // [rsp+58h] [rbp-59h] BYREF
  DXGI_SWAP_CHAIN_DESC v22; // [rsp+60h] [rbp-51h] BYREF

  *a4 = 0LL;
  v10 = *(_QWORD *)a2;
  v21 = 0LL;
  v20 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, DXGI_SWAP_CHAIN_DESC *))(v10 + 80))(a2, &v22);
  v14 = v13;
  if ( v13 < 0 )
  {
    v18 = 59;
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, struct IDXGIOutput **))(*(_QWORD *)a2 + 104LL))(
            a2,
            &v21);
    v14 = v13;
    if ( v13 < 0 )
    {
      v18 = 63;
    }
    else
    {
      (**(void (__fastcall ***)(struct IDXGISwapChainDWM *, GUID *, struct IDXGISwapChainDWM1 **))a2)(
        a2,
        &GUID_8f0f30db_446a_4282_9fa2_28f75c1f39ad,
        &v20);
      v15 = (CDWMSwapChain *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               400LL);
      if ( v15 )
        v16 = CDWMSwapChain::CDWMSwapChain(v15, a2, v20, v21, &v22, v19, a6, a7, a8, a9);
      else
        v16 = 0LL;
      *a4 = v16;
      if ( !v16 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x54u);
        goto LABEL_7;
      }
      (**(void (__fastcall ***)(struct CDWMSwapChain *))v16)(v16);
      v13 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a4 + 248LL))(*a4, a1);
      v14 = v13;
      if ( v13 >= 0 )
        goto LABEL_7;
      v18 = 90;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v18);
LABEL_7:
  if ( v21 )
  {
    ((void (__fastcall *)(struct IDXGIOutput *))v21->lpVtbl->Release)(v21);
    v21 = 0LL;
  }
  if ( v20 )
  {
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v20 + 16LL))(v20);
    v20 = 0LL;
  }
  if ( v14 < 0 && *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v14;
}
