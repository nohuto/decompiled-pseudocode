/*
 * XREFs of ??1D3DShaderLinker@@QEAA@XZ @ 0x1801732D0
 * Callers:
 *     ?LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEAPEAUID3D11PixelShader@@@Z @ 0x1801747A8 (-LinkPixelShader@CD3DDeviceLevel1@@QEAAJW4Enum@CommonRenderingPixelShaders@@AEBVCLightsMask@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall D3DShaderLinker::~D3DShaderLinker(D3DShaderLinker *this)
{
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 6);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 3);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)this);
}
