/*
 * XREFs of ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180079EE0
 * Callers:
 *     ??0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_SWAP_CHAIN_DESC@@U_LUID@@IKK_N@Z @ 0x18007AC44 (--0CDWMSwapChain@@IEAA@PEAUIDXGISwapChainDWM@@PEAUIDXGISwapChainDWM1@@PEAUIDXGIOutput@@AEAUDXGI_.c)
 *     ??0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z @ 0x1800B9374 (--0CDWMOffScreenSwapChain@@QEAA@PEAUDXGI_SWAP_CHAIN_DESC@@PEAUID3D11Texture2D@@@Z.c)
 *     ??0CAnalogSwapChain@@IEAA@PEAUIAnalogFlipChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180167FB4 (--0CAnalogSwapChain@@IEAA@PEAUIAnalogFlipChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     ??0CStandardSwapChain@@IEAA@PEAUIDXGISwapChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x18017D598 (--0CStandardSwapChain@@IEAA@PEAUIDXGISwapChain@@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x18009F06C (--0CD3DResource@@IEAA@_N@Z.c)
 */

CSwapChainBase *__fastcall CSwapChainBase::CSwapChainBase(CSwapChainBase *this, struct DXGI_SWAP_CHAIN_DESC *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r9

  CD3DResource::CD3DResource(this, 0);
  *(_QWORD *)(v2 + 24) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *(_QWORD *)v2 = &CSwapChainBase::`vftable'{for `CMILPoolResource'};
  *(_OWORD *)(v2 + 128) = *(_OWORD *)v3;
  *(_OWORD *)(v2 + 144) = *(_OWORD *)(v3 + 16);
  *(_OWORD *)(v2 + 160) = *(_OWORD *)(v3 + 32);
  *(_OWORD *)(v2 + 176) = *(_OWORD *)(v3 + 48);
  *(_QWORD *)(v2 + 192) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v2 + 224) = 0LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_QWORD *)(v2 + 240) = 0LL;
  *(_DWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_QWORD *)(v2 + 272) = 0LL;
  *(_DWORD *)(v2 + 280) = 0;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  return (CSwapChainBase *)v2;
}
