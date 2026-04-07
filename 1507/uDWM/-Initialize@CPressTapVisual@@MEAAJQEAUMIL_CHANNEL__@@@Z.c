/*
 * XREFs of ?Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800885A0
 * Callers:
 *     ??$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z @ 0x18007D524 (--$CreateTouchVisual@VCPressTapVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCPressTapVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180040F6C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z @ 0x180047728 (-GetMinimumContactWidth@CContactManager@@SAHUtagPOINT@@@Z.c)
 */

__int64 __fastcall CPressTapVisual::Initialize(CPressTapVisual *this, struct MIL_CHANNEL__ *const a2)
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

  v4 = CVisual::Initialize((CBaseObject **)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 2, 0LL, v7);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      *((_DWORD *)this + 93) = 0;
      *((_DWORD *)this + 94) = 0;
      *((_QWORD *)this + 48) = 0LL;
      *((_DWORD *)this + 89) = 1067030938;
      *((_DWORD *)this + 90) = 1072064102;
      *((_DWORD *)this + 91) = 1065353216;
      *((_DWORD *)this + 92) = 1067869798;
      *((_DWORD *)this + 95) = 150;
      *((_DWORD *)this + 86) = 1050253722;
      *((_DWORD *)this + 87) = 1059760811;
      *((_DWORD *)this + 88) = 1051372203;
      *((_BYTE *)this + 264) = 0;
      MinimumContactWidth = CContactManager::GetMinimumContactWidth(0LL);
      v10 = (struct CVisual **)((char *)this + 328);
      *((_DWORD *)this + 81) = MinimumContactWidth;
      *((_DWORD *)this + 79) = MinimumContactWidth;
      *((_DWORD *)this + 80) = MinimumContactWidth;
      *((_DWORD *)this + 78) = MinimumContactWidth;
      v11 = CImage::Create(a2, (struct CImage **)this + 41);
      v5 = v11;
      if ( v11 >= 0 )
      {
        v12 = (struct CVisual **)((char *)this + 336);
        v13 = CImage::Create(a2, (struct CImage **)this + 42);
        v5 = v13;
        if ( v13 >= 0 )
        {
          VisualCollection::InsertRelative((CPressTapVisual *)((char *)this + 32), *v10, 0LL, 0, 1);
          VisualCollection::InsertRelative((CPressTapVisual *)((char *)this + 32), *v12, 0LL, 0, 1);
          CVisual::SetSize((struct tagSIZE *)*v10, (const struct tagSIZE *)this + 39);
          CVisual::SetSize((struct tagSIZE *)*v12, (const struct tagSIZE *)this + 40);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x75u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x74u);
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
