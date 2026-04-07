/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008B440
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z @ 0x1800855F4 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x180048814 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(struct tagSIZE *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  void *Theme; // rax
  struct CBitmapSource **v7; // r9
  int BitmapFromAtlas; // eax
  int MinimumContactWidth; // eax
  struct CVisual **v10; // r15
  int v11; // eax
  struct CVisual **v12; // r14
  int v13; // eax

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v7);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      this[46].cy = 0;
      this[47].cx = 0;
      this[48] = 0LL;
      this[44].cy = 1067030938;
      this[45].cx = 1072064102;
      this[45].cy = 1065353216;
      this[46].cx = 1067869798;
      this[47].cy = 150;
      this[43].cx = 1050253722;
      this[43].cy = 1059760811;
      this[44].cx = 1051372203;
      LOBYTE(this[33].cx) = 0;
      MinimumContactWidth = CContactManager::GetMinimumContactWidth(0LL);
      v10 = (struct CVisual **)&this[41];
      this[40].cy = MinimumContactWidth;
      this[39].cy = MinimumContactWidth;
      this[40].cx = MinimumContactWidth;
      this[39].cx = MinimumContactWidth;
      v11 = CImage::Create(a2, (struct CImage **)&this[41]);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v12 = (struct CVisual **)&this[42];
        v13 = CImage::Create(a2, (struct CImage **)&this[42]);
        v5 = v13;
        if ( v13 >= 0 )
        {
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v10, 0LL, 0, 1);
          VisualCollection::InsertRelative((VisualCollection *)&this[4], *v12, 0LL, 0, 1);
          CVisual::SetSize((struct tagSIZE *)*v10, this + 39);
          CVisual::SetSize((struct tagSIZE *)*v12, this + 40);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x44u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x43u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x25u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x22u);
  }
  return v5;
}
