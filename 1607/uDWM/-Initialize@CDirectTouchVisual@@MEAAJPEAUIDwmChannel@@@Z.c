/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x180048280
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180047F00 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCDirectTouchVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(CDirectTouchVisual *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rax
  int v7; // eax
  struct CVisual **v8; // rsi
  __int64 v9; // rcx
  int v10; // eax
  int inserted; // eax
  void *Theme; // rax
  int BitmapFromAtlas; // eax

  v4 = CVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x26u);
  }
  else
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 18) + 324LL) )
    {
      Theme = (void *)CDesktopManager::GetTheme(1);
      BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, (struct CBitmapSource **)this + 50);
      v5 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, BitmapFromAtlas, 0x2Cu);
        return v5;
      }
    }
    else
    {
      v6 = (void *)CDesktopManager::GetTheme(1);
      v7 = CTopLevelWindow::CreateBitmapFromAtlas(v6, 2, 0LL, (struct CBitmapSource **)this + 50);
      v5 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x30u);
        return v5;
      }
    }
    v8 = (struct CVisual **)((char *)this + 392);
    v9 = *(_QWORD *)(*((_QWORD *)this + 50) + 24LL);
    *((_DWORD *)this + 82) = 0;
    *((_QWORD *)this + 38) = v9;
    *((_BYTE *)this + 384) = 0;
    *((_DWORD *)this + 83) = 1065353216;
    *((_DWORD *)this + 84) = 1065353216;
    *((_DWORD *)this + 85) = 1068708659;
    *((_DWORD *)this + 86) = 1067030938;
    *((_DWORD *)this + 81) = 1033476506;
    *((_DWORD *)this + 87) = 1028443341;
    *((_DWORD *)this + 78) = 1040522936;
    *((_DWORD *)this + 79) = 1061481551;
    *((_DWORD *)this + 80) = 1047285445;
    v10 = CImage::Create(a2, (struct CImage **)this + 49);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x44u);
    }
    else
    {
      inserted = VisualCollection::InsertRelative((CDirectTouchVisual *)((char *)this + 32), *v8, 0LL, 0, 1);
      v5 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x45u);
      }
      else
      {
        CVisual::SetSize((struct tagSIZE *)*v8, (const struct tagSIZE *)this + 38);
        *((_QWORD *)this + 45) = 0LL;
        *((_QWORD *)this + 46) = 0LL;
        *((_QWORD *)this + 47) = 0LL;
        *((_BYTE *)this + 264) = 0;
      }
    }
  }
  return v5;
}
