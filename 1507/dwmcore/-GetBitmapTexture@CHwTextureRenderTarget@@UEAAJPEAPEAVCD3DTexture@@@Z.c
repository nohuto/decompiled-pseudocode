/*
 * XREFs of ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x180001F70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapTexture(CHwTextureRenderTarget *this, struct CD3DTexture **a2)
{
  struct CD3DTexture *v2; // rsi
  unsigned int v3; // edi

  v2 = (struct CD3DTexture *)*((_QWORD *)this + 2);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    (**(void (__fastcall ***)(struct CD3DTexture *))v2)(v2);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x298u);
  }
  return v3;
}
