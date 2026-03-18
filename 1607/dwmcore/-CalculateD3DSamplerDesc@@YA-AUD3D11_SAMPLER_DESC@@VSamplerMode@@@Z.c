/*
 * XREFs of ?CalculateD3DSamplerDesc@@YA?AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z @ 0x1800B7748
 * Callers:
 *     ?GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z @ 0x18010F0A8 (-GetD3DSamplerStateNoRef@CD3DDeviceLevel1@@QEAAJVSamplerMode@@PEAPEAUID3D11SamplerState@@@Z.c)
 * Callees:
 *     ?GetD3D11TextureAddressFromExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4ExtendMode@@@Z @ 0x1800B77C4 (-GetD3D11TextureAddressFromExtendMode@@YA-AW4D3D11_TEXTURE_ADDRESS_MODE@@W4ExtendMode@@@Z.c)
 */

__int64 __fastcall CalculateD3DSamplerDesc(int *a1, unsigned __int8 *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int D3D11TextureAddressFromExtendMode; // eax
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r8
  __int64 result; // rax
  __int64 v14; // r10

  v3 = *a2;
  v4 = 21;
  if ( !*a2 )
    v4 = 0;
  LOBYTE(v3) = a2[1];
  *a1 = v4;
  D3D11TextureAddressFromExtendMode = GetD3D11TextureAddressFromExtendMode(v3);
  LOBYTE(v7) = *(_BYTE *)(v6 + 2);
  *(_DWORD *)(v8 + 4) = D3D11TextureAddressFromExtendMode;
  v9 = GetD3D11TextureAddressFromExtendMode(v7);
  *(_DWORD *)(v10 + 8) = v9;
  v11 = GetD3D11TextureAddressFromExtendMode(0LL);
  *(_DWORD *)(v12 + 12) = v11;
  result = v12;
  *(_DWORD *)(v12 + 16) = v14;
  *(_DWORD *)(v12 + 20) = 1;
  *(_QWORD *)(v12 + 24) = 8LL;
  *(_QWORD *)(v12 + 36) = v14;
  *(_DWORD *)(v12 + 32) = v14;
  *(_DWORD *)(v12 + 44) = v14;
  *(_DWORD *)(v12 + 48) = 2139095039;
  return result;
}
