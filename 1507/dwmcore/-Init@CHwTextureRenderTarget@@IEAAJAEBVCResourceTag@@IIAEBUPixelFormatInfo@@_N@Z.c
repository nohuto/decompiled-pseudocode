/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180082E60
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180001464 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800574FC (-Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPix.c)
 * Callees:
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180014454 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800160E0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x180082E00 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800850B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        CHwTextureRenderTarget *this,
        const struct CResourceTag *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        bool a6)
{
  unsigned int v7; // ecx
  struct CD3DDeviceLevel1 *v10; // r8
  int v11; // ebx
  int Texture; // eax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  int v16; // r9d
  CMILPoolResource *v17; // rcx
  unsigned int v18; // [rsp+20h] [rbp-60h]
  unsigned int v19; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-4Ch]
  int v21; // [rsp+38h] [rbp-48h]
  int v22; // [rsp+3Ch] [rbp-44h]
  int v23; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+44h] [rbp-3Ch]
  int v25; // [rsp+48h] [rbp-38h]
  int v26; // [rsp+4Ch] [rbp-34h]
  int v27; // [rsp+50h] [rbp-30h]
  int v28; // [rsp+54h] [rbp-2Ch]
  int v29; // [rsp+58h] [rbp-28h]
  __int128 v30; // [rsp+60h] [rbp-20h]

  v25 = 0;
  v26 = 0;
  v7 = a3;
  v28 = 0;
  v10 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 20);
  v30 = *(_OWORD *)a2;
  v19 = v7;
  v23 = *(_DWORD *)a5;
  v20 = a4;
  v29 = a6 ? 0x80000 : 0;
  v11 = 0;
  v21 = 1;
  v22 = 1;
  v24 = 1;
  v27 = 40;
  if ( v7 > *((_DWORD *)v10 + 157) )
  {
    v7 = *((_DWORD *)v10 + 157);
    v19 = v7;
    v11 = 1;
  }
  if ( a4 > *((_DWORD *)v10 + 158) )
  {
    v20 = *((_DWORD *)v10 + 158);
LABEL_11:
    v14 = -2003292287;
    v18 = 381;
    v16 = -2003292287;
    goto LABEL_12;
  }
  if ( v11 == 1 || v7 != a3 )
    goto LABEL_11;
  Texture = CD3DVidMemOnlyTexture::CreateTexture(
              (const struct DWM_TEXTURE2D_DESC *)&v19,
              0,
              v10,
              (struct CD3DVidMemOnlyTexture **)this + 24);
  v14 = Texture;
  if ( Texture < 0 )
  {
    v18 = 387;
  }
  else
  {
    *((_DWORD *)this + 2) = a3;
    *((_DWORD *)this + 3) = a4;
    *(_OWORD *)((char *)this + 200) = *(_OWORD *)a5;
    *((_QWORD *)this + 27) = *((_QWORD *)a5 + 2);
    Texture = CHwTextureRenderTarget::InitTargetSurface((CD3DTexture **)this, v13);
    v14 = Texture;
    if ( Texture < 0 )
    {
      v18 = 393;
    }
    else
    {
      Texture = CBaseRenderTarget::Init(this);
      v14 = Texture;
      if ( Texture >= 0 )
        return v14;
      v18 = 395;
    }
  }
  v16 = Texture;
LABEL_12:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, v18);
  v17 = (CMILPoolResource *)*((_QWORD *)this + 21);
  if ( v17 )
  {
    CMILPoolResource::Release(v17);
    *((_QWORD *)this + 21) = 0LL;
  }
  return v14;
}
