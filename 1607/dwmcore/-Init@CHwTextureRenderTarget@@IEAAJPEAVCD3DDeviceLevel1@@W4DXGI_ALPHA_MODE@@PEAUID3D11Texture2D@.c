/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18017B9A8
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18017B70C (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180013C54 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B428C (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180175230 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        struct CD3DDeviceLevel1 *a2,
        enum DXGI_ALPHA_MODE a3,
        struct ID3D11Texture2D *a4)
{
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int inited; // eax
  int v12; // eax
  CMILPoolResource *v13; // rcx
  _BYTE v15[24]; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v16[12]; // [rsp+48h] [rbp-60h] BYREF

  v7 = CD3DVidMemOnlyTexture::CreateFromTexture(a4, 0, 0, 0, a2, this + 26);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1E8u);
  }
  else
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, _DWORD *))a4->lpVtbl->GetDesc)(a4, v16);
    v9 = v16[4];
    *((_DWORD *)this + 2) = v16[0];
    *((_DWORD *)this + 3) = v16[1];
    v10 = PixelFormatInfoFromDXGIFormatAndAlphaMode(v9, a3, (struct PixelFormatInfo *)v15);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1F0u);
    }
    else
    {
      inited = CHwTextureRenderTarget::InitTargetSurface(this, (const struct PixelFormatInfo *)v15);
      v8 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1F1u);
      }
      else
      {
        v12 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
        v8 = v12;
        if ( v12 >= 0 )
          return v8;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1F3u);
      }
    }
  }
  v13 = this[21];
  if ( v13 )
  {
    CMILPoolResource::Release(v13);
    this[21] = 0LL;
  }
  return v8;
}
