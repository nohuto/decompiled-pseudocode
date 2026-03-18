/*
 * XREFs of ?GetD3D11TextureAddressFromExtendMode@@YA?AW4D3D11_TEXTURE_ADDRESS_MODE@@W4ExtendMode@@@Z @ 0x1800B77C4
 * Callers:
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@AEAVCVertexConstantBuffer@@AEBVCLightsMask@@@Z @ 0x180056190 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 *     ?CalculateD3DSamplerDesc@@YA?AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z @ 0x1800B7748 (-CalculateD3DSamplerDesc@@YA-AUD3D11_SAMPLER_DESC@@VSamplerMode@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetD3D11TextureAddressFromExtendMode(char a1)
{
  switch ( a1 )
  {
    case 0:
      return 3LL;
    case 1:
      return 1LL;
    case 2:
      return 2LL;
  }
  if ( a1 != 3 )
    return 3LL;
  return 4LL;
}
