/*
 * XREFs of ?PresentOutOfFrameDirectFlip@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x180140380
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x180139410 (-PresentOutOfFrameDirectFlip@CHwDisplayRenderTarget@@UEAAJ_N@Z.c)
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
