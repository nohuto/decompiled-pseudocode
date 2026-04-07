/*
 * XREFs of ?Initialize@CPenBarrelKeyVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18008A340
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x1800853C0 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCPenBarrelKeyVisual@@@.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Initialize(CPenBarrelKeyVisual *this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v8; // rsi
  CDesktopManager *v9; // rax
  int v10; // eax
  int inserted; // eax

  v4 = CVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 1, 0LL, (struct CBitmapSource **)this + 37);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v8 = (struct CVisual **)((char *)this + 304);
      v9 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)this + 39) = *(_QWORD *)(*((_QWORD *)this + 37) + 24LL);
      *((_DWORD *)this + 80) = (int)(*((double *)v9 + 164) * 20.0);
      v10 = CImage::Create(a2, (struct CImage **)this + 38);
      v5 = v10;
      if ( v10 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CPenBarrelKeyVisual *)((char *)this + 32), *v8, 0LL, 0, 1);
        v5 = inserted;
        if ( inserted >= 0 )
          CVisual::SetSize((struct tagSIZE *)*v8, (const struct tagSIZE *)this + 39);
        else
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x39u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x38u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x32u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x2Fu);
  }
  return v5;
}
