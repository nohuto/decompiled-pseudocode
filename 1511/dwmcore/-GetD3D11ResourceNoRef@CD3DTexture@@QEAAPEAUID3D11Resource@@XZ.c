/*
 * XREFs of ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x180145774
 * Callers:
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z @ 0x1801451F0 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@@Z.c)
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11VideoProcessor@@PEAUID3D11Texture2D@@IAEBUtagRECT@@3W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014B6E0 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11Vi.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
