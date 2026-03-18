/*
 * XREFs of ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18013D8A4
 * Callers:
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x18013DACC (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18007FE14 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CAnalogDisplayRenderTarget::CAnalogDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned int a6)
{
  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3, 3, a4, 1, a6);
  *(_QWORD *)a1 = &CAnalogDisplayRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 120) = &CAnalogDisplayRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 176) = &CAnalogDisplayRenderTarget::`vftable';
  *(_DWORD *)(a1 + 344) = -1;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  return a1;
}
