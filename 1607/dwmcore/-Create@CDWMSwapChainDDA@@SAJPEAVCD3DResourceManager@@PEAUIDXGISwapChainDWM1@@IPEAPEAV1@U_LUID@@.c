/*
 * XREFs of ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@IKK@Z @ 0x18017D034
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@U_LUID@@IKK_N@Z @ 0x18007AC44 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChainDDA::Create(
        struct CD3DResourceManager *a1,
        void (__fastcall ***a2)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM **),
        __int64 a3,
        struct CDWMSwapChainDDA **a4,
        struct _LUID a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  void (__fastcall **v8)(struct IDXGISwapChainDWM1 *, GUID *, struct IDXGISwapChainDWM **); // rax
  int v12; // eax
  int v13; // ebx
  CDWMSwapChain *v14; // rbx
  unsigned int v16; // [rsp+20h] [rbp-B8h]
  struct _LUID v17; // [rsp+28h] [rbp-B0h]
  struct IDXGISwapChainDWM *v18; // [rsp+50h] [rbp-88h] BYREF
  struct DXGI_SWAP_CHAIN_DESC v19; // [rsp+60h] [rbp-78h] BYREF

  *a4 = 0LL;
  v8 = *a2;
  v18 = 0LL;
  (*v8)((struct IDXGISwapChainDWM1 *)a2, &GUID_f69f223b_45d3_4aa0_98c8_c40c2b231029, &v18);
  v12 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM *, struct DXGI_SWAP_CHAIN_DESC *))(*(_QWORD *)v18 + 80LL))(
          v18,
          &v19);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = 61;
    goto LABEL_10;
  }
  v14 = (CDWMSwapChain *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                    + 16LL))(
                           WPF::g_pProcessHeap,
                           432LL);
  if ( v14 )
  {
    CDWMSwapChain::CDWMSwapChain(v14, v18, (struct IDXGISwapChainDWM1 *)a2, 0LL, &v19, v17, a6, a7, a8, 1);
    *(_QWORD *)v14 = &CDWMSwapChainDDA::`vftable'{for `CMILPoolResource'};
    *((_QWORD *)v14 + 3) = &CStandardSwapChain::`vftable'{for `IDeviceResource'};
  }
  else
  {
    v14 = 0LL;
  }
  *a4 = v14;
  if ( !v14 )
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49u);
    goto LABEL_11;
  }
  (**(void (__fastcall ***)(CDWMSwapChain *))v14)(v14);
  *((_QWORD *)*a4 + 52) = *((_QWORD *)a1 + 16);
  v12 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a4 + 248LL))(*a4, a1);
  v13 = v12;
  if ( v12 < 0 )
  {
    v16 = 80;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, v16);
  }
LABEL_11:
  if ( v18 )
  {
    (*(void (__fastcall **)(struct IDXGISwapChainDWM *))(*(_QWORD *)v18 + 16LL))(v18);
    v18 = 0LL;
  }
  if ( v13 < 0 && *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    *a4 = 0LL;
  }
  return (unsigned int)v13;
}
