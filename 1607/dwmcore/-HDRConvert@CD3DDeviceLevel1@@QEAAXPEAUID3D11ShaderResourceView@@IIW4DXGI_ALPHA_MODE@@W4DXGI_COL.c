/*
 * XREFs of ?HDRConvert@CD3DDeviceLevel1@@QEAAXPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x1801744B0
 * Callers:
 *     ?HDRConvert@CHwTextureRenderTarget@@UEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017B8A0 (-HDRConvert@CHwTextureRenderTarget@@UEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DX.c)
 *     ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x180180090 (-HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceLevel1::HDRConvert(
        CD3DDeviceLevel1 *this,
        struct ID3D11ShaderResourceView *a2,
        int a3,
        int a4,
        enum DXGI_ALPHA_MODE a5,
        enum DXGI_COLOR_SPACE_TYPE a6,
        struct ID3D11RenderTargetView *a7,
        enum DXGI_COLOR_SPACE_TYPE a8,
        struct tagRECT *a9)
{
  int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // [rsp+30h] [rbp-48h] BYREF
  struct ID3D11RenderTargetView *v15; // [rsp+38h] [rbp-40h] BYREF
  struct ID3D11ShaderResourceView *v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+50h] [rbp-28h] BYREF
  __int64 v19; // [rsp+58h] [rbp-20h]
  __int64 v20; // [rsp+60h] [rbp-18h]

  v14 = 0LL;
  v15 = a7;
  v17 = 0LL;
  v16 = a2;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  switch ( a6 )
  {
    case DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709:
      if ( a8 != DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
        return;
      v12 = 17 - (a5 != DXGI_ALPHA_MODE_IGNORE);
      break;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020:
      if ( a8 )
      {
        if ( a8 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          return;
        v12 = 9 - (a5 != DXGI_ALPHA_MODE_IGNORE);
      }
      else
      {
        v12 = (a5 != DXGI_ALPHA_MODE_IGNORE) + 4;
      }
      break;
    case DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020:
      if ( a8 )
      {
        if ( a8 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          return;
        v12 = 11 - (a5 != DXGI_ALPHA_MODE_IGNORE);
      }
      else
      {
        v12 = a5 != DXGI_ALPHA_MODE_IGNORE;
      }
      break;
    case DXGI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020:
      if ( a8 )
      {
        if ( a8 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          return;
        v12 = 13 - (a5 != DXGI_ALPHA_MODE_IGNORE);
      }
      else
      {
        v12 = (a5 != DXGI_ALPHA_MODE_IGNORE) + 2;
      }
      break;
    case DXGI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020:
      if ( a8 )
      {
        if ( a8 != DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
          return;
        v12 = (a5 != DXGI_ALPHA_MODE_IGNORE) + 14;
      }
      else
      {
        v12 = (a5 != DXGI_ALPHA_MODE_IGNORE) + 6;
      }
      break;
    default:
      return;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 72) + 1048LL))(
    *((_QWORD *)this + 72),
    *((_QWORD *)this + 177),
    &v14);
  (*(void (__fastcall **)(_QWORD, struct ID3D11RenderTargetView *))(**((_QWORD **)this + 72) + 944LL))(
    *((_QWORD *)this + 72),
    v15);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 72) + 72LL))(
    *((_QWORD *)this + 72),
    *((_QWORD *)this + v12 + 158),
    0LL,
    0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct ID3D11ShaderResourceView **))(**((_QWORD **)this + 72) + 64LL))(
    *((_QWORD *)this + 72),
    0LL,
    1LL,
    &v16);
  (*(void (__fastcall **)(_QWORD, __int64, struct ID3D11RenderTargetView **, _QWORD))(**((_QWORD **)this + 72) + 264LL))(
    *((_QWORD *)this + 72),
    1LL,
    &v15,
    0LL);
  (*(void (__fastcall **)(_QWORD, bool, struct tagRECT *))(**((_QWORD **)this + 72) + 360LL))(
    *((_QWORD *)this + 72),
    a9 != 0LL,
    a9);
  v13 = *((_QWORD *)this + 72);
  *(float *)&v19 = (float)a3;
  *((float *)&v20 + 1) = FLOAT_1_0;
  *((float *)&v19 + 1) = (float)a4;
  (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 352LL))(v13, 1LL, &v18);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 72) + 104LL))(*((_QWORD *)this + 72), 6LL, 0LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64 *))(**((_QWORD **)this + 72) + 64LL))(
    *((_QWORD *)this + 72),
    0LL,
    1LL,
    &v17);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 72) + 264LL))(
    *((_QWORD *)this + 72),
    0LL,
    0LL,
    0LL);
  (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 72) + 1048LL))(
    *((_QWORD *)this + 72),
    v14,
    0LL);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
}
