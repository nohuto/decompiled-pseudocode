/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x18014F880
 * Callers:
 *     <none>
 * Callees:
 *     ?PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x1800812B0 (-PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::PresentOutOfFrameDirectFlip(CHwFullScreenRenderTarget *this, char a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = CHwDisplayRenderTarget::PresentOutOfFrameDirectFlip(this, a2);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x108u);
  return v3;
}
