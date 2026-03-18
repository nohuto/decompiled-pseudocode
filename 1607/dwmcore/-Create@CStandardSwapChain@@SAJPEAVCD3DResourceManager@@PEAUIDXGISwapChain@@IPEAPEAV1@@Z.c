/*
 * XREFs of ?Create@CStandardSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChain@@IPEAPEAV1@@Z @ 0x18017D684
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x18007EB8C (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@U-$TMILFlagsEnum@W4FlagsEnum@M.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??0CStandardSwapChain@@IEAA@PEAUIDXGISwapChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18017D598 (--0CStandardSwapChain@@IEAA@PEAUIDXGISwapChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 */

__int64 __fastcall CStandardSwapChain::Create(
        struct CD3DResourceManager *a1,
        struct IDXGISwapChain *a2,
        __int64 a3,
        struct CStandardSwapChain **a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  CStandardSwapChain *v9; // rax
  struct CStandardSwapChain *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-88h]
  struct DXGI_SWAP_CHAIN_DESC v13; // [rsp+30h] [rbp-78h] BYREF

  *a4 = 0LL;
  v7 = ((__int64 (__fastcall *)(struct IDXGISwapChain *, struct DXGI_SWAP_CHAIN_DESC *))a2->lpVtbl->GetDesc)(a2, &v13);
  v8 = v7;
  if ( v7 < 0 )
  {
    v12 = 49;
  }
  else
  {
    v9 = (CStandardSwapChain *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 304LL);
    if ( v9 )
      v10 = CStandardSwapChain::CStandardSwapChain(v9, a2, &v13);
    else
      v10 = 0LL;
    *a4 = v10;
    if ( !v10 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x36u);
      goto LABEL_11;
    }
    (**(void (__fastcall ***)(struct CStandardSwapChain *))v10)(v10);
    v7 = (*(__int64 (__fastcall **)(_QWORD, struct CD3DResourceManager *))(*(_QWORD *)*a4 + 248LL))(*a4, a1);
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
    v12 = 60;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v12);
LABEL_11:
  if ( *a4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
    *a4 = 0LL;
  }
  return v8;
}
