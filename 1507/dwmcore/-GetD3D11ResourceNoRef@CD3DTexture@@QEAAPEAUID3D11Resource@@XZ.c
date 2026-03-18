/*
 * XREFs of ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x180134360
 * Callers:
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x180133F30 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IAEBUtagRECT@@1W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18013B540 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IAEBUtagRECT@@1W4DXGI_COLOR.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

struct ID3D11Resource *__fastcall CD3DTexture::GetD3D11ResourceNoRef(CD3DTexture *this)
{
  char *v1; // rdi
  void (__fastcall ***v2)(_QWORD, GUID *, char *); // rsi

  v1 = (char *)this + 208;
  if ( !*((_QWORD *)this + 26) )
  {
    v2 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 16);
    if ( v2 )
      (**v2)(*((_QWORD *)this + 16), &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 208);
  }
  return *(struct ID3D11Resource **)v1;
}
