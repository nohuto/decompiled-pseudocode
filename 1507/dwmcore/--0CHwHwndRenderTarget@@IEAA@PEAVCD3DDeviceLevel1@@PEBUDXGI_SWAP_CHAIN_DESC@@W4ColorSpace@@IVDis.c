/*
 * XREFs of ??0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x1801407B4
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18008E9A0 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CHwHwndRenderTarget::CHwHwndRenderTarget(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3, 1, a4, a5, a6);
  *(_DWORD *)(a1 + 328) = 0;
  *(_DWORD *)(a1 + 332) = 0;
  *(_QWORD *)a1 = &CHwHwndRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 120) = &CAnalogDisplayRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 176) = &CHwHwndRenderTarget::`vftable';
  return a1;
}
