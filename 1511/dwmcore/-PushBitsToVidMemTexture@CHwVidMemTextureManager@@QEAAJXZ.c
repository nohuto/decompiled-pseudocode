/*
 * XREFs of ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x18015189C
 * Callers:
 *     ?Realize@CHwLinearGradientColorSource@@UEAAJXZ @ 0x1801516D0 (-Realize@CHwLinearGradientColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x180022F4C (-CopySurfaceRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DSurface@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B238 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CHwVidMemTextureManager::PushBitsToVidMemTexture(CHwVidMemTextureManager *this, __int64 a2)
{
  struct CD3DVidMemOnlyTexture **v2; // rdi
  CMILPoolResource *v4; // rcx
  int v5; // eax
  __int128 v6; // xmm1
  struct CD3DDeviceLevel1 *v7; // r8
  __int128 v8; // xmm0
  int Texture; // eax
  unsigned int v10; // ebx
  int D3DSurfaceLevel; // eax
  CMILPoolResource *v12; // rdi
  CMILPoolResource *v14; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v15[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-38h]
  int v17; // [rsp+68h] [rbp-30h]
  __int128 v18; // [rsp+70h] [rbp-28h]

  v14 = 0LL;
  v2 = (struct CD3DVidMemOnlyTexture **)((char *)this + 16);
  v4 = (CMILPoolResource *)*((_QWORD *)this + 2);
  if ( v4 && !*((_BYTE *)v4 + 76) )
  {
    CMILPoolResource::Release(v4);
    *v2 = 0LL;
  }
  if ( *v2 )
    goto LABEL_7;
  v5 = *((_DWORD *)this + 20);
  v6 = *(_OWORD *)((char *)this + 56);
  v7 = *(struct CD3DDeviceLevel1 **)this;
  v18 = *(_OWORD *)((char *)this + 24);
  v17 = v5;
  v8 = *(_OWORD *)((char *)this + 40);
  v15[1] = v6;
  v15[0] = v8;
  v16 = *((_QWORD *)this + 9);
  Texture = CD3DVidMemOnlyTexture::CreateTexture((const struct DWM_TEXTURE2D_DESC *)v15, 1, v7, v2);
  v10 = Texture;
  if ( Texture >= 0 )
  {
LABEL_7:
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(*v2, a2, &v14);
    v12 = v14;
    v10 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel >= 0 )
      CD3DDeviceLevel1::CopySurfaceRect(*(CD3DDeviceLevel1 **)this, *((struct CD3DSurface **)this + 1), 0LL, v14, 0LL);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x138u);
    if ( v12 )
      CMILPoolResource::Release(v12);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0x131u);
  }
  return v10;
}
