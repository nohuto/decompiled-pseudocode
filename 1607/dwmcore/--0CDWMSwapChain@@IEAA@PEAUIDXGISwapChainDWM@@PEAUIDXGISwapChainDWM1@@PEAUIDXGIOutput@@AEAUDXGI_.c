/*
 * XREFs of ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@U_LUID@@IKK_N@Z @ 0x18007AC44
 * Callers:
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x1800B6B78 (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@IKK@Z @ 0x18017D034 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180079EE0 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDWMSwapChain *__fastcall CDWMSwapChain::CDWMSwapChain(
        CDWMSwapChain *this,
        struct IDXGISwapChainDWM *a2,
        struct IDXGISwapChainDWM1 *a3,
        struct IDXGIOutput *a4,
        struct DXGI_SWAP_CHAIN_DESC *a5,
        struct _LUID a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        bool a10)
{
  __int64 v13; // r10
  __int64 v14; // rdi
  _BYTE v16[88]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h]

  CSwapChainBase::CSwapChainBase(this, a5);
  *((_QWORD *)this + 36) = v13;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 80) = a7;
  *((_DWORD *)this + 81) = a8;
  *((_DWORD *)this + 82) = a9;
  *((_BYTE *)this + 409) = a10;
  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  *((_QWORD *)this + 37) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 38) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct IDXGIOutput *))a4->lpVtbl->AddRef)(a4);
  v14 = *((_QWORD *)this + 38);
  if ( v14 )
  {
    memset_0(v16, 0, 0x60uLL);
    (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14 + 56LL))(v14, v16);
    *((_QWORD *)this + 42) = v17;
    (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 38))(
      *((_QWORD *)this + 38),
      &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976,
      (char *)this + 312);
  }
  return this;
}
