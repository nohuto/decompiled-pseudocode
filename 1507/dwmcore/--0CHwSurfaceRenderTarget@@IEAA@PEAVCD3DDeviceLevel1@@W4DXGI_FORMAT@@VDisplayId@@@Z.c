/*
 * XREFs of ??0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180082254
 * Callers:
 *     ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180083198 (--0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ??0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MODE@@W4ColorSpace@@IVDisplayId@@@Z @ 0x18008E9A0 (--0CHwDisplayRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@PEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_ALPHA_MOD.c)
 * Callees:
 *     MatrixAppendScale2D @ 0x1800139C8 (MatrixAppendScale2D.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  float v6; // xmm2_4
  float v7; // xmm1_4
  __int64 v8; // r10

  *(_DWORD *)(a1 + 112) = a4;
  *(_QWORD *)a1 = &CBaseRenderTarget::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v5 = a1 + 16;
  *(_DWORD *)(v5 + 60) = 1065353216;
  *(_DWORD *)(v5 + 40) = 1065353216;
  *(_DWORD *)(v5 + 20) = 1065353216;
  *(_DWORD *)v5 = 1065353216;
  *(_QWORD *)(v5 + 52) = 0LL;
  *(_QWORD *)(v5 + 44) = 0LL;
  *(_QWORD *)(v5 + 32) = 0LL;
  *(_QWORD *)(v5 + 24) = 0LL;
  *(_QWORD *)(v5 + 12) = 0LL;
  *(_QWORD *)(v5 + 4) = 0LL;
  *(_QWORD *)(a1 + 120) = &CMILCOMBase::`vftable';
  *(_DWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 160) = a2;
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 400));
  v6 = g_DesktopDpiY;
  v7 = g_DesktopDpiX;
  *(_BYTE *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 168) = 0LL;
  MatrixAppendScale2D((struct D2DMatrix *)v5, v7, v6);
  return v8;
}
