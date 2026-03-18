/*
 * XREFs of ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x180082A14
 * Callers:
 *     ?Realize@CHwBitmapColorSource@@UEAAJXZ @ 0x180081F30 (-Realize@CHwBitmapColorSource@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A6634 (-CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 */

__int64 __fastcall CHwBitmapColorSource::CreateTexture(CHwBitmapColorSource *this)
{
  __int128 v1; // xmm1
  struct CD3DDeviceLevel1 *v2; // r8
  int Texture; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+30h] [rbp-68h]
  _OWORD v7[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  __int128 v10; // [rsp+70h] [rbp-28h]

  v1 = *(_OWORD *)((char *)this + 232);
  v2 = (struct CD3DDeviceLevel1 *)*((_QWORD *)this + 2);
  *(_QWORD *)&v6 = "DWM Cached Bitmap";
  DWORD2(v6) = 17;
  v9 = *((_DWORD *)this + 64);
  v7[1] = v1;
  v10 = v6;
  v7[0] = *(_OWORD *)((char *)this + 216);
  v8 = *((_QWORD *)this + 31);
  Texture = CD3DVidMemOnlyTexture::CreateTexture(
              (const struct DWM_TEXTURE2D_DESC *)v7,
              1,
              v2,
              (struct CD3DVidMemOnlyTexture **)this + 20);
  v4 = Texture;
  if ( Texture < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xA9Eu);
  return v4;
}
