/*
 * XREFs of ?Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180047150
 * Callers:
 *     ??$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@Z @ 0x180046DA4 (--$CreateTouchVisual@VCDirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCDirectTouchVisual@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180040F6C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::Initialize(CDirectTouchVisual *this, struct MIL_CHANNEL__ *const a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  void *v8; // rax
  int v9; // eax
  struct CVisual **v10; // rsi
  __int64 v11; // rcx
  int v12; // eax
  int inserted; // eax

  v4 = CVisual::Initialize((CBaseObject **)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20) + 324LL) )
    {
      Theme = (void *)CDesktopManager::GetTheme(1);
      BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 7, 0LL, (struct CBitmapSource **)this + 50);
      v5 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x2Cu);
        return v5;
      }
    }
    else
    {
      v8 = (void *)CDesktopManager::GetTheme(1);
      v9 = CTopLevelWindow::CreateBitmapFromAtlas(v8, 2, 0LL, (struct CBitmapSource **)this + 50);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x30u);
        return v5;
      }
    }
    v10 = (struct CVisual **)((char *)this + 392);
    v11 = *(_QWORD *)(*((_QWORD *)this + 50) + 24LL);
    *((_DWORD *)this + 82) = 0;
    *((_QWORD *)this + 38) = v11;
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
    v12 = CImage::Create(a2, (struct CImage **)this + 49);
    v5 = v12;
    if ( v12 >= 0 )
    {
      inserted = VisualCollection::InsertRelative((CDirectTouchVisual *)((char *)this + 32), *v10, 0LL, 0, 1);
      v5 = inserted;
      if ( inserted >= 0 )
      {
        CVisual::SetSize((struct tagSIZE *)*v10, (const struct tagSIZE *)this + 38);
        *((_QWORD *)this + 45) = 0LL;
        *((_QWORD *)this + 46) = 0LL;
        *((_QWORD *)this + 47) = 0LL;
        *((_BYTE *)this + 264) = 0;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x71u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x70u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x26u);
  }
  return v5;
}
