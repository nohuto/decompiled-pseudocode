/*
 * XREFs of ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x1800B6B78
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@U_LUID@@IKK_N@Z @ 0x18007AC44 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
  int v14; // ebx
  CDWMSwapChain *v15; // rax
  struct CDWMSwapChain *v16; // rcx
  unsigned int v18; // [rsp+20h] [rbp-91h]
  struct _LUID v19; // [rsp+28h] [rbp-89h]
  struct IDXGIOutput *v20; // [rsp+50h] [rbp-61h] BYREF
  struct IDXGISwapChainDWM1 *v21; // [rsp+58h] [rbp-59h] BYREF
  DXGI_SWAP_CHAIN_DESC v22; // [rsp+60h] [rbp-51h] BYREF

  *a4 = 0LL;
  v10 = *(_QWORD *)a2;
  v20 = 0LL;
  v21 = 0LL;
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
            &v20);
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
        &v21);
      v15 = (CDWMSwapChain *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 16LL))(
                               WPF::g_pProcessHeap,
                               416LL);
      if ( v15 )
        v16 = CDWMSwapChain::CDWMSwapChain(v15, a2, v21, v20, &v22, v19, a6, a7, a8, a9);
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
  if ( v20 )
  {
    ((void (__fastcall *)(struct IDXGIOutput *))v20->lpVtbl->Release)(v20);
    v20 = 0LL;
  }
  if ( v21 )
  {
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)v21 + 16LL))(v21);
    v21 = 0LL;
  }
  if ( v14 < 0 && *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v14;
}
