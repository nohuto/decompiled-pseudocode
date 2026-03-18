/*
 * XREFs of ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18007FE14
 * Callers:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180074800 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 *     ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18013D8A4 (--0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace.c)
 *     ??0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18014FBF4 (--0CHwHwndRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDis.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18008D374 (--0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CHwDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        unsigned int a7)
{
  __int64 v9; // r11
  __int64 result; // rax

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a2, a3, a7);
  *(_QWORD *)(a1 + 176) = &IRenderTargetDisplay::`vftable';
  *(_OWORD *)(a1 + 216) = *(_OWORD *)v9;
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(v9 + 16);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(v9 + 48);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(v9 + 64);
  *(_DWORD *)(a1 + 288) = a4;
  *(_DWORD *)(a1 + 292) = a5;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_WORD *)(a1 + 184) = 1;
  *(_DWORD *)(a1 + 300) = 0;
  if ( g_pMediaControl )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)g_pMediaControl + 2) + 84LL));
  *(_DWORD *)(a1 + 296) = a6;
  result = a1;
  *(_QWORD *)(a1 + 320) = 0LL;
  return result;
}
