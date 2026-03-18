/*
 * XREFs of ??0CHwStereoFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18017A340
 * Callers:
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800B6074 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEAUHWND__@@PEBVCDisplay@@U-$TMILFlagsEnum@W4Flags.c)
 * Callees:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18007BB34 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::CHwStereoFullScreenRenderTarget(__int64 a1, __int64 a2, __int64 a3)
{
  CHwFullScreenRenderTarget::CHwFullScreenRenderTarget(a1, a2, a3);
  *(_QWORD *)a1 = &CHwStereoFullScreenRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(a1 + 128) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(a1 + 176) = &CHwStereoFullScreenRenderTarget::`vftable'{for `CHwFullScreenRenderTarget'};
  *(_QWORD *)(a1 + 384) = &CHwStereoFullScreenRenderTarget::`vftable'{for `IRenderTargetStereo'};
  *(_DWORD *)(a1 + 392) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_QWORD *)(a1 + 408) = 0LL;
  *(_WORD *)(a1 + 416) = 0;
  return a1;
}
