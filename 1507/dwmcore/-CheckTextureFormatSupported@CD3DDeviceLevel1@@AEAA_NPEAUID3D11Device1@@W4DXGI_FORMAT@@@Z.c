/*
 * XREFs of ?CheckTextureFormatSupported@CD3DDeviceLevel1@@AEAA_NPEAUID3D11Device1@@W4DXGI_FORMAT@@@Z @ 0x18008FBB4
 * Callers:
 *     ?GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z @ 0x18008FC2C (-GatherSupportedTextureFormats@CD3DDeviceLevel1@@AEAAJPEAUID3D11Device1@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
