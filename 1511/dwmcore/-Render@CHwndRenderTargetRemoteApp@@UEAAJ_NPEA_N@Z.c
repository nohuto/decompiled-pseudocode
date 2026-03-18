/*
 * XREFs of ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x180114680
 * Callers:
 *     <none>
 * Callees:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x18007CC50 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::Render(CHwndRenderTargetRemoteApp *this, char a2, bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CHwndRenderTarget::Render(this, a2, a3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = CHwndRenderTarget::Present(this, 0, 0);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x8Fu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x8Eu);
  }
  return v5;
}
