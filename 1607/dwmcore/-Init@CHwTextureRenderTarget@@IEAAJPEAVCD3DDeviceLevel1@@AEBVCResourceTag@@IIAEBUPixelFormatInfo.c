/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180013CB4
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180017438 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B42D4 (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 * Callees:
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180013C54 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x18009F120 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A6634 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x1800B428C (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DVidMemOnlyTexture **this,
        struct CD3DDeviceLevel1 *a2,
        const struct CResourceTag *a3,
        unsigned int a4,
        unsigned int a5,
        const struct PixelFormatInfo *a6,
        bool a7)
{
  unsigned int v8; // ecx
  int v10; // ebx
  unsigned int v11; // eax
  int Texture; // eax
  unsigned int v13; // ebx
  int v15; // r9d
  CMILPoolResource *v16; // rcx
  unsigned int v17; // [rsp+20h] [rbp-60h]
  unsigned int v18; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-4Ch]
  int v20; // [rsp+38h] [rbp-48h]
  int v21; // [rsp+3Ch] [rbp-44h]
  int v22; // [rsp+40h] [rbp-40h]
  int v23; // [rsp+44h] [rbp-3Ch]
  int v24; // [rsp+48h] [rbp-38h]
  int v25; // [rsp+4Ch] [rbp-34h]
  int v26; // [rsp+50h] [rbp-30h]
  int v27; // [rsp+54h] [rbp-2Ch]
  int v28; // [rsp+58h] [rbp-28h]
  __int128 v29; // [rsp+60h] [rbp-20h]

  v24 = 0;
  v25 = 0;
  v8 = a4;
  v27 = 0;
  v29 = *(_OWORD *)a3;
  v18 = a4;
  v22 = *(_DWORD *)a6;
  v19 = a5;
  v28 = a7 ? 0x80000 : 0;
  v10 = 0;
  v11 = *((_DWORD *)a2 + 172);
  v20 = 1;
  v21 = 1;
  v23 = 1;
  v26 = 40;
  if ( a4 > v11 )
  {
    v8 = v11;
    v18 = v11;
    v10 = 1;
  }
  if ( a5 > *((_DWORD *)a2 + 173) )
  {
    v19 = *((_DWORD *)a2 + 173);
LABEL_11:
    v13 = -2003292287;
    v17 = 397;
    v15 = -2003292287;
    goto LABEL_16;
  }
  if ( v10 == 1 || v8 != a4 )
    goto LABEL_11;
  Texture = CD3DVidMemOnlyTexture::CreateTexture((const struct DWM_TEXTURE2D_DESC *)&v18, 0, a2, this + 26);
  v13 = Texture;
  if ( Texture < 0 )
  {
    v17 = 403;
  }
  else
  {
    *((_DWORD *)this + 2) = a4;
    *((_DWORD *)this + 3) = a5;
    Texture = CHwTextureRenderTarget::InitTargetSurface(this, a6);
    v13 = Texture;
    if ( Texture < 0 )
    {
      v17 = 408;
    }
    else
    {
      Texture = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
      v13 = Texture;
      if ( Texture >= 0 )
        return v13;
      v17 = 410;
    }
  }
  v15 = Texture;
LABEL_16:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v17);
  v16 = this[21];
  if ( v16 )
  {
    CMILPoolResource::Release(v16);
    this[21] = 0LL;
  }
  return v13;
}
