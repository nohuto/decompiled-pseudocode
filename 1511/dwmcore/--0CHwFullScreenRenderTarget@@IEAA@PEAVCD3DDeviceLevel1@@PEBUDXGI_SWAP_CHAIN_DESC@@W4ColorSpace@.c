/*
 * XREFs of ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180074800
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B23F8 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 *     ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180149C84 (--0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4Color.c)
 * Callees:
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18007FE14 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  CHwDisplayRenderTarget::CHwDisplayRenderTarget(a1, a2, a3, 3LL, a4, a5, a6);
  *(_QWORD *)a1 = &CHwFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 120) = &CHwFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 176) = &CHwFullScreenRenderTarget::`vftable';
  *(_BYTE *)(a1 + 328) = 0;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  return a1;
}
