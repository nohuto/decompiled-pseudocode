/*
 * XREFs of ?ReadTexture@CHwFullScreenRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x18014F8C0
 * Callers:
 *     ?ReadTexture@CHwFullScreenRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z @ 0x1800BDEA0 (-ReadTexture@CHwFullScreenRenderTarget@@WLA@EAAJPEAVID2DContext@@PEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z @ 0x180072DD0 (-GetFrontBuffer@CSwapChainBase@@QEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z @ 0x180145A54 (-ReadTexture@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::ReadTexture(
        CSwapChainBase **this,
        struct ID2DContext *a2,
        const struct ID2DContextOwner *a3)
{
  struct CD3DSurface *v3; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int FrontBuffer; // eax
  int Texture; // eax
  struct CD3DSurface *v10; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  v10 = 0LL;
  if ( a2
    && (v5 = (*(__int64 (__fastcall **)(struct ID2DContext *, const struct ID2DContextOwner *))(*(_QWORD *)a2 + 48LL))(
               a2,
               a3),
        v6 = v5,
        v5 < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xA7u);
  }
  else
  {
    if ( byte_1801A417C )
    {
      FrontBuffer = CSwapChainBase::GetFrontBuffer(this[26], &v10);
      v3 = v10;
      if ( FrontBuffer >= 0 )
        CD3DDeviceLevel1::ReadTexture(this[20], *((struct ID3D11Texture2D **)v10 + 17));
    }
    Texture = CD3DDeviceLevel1::ReadTexture(this[20], *((struct ID3D11Texture2D **)this[21] + 17));
    v6 = Texture;
    if ( Texture < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Texture, 0xB6u);
    if ( v3 )
      CMILPoolResource::Release(v3);
  }
  return v6;
}
