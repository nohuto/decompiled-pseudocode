/*
 * XREFs of ?GetSupportedTextureFormat@CD3DDeviceLevel1@@QEBAJW4DXGI_FORMAT@@0_N1PEAW42@@Z @ 0x1800247C0
 * Callers:
 *     ?ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEBV?$CMultiOutSpaceMatrix@URealizationSampling@CoordinateSpace@@@@W4DXGI_FORMAT@@W4Enum@MilBitmapWrapMode@@W47MilBitmapInterpolationMode@@HMPEBVCColorKey@@HAEAURealizationParameters@1@@Z @ 0x18008BF20 (-ComputeRealizationParameters@CHwBitmapColorSource@@CAJPEBVCD3DDeviceLevel1@@PEAVIBitmapSource@@.c)
 *     ?CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAW4DXGI_FORMAT@@_N3AEBU_GUID@@U_LUID@@VDisplayId@@PEAPEAX@Z @ 0x1800FEC50 (-CreateSharedHandleBitmap@CD3DDeviceManager@@UEAAJPEAVCBitmapOfDeviceBitmaps@@IAEBV-$TMilRect@IU.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x18008A730 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::GetSupportedTextureFormat(
        enum DXGI_FORMAT *this,
        enum DXGI_FORMAT a2,
        enum DXGI_FORMAT a3,
        char a4,
        bool a5,
        enum DXGI_FORMAT *a6)
{
  CD3DDeviceLevel1 *v6; // r10
  enum DXGI_FORMAT v7; // ecx
  enum DXGI_FORMAT *v8; // rax

  v6 = (CD3DDeviceLevel1 *)this;
  switch ( a2 )
  {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT )
      {
        v7 = *((_DWORD *)this + 174);
        goto LABEL_9;
      }
LABEL_27:
      if ( a3 != DXGI_FORMAT_R16G16B16A16_FLOAT && a3 != DXGI_FORMAT_R10G10B10A2_UNORM )
        goto LABEL_20;
LABEL_29:
      v7 = *((_DWORD *)this + 172);
      goto LABEL_9;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT )
        goto LABEL_29;
      goto LABEL_27;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
      if ( a3 == DXGI_FORMAT_R32G32B32A32_FLOAT
        || a3 == DXGI_FORMAT_R16G16B16A16_FLOAT
        || a3 == DXGI_FORMAT_R10G10B10A2_UNORM )
      {
        v7 = *((_DWORD *)this + 171);
        goto LABEL_9;
      }
      goto LABEL_20;
    case DXGI_FORMAT_R8G8B8A8_UNORM:
LABEL_20:
      v8 = a6;
      if ( !a5 )
      {
        v7 = *((_DWORD *)this + 167);
        goto LABEL_10;
      }
      goto LABEL_14;
    case DXGI_FORMAT_R8_UNORM:
      v7 = *((_DWORD *)this + 165);
      goto LABEL_9;
    case DXGI_FORMAT_A8_UNORM:
      v7 = *((_DWORD *)this + 166);
      goto LABEL_9;
  }
  if ( a2 != DXGI_FORMAT_B8G8R8A8_UNORM )
  {
    if ( a2 != DXGI_FORMAT_B8G8R8X8_UNORM )
    {
      if ( !a4 && !(unsigned int)HasAlphaChannel(a2) )
      {
        v7 = *((_DWORD *)v6 + 170);
        goto LABEL_9;
      }
      goto LABEL_8;
    }
    v8 = a6;
    if ( !a4 )
    {
      v7 = *((_DWORD *)this + 170);
      goto LABEL_10;
    }
LABEL_14:
    v7 = *((_DWORD *)this + 169);
    goto LABEL_10;
  }
LABEL_8:
  v7 = *((_DWORD *)v6 + 169);
LABEL_9:
  v8 = a6;
LABEL_10:
  *v8 = v7;
  return 0LL;
}
