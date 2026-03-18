/*
 * XREFs of ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@U_LUID@@IKK_N@Z @ 0x18008EF00
 * Callers:
 *     ?Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_N@Z @ 0x18009687C (-Create@CDWMSwapChain@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM@@IPEAPEAV1@U_LUID@@IKK_.c)
 *     ?Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@IKK@Z @ 0x18013C4A8 (-Create@CDWMSwapChainDDA@@SAJPEAVCD3DResourceManager@@PEAUIDXGISwapChainDWM1@@IPEAPEAV1@U_LUID@@.c)
 * Callees:
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18008EA68 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
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
  __int64 v14; // rdi
  void (__fastcall ***v15)(_QWORD, GUID *, char *); // rsi
  __int16 v17; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v18[62]; // [rsp+22h] [rbp-A6h] BYREF
  _BYTE v19[24]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+78h] [rbp-50h]

  CSwapChainBase::CSwapChainBase(this, a5);
  *((_QWORD *)this + 36) = a2;
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((struct _LUID *)this + 40) = a6;
  *((_DWORD *)this + 82) = a7;
  *((_DWORD *)this + 83) = a8;
  *((_DWORD *)this + 84) = a9;
  *((_BYTE *)this + 361) = a10;
  *(_QWORD *)this = &CDWMSwapChain::`vftable'{for `CMILPoolResource'};
  if ( a2 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 37) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDXGISwapChainDWM1 *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 38) = a4;
  if ( a4 )
    ((void (__fastcall *)(struct IDXGIOutput *))a4->lpVtbl->AddRef)(a4);
  v14 = *((_QWORD *)this + 38);
  if ( v14 )
  {
    v17 = 0;
    memset_0(v18, 0, sizeof(v18));
    memset_0(v19, 0, 0x20uLL);
    (*(void (__fastcall **)(__int64, __int16 *))(*(_QWORD *)v14 + 56LL))(v14, &v17);
    v15 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 38);
    *((_QWORD *)this + 43) = v20;
    (**v15)(v15, &GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976, (char *)this + 312);
  }
  return this;
}
