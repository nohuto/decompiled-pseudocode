/*
 * XREFs of ??0CD3DResource@@IEAA@_N@Z @ 0x18009F06C
 * Callers:
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x180079BC4 (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ??0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z @ 0x180079EE0 (--0CSwapChainBase@@IEAA@AEAUDXGI_SWAP_CHAIN_DESC@@@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x180081690 (--0CD3DTexture@@IEAA@_N@Z.c)
 *     ??0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z @ 0x180081A60 (--0CHwBitmapCache@@AEAA@PEAVIMILResourceCache@@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x180178F74 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDeviceLevel1@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 *     ?Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z @ 0x18017A1B4 (-Create@CD3DPixelShader@@SAJPEAVCD3DDeviceLevel1@@PEBX_KPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CD3DResource *__fastcall CD3DResource::CD3DResource(CD3DResource *this, char a2)
{
  CD3DResource *result; // rax

  *((_BYTE *)this + 76) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *(_QWORD *)this = &CD3DResource::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 3) = &CDWMOffScreenSwapChain::`vftable'{for `IDeviceResource'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 10) = (char *)this + 112;
  *((_QWORD *)this + 11) = (char *)this + 112;
  *((_DWORD *)this + 24) = 2;
  *(_QWORD *)((char *)this + 100) = 2LL;
  result = this;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_BYTE *)this + 77) = 0;
  *((_BYTE *)this + 68) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return result;
}
