/*
 * XREFs of ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x1801279DC
 * Callers:
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z @ 0x180127AA8 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAVIRenderTargetDisplay@@@Z.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18008E9A0 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CAnalogDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6)
{
  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3, 3, a4, 1, a6);
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_DWORD *)(a1 + 336) = -1;
  *(_QWORD *)a1 = &CAnalogDisplayRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 120) = &CAnalogDisplayRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 176) = &CAnalogDisplayRenderTarget::`vftable';
  return a1;
}
