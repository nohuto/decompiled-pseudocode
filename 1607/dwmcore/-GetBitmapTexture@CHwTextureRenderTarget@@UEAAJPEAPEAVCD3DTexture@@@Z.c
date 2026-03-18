/*
 * XREFs of ?GetBitmapTexture@CHwTextureRenderTarget@@UEAAJPEAPEAVCD3DTexture@@@Z @ 0x180013C20
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180013898 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::GetBitmapTexture(CHwTextureRenderTarget *this, struct CD3DTexture **a2)
{
  struct CD3DTexture *v2; // rcx
  unsigned int v3; // ebx

  v2 = (struct CD3DTexture *)*((_QWORD *)this + 4);
  v3 = 0;
  if ( v2 )
  {
    *a2 = v2;
    (**(void (__fastcall ***)(struct CD3DTexture *))v2)(v2);
  }
  else
  {
    v3 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x274u);
  }
  return v3;
}
