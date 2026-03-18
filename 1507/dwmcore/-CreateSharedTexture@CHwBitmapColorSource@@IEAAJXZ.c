/*
 * XREFs of ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18013D648
 * Callers:
 *     ?CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FORMAT@@VDisplayId@@_NAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAXPEAPEAV1@@Z @ 0x18013F124 (-CreateShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IW4DXGI_FO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x180140AA0 (-CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@P.c)
 */

__int64 __fastcall CHwBitmapColorSource::CreateSharedTexture(CHwBitmapColorSource *this, bool a2)
{
  __int128 v2; // xmm1
  struct CD3DDeviceLevel1 *v3; // r8
  int v4; // eax
  int SharedTexture; // eax
  unsigned int v6; // ebx
  __int128 v8; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v9[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v10; // [rsp+60h] [rbp-38h]
  int v11; // [rsp+68h] [rbp-30h]
  __int128 v12; // [rsp+70h] [rbp-28h]

  v2 = *(_OWORD *)((char *)this + 232);
  v3 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 2);
  *(_QWORD *)&v8 = "DWM Redirection Surface";
  v4 = *((_DWORD *)this + 64);
  DWORD2(v8) = 23;
  v11 = v4;
  v9[1] = v2;
  v12 = v8;
  v9[0] = *(_OWORD *)((char *)this + 216);
  v10 = *((_QWORD *)this + 31);
  SharedTexture = CD3DVidMemOnlyTexture::CreateSharedTexture(
                    (const struct DWM_TEXTURE2D_DESC *)v9,
                    a2,
                    v3,
                    (void **)&v8,
                    (struct CD3DVidMemOnlyTexture **)this + 20);
  v6 = SharedTexture;
  if ( SharedTexture < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SharedTexture, 0xAE1u);
  return v6;
}
