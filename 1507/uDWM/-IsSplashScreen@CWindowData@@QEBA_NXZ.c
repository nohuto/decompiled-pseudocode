/*
 * XREFs of ?IsSplashScreen@CWindowData@@QEBA_NXZ @ 0x18001824C
 * Callers:
 *     ?HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ @ 0x180018740 (-HasNonTrivialRepresentation@CWindowData@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CWindowData::IsSplashScreen(CWindowData *this)
{
  unsigned __int16 v1; // ax

  v1 = g_atomSplashScreen;
  if ( !g_atomSplashScreen )
  {
    v1 = RegisterWindowMessageW(L"ImmersiveSplashScreenWindowClass");
    g_atomSplashScreen = v1;
  }
  if ( !*((_WORD *)this + 578) )
  {
    *((_WORD *)this + 578) = GetClassLongW(*((HWND *)this + 5), -32);
    v1 = g_atomSplashScreen;
  }
  return *((_WORD *)this + 578) == v1;
}
