/*
 * XREFs of ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18017B378
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18017A6E0 (-ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180175294 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::ReadTexture(
        CHwSurfaceRenderTarget *this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  unsigned int v6; // ebx
  int Texture; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]
  CD3DDeviceLevel1 *v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(CHwSurfaceRenderTarget *))(*(_QWORD *)this + 168LL))(this) )
  {
    if ( a2
      && (Texture = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
                      a2,
                      a3),
          v6 = Texture,
          Texture < 0) )
    {
      v9 = 978;
    }
    else
    {
      Texture = (*(__int64 (__fastcall **)(CHwSurfaceRenderTarget *, CD3DDeviceLevel1 **))(*(_QWORD *)this + 216LL))(
                  this,
                  &v10);
      v6 = Texture;
      if ( Texture < 0 )
      {
        v9 = 981;
      }
      else
      {
        Texture = CD3DDeviceLevel1::ReadTexture(v10, *(struct ID3D11Texture2D **)(*((_QWORD *)this + 21) + 136LL));
        v6 = Texture;
        if ( Texture >= 0 )
          return v6;
        v9 = 983;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, v9);
    return v6;
  }
  v6 = -2147024891;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x3CBu);
  return v6;
}
