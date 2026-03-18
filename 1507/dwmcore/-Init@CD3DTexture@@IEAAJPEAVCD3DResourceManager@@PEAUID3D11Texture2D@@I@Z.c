/*
 * XREFs of ?Init@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@I@Z @ 0x180084C64
 * Callers:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800144F8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18013CFDC (-Create@CD3DLockableTexture@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x180014754 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180019BDC (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z @ 0x180084B40 (-InitResource@CD3DTexture@@IEAAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DTexture::Init(
        CD3DTexture *this,
        struct CD3DResourceManager *a2,
        struct ID3D11Texture2D *a3,
        unsigned int a4)
{
  int v8; // ecx
  int PixelFormatColorSpace; // eax
  unsigned int v10; // ebx
  int v11; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]

  ((void (__fastcall *)(struct ID3D11Texture2D *, char *))a3->lpVtbl->GetDesc)(a3, (char *)this + 136);
  *((_DWORD *)this + 46) = HasAlphaChannel(*((_DWORD *)this + 38)) ? 1 : 3;
  PixelFormatColorSpace = GetPixelFormatColorSpace(v8, (CD3DTexture *)((char *)this + 188));
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 107;
LABEL_10:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, PixelFormatColorSpace, v13);
    return v10;
  }
  v11 = *((_DWORD *)this + 36);
  *((_DWORD *)this + 48) = v11;
  if ( (unsigned int)(v11 - 1) > 0x1F )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x70u);
    return v10;
  }
  *((_DWORD *)this + 45) = a4;
  if ( a4 >= *((_DWORD *)this + 37) )
  {
    v10 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x76u);
    return v10;
  }
  PixelFormatColorSpace = CD3DTexture::InitResource(this, a2, a3);
  v10 = PixelFormatColorSpace;
  if ( PixelFormatColorSpace < 0 )
  {
    v13 = 124;
    goto LABEL_10;
  }
  return v10;
}
