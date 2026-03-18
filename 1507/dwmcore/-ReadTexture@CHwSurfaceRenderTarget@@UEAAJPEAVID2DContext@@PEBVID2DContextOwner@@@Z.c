/*
 * XREFs of ?ReadTexture@CHwSurfaceRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18013AB98
 * Callers:
 *     ?ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1801394D0 (-ReadTexture@CHwTextureRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180134640 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwSurfaceRenderTarget::ReadTexture(
        CD3DDeviceLevel1 **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  unsigned int v6; // ebx
  int Texture; // eax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  if ( !(*((unsigned __int8 (__fastcall **)(CD3DDeviceLevel1 **))*this + 20))(this) )
  {
    if ( a2
      && (Texture = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
                      a2,
                      a3),
          v6 = Texture,
          Texture < 0) )
    {
      v9 = 983;
    }
    else
    {
      Texture = CD3DDeviceLevel1::ReadTexture(this[20], *((struct ID3D11Texture2D **)this[21] + 17));
      v6 = Texture;
      if ( Texture >= 0 )
        return v6;
      v9 = 986;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, v9);
    return v6;
  }
  v6 = -2147024891;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024891, 0x3D0u);
  return v6;
}
