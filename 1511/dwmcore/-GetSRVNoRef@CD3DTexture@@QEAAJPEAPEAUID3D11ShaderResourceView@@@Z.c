/*
 * XREFs of ?GetSRVNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180145018
 * Callers:
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180139028 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DTexture::GetSRVNoRef(CD3DTexture *this, struct ID3D11ShaderResourceView **a2)
{
  unsigned int v2; // ebx
  struct ID3D11ShaderResourceView **v3; // rsi
  int v5; // eax

  v2 = 0;
  v3 = (struct ID3D11ShaderResourceView **)((char *)this + 224);
  if ( *((_QWORD *)this + 28)
    || (v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 120LL)
                                                                                     + 552LL)
                                                                       + 56LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 552LL),
               *((_QWORD *)this + 16),
               0LL,
               (char *)this + 224),
        v2 = v5,
        v5 >= 0) )
  {
    *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1A4u);
  }
  return v2;
}
