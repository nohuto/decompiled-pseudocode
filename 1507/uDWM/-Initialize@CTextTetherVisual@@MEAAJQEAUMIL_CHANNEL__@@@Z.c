/*
 * XREFs of ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800836A0
 * Callers:
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x18007D73C (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180012700 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001CB70 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180040F6C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CTextTetherVisual::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CBitmapSource **v6; // r14
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v9; // rsi
  int v10; // eax
  int inserted; // eax
  int v12; // eax
  struct tagSIZE **v13; // r14
  void *v14; // rax
  int v15; // eax
  struct CVisual **v16; // rsi
  int v17; // eax
  int v18; // eax
  struct tagSIZE *v19; // rdx
  CImage *v20; // rcx
  int v21; // eax
  void *v22; // rax
  int v23; // eax
  struct tagSIZE v25; // [rsp+60h] [rbp+18h] BYREF

  v4 = CVisual::Initialize(this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = this + 53;
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 5, 0LL, this + 53);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v9 = this + 54;
      v25 = (struct tagSIZE)*((_QWORD *)*v6 + 3);
      v10 = CImage::Create(a2, this + 54);
      v5 = v10;
      if ( v10 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v9, 0LL, 0, 1);
        v5 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetInterpolationMode(*v9, 6);
          v12 = CImage::SetBitmapSource(*v9, *v6);
          v5 = v12;
          if ( v12 >= 0 )
          {
            CVisual::SetSize((struct tagSIZE *)*v9, &v25);
            CVisual::MoveToFront(*v9, 0);
            v13 = (struct tagSIZE **)(this + 55);
            v14 = (void *)CDesktopManager::GetTheme(1);
            v15 = CTopLevelWindow::CreateBitmapFromAtlas(v14, 4, 0LL, this + 55);
            v5 = v15;
            if ( v15 >= 0 )
            {
              v16 = this + 56;
              v17 = CImage::Create(a2, this + 56);
              v5 = v17;
              if ( v17 >= 0 )
              {
                v18 = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v16, 0LL, 0, 1);
                v5 = v18;
                if ( v18 >= 0 )
                {
                  CVisual::SetInterpolationMode(*v16, 6);
                  v19 = *v13;
                  v20 = *v16;
                  v25 = (*v13)[3];
                  v21 = CImage::SetBitmapSource(v20, (struct CBitmapSource *)v19);
                  v5 = v21;
                  if ( v21 >= 0 )
                  {
                    CVisual::SetSize((struct tagSIZE *)*v16, &v25);
                    CVisual::MoveToFront(*v16, 0);
                    v22 = (void *)CDesktopManager::GetTheme(1);
                    v23 = CTopLevelWindow::CreateBitmapFromAtlas(v22, 3, 0LL, this + 47);
                    v5 = v23;
                    if ( v23 >= 0 )
                      *((_OWORD *)this + 24) = *((_OWORD *)this[47] + 5);
                    else
                      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x65u);
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x5Fu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x5Bu);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x5Au);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x58u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x53u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x51u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x50u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x4Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x41u);
  }
  return v5;
}
