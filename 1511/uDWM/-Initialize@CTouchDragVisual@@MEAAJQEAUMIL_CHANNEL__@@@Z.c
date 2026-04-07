/*
 * XREFs of ?Initialize@CTouchDragVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180089E30
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x180085260 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047950 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTouchDragVisual::Initialize(CTouchDragVisual *this, struct MIL_CHANNEL__ *const a2)
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
