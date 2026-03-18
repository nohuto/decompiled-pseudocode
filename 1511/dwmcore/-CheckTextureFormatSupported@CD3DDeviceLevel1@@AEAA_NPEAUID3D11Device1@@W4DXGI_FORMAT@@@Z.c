/*
 * XREFs of ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z @ 0x180023528
 * Callers:
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x1800235A0 (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CD3DDeviceLevel1::CheckTextureFormatSupported(
        CD3DDeviceLevel1 *this,
        struct ID3D11Device1 *a2,
        unsigned int a3)
{
  char v3; // bp
  int v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+34h] [rbp+Ch]

  v6 = HIDWORD(this);
  v3 = 0;
  v5 = 0;
  if ( ((int (__fastcall *)(struct ID3D11Device1 *, _QWORD, int *))a2->lpVtbl->CheckFormatSupport)(a2, a3, &v5) >= 0 )
    return (v5 & 0x8220) == 33312;
  return v3;
}
