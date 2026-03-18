/*
 * XREFs of ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180139014
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x18008E50C (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18008E8E0 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6)
{
  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3, a4, a5, a6);
  *(_QWORD *)a1 = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 120) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 176) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *(_QWORD *)(a1 + 368) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  *(_DWORD *)(a1 + 376) = 0;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_WORD *)(a1 + 400) = 0;
  return a1;
}
