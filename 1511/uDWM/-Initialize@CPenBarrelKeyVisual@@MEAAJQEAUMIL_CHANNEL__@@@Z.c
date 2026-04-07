/*
 * XREFs of ?Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B080
 * Callers:
 *     ??$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenBarrelKeyVisual@@@Z @ 0x180084CF8 (--$CreateTouchVisual@VCPenBarrelKeyVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPenBarrelKeyVisual@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800222C0 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180036768 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C630 (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180047950 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::Initialize(CPenBarrelKeyVisual *this, struct MIL_CHANNEL__ *const a2)
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
      *((_DWORD *)this + 80) = (int)(*((double *)v9 + 166) * 20.0);
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
