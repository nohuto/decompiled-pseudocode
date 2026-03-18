/*
 * XREFs of ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18008E7E0
 * Callers:
 *     ??0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18007BB34 (--0CHwFullScreenRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@.c)
 *     ??0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace@@IVDisplayId@@@Z @ 0x180167894 (--0CAnalogDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4ColorSpace.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18002E780 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::CHwDisplayRenderTarget(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7)
{
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // xmm0_8

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a7);
  *(_QWORD *)(v8 + 176) = &IRenderTargetDisplay::`vftable';
  *(_WORD *)(v8 + 192) = 1;
  *(_BYTE *)(v8 + 194) = 0;
  *(_QWORD *)(v8 + 216) = 0LL;
  *(_OWORD *)(v8 + 224) = *(_OWORD *)v9;
  *(_OWORD *)(v8 + 240) = *(_OWORD *)(v9 + 16);
  *(_OWORD *)(v8 + 256) = *(_OWORD *)(v9 + 32);
  *(_OWORD *)(v8 + 272) = *(_OWORD *)(v9 + 48);
  v10 = *(_QWORD *)(v9 + 64);
  *(_DWORD *)(v8 + 300) = a5;
  *(_DWORD *)(v8 + 304) = a6;
  *(_QWORD *)(v8 + 288) = v10;
  *(_DWORD *)(v8 + 296) = 3;
  *(_DWORD *)(v8 + 308) = 0;
  *(_QWORD *)(v8 + 328) = 0LL;
  *(_QWORD *)(v8 + 184) = a2;
  if ( a2 )
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 416));
  return v8;
}
