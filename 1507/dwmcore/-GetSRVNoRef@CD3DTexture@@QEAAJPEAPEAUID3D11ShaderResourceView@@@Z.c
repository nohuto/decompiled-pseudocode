/*
 * XREFs of ?GetSRVNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801337D8
 * Callers:
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180124FDC (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
                                                                                     + 544LL)
                                                                       + 56LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 120LL) + 544LL),
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
