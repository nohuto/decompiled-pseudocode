/*
 * XREFs of ?Render@CHwndRenderTargetRemoteApp@@UEAAJ_NPEA_N@Z @ 0x18012DB70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::Render(CHwndRenderTargetRemoteApp *this, __int64 a2, bool *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  v4 = CHwndRenderTarget::Render(this, a2, a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x93u);
  }
  else
  {
    v6 = CHwndRenderTarget::Present(this, 0, 0);
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x94u);
  }
  return v5;
}
