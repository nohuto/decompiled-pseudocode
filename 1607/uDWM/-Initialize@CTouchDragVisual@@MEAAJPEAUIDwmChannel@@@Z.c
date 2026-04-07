/*
 * XREFs of ?Initialize@CTouchDragVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180089400
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800858B4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTouchDragVisual::Initialize(CTouchDragVisual *this, struct IDwmChannel *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *Theme; // rax
  int v6; // edx
  int BitmapFromAtlas; // eax

  v3 = CVisual::Initialize(this, a2);
  v4 = v3;
  if ( v3 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v6, 0LL, (struct CBitmapSource **)this + 46);
    v4 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
      *(_OWORD *)((char *)this + 376) = *(_OWORD *)(*((_QWORD *)this + 46) + 80LL);
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x45u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x42u);
  }
  return v4;
}
