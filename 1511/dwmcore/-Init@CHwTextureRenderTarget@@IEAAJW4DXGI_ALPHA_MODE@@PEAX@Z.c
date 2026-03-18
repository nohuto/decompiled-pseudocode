/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18014B364
 * Callers:
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18014B470 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x18002B180 (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18002C5B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x18002C960 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18014B65C (-SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTU.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(CHwTextureRenderTarget *this, __int64 a2, void *a3)
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
  v6 = CD3DVidMemOnlyTexture::OpenSharedTexture(
         &v14,
         a2,
         *((__int64 ***)this + 20),
         a3,
         0,
         0,
         (struct CD3DVidMemOnlyTexture **)this + 24);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = CHwTextureRenderTarget::SizeAndPixelInfoFromTextureDesc(this, v5, &v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      inited = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, v9);
      v7 = inited;
      if ( inited >= 0 )
      {
        v11 = CBaseRenderTarget::Init(this);
        v7 = v11;
        if ( v11 >= 0 )
          *((_QWORD *)this + 28) = a3;
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
    v12 = (CMILPoolResource *)*((_QWORD *)this + 21);
    if ( v12 )
    {
      CMILPoolResource::Release(v12);
      *((_QWORD *)this + 21) = 0LL;
    }
  }
  return (unsigned int)v7;
}
