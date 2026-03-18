/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18017BAC0
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18017BD48 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180013C54 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800A6580 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B428C (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ?PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormatInfo@@@Z @ 0x180175230 (-PixelFormatInfoFromDXGIFormatAndAlphaMode@@YAJW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAUPixelFormat.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        __int64 **a2,
        enum DXGI_ALPHA_MODE a3,
        void *a4)
{
  int v7; // eax
  int v8; // ebx
  DXGI_FORMAT Format; // ecx
  int v10; // eax
  int inited; // eax
  int v12; // eax
  CMILPoolResource *v13; // rcx
  _BYTE v15[24]; // [rsp+40h] [rbp-78h] BYREF
  struct D3D11_TEXTURE2D_DESC v16; // [rsp+58h] [rbp-60h] BYREF

  v7 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v16, (__int64)a2, a2, a4, 0, 0, this + 26);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1BBu);
  }
  else
  {
    Format = v16.Format;
    *((_DWORD *)this + 2) = v16.Width;
    *((_DWORD *)this + 3) = v16.Height;
    v10 = PixelFormatInfoFromDXGIFormatAndAlphaMode(Format, a3, (struct PixelFormatInfo *)v15);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1C2u);
    }
    else
    {
      inited = CHwTextureRenderTarget::InitTargetSurface(this, (const struct PixelFormatInfo *)v15);
      v8 = inited;
      if ( inited < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1C4u);
      }
      else
      {
        v12 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
        v8 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1C6u);
        else
          this[30] = (struct CD3DVidMemOnlyTexture *)a4;
      }
    }
  }
  if ( v8 < 0 )
  {
    v13 = this[21];
    if ( v13 )
    {
      CMILPoolResource::Release(v13);
      this[21] = 0LL;
    }
  }
  return (unsigned int)v8;
}
