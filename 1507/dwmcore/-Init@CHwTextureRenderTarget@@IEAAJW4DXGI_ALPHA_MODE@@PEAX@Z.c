/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18013B1D4
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18013B2E0 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x1800142E4 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x180082E00 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800850B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18013B4BC (-SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTU.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(struct CD3DDeviceLevel1 **this, __int64 a2, void *a3)
{
  enum DXGI_ALPHA_MODE v5; // ebp
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  int inited; // eax
  int v11; // eax
  CMILPoolResource *v12; // rcx
  struct D3D11_TEXTURE2D_DESC v14; // [rsp+40h] [rbp-58h] BYREF

  v5 = (int)a2;
  v6 = CD3DVidMemOnlyTexture::OpenSharedTexture(&v14, a2, this[20], a3, 0, 0, this + 24);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = CHwTextureRenderTarget::SizeAndPixelInfoFromTextureDesc((CHwTextureRenderTarget *)this, v5, &v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      inited = CHwTextureRenderTarget::InitTargetSurface(this, v9);
      v7 = inited;
      if ( inited >= 0 )
      {
        v11 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
        v7 = v11;
        if ( v11 >= 0 )
          this[28] = (struct CD3DDeviceLevel1 *)a3;
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1B1u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1AFu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1ADu);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1ABu);
  }
  if ( v7 < 0 )
  {
    v12 = this[21];
    if ( v12 )
    {
      CMILPoolResource::Release(v12);
      this[21] = 0LL;
    }
  }
  return (unsigned int)v7;
}
