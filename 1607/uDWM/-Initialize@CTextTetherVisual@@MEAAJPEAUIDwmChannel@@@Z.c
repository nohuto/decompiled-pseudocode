/*
 * XREFs of ?Initialize@CTextTetherVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x1800888C0
 * Callers:
 *     ??$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z @ 0x1800857DC (--$CreateTouchVisual@VCTextTetherVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTextTetherVisual@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001F250 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z @ 0x18001F620 (-Initialize@CVisual@@MEAAJPEAUIDwmChannel@@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180048B3C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTextTetherVisual::Initialize(struct CBitmapSource **this, struct IDwmChannel *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CBitmapSource **v6; // r14
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  struct CVisual **v9; // rsi
  int v10; // eax
  VisualCollection *v11; // r15
  int inserted; // eax
  int v13; // eax
  struct tagSIZE **v14; // rsi
  void *v15; // rax
  int v16; // eax
  struct CImage **v17; // rdi
  int v18; // eax
  int v19; // eax
  struct tagSIZE *v20; // rdx
  CImage *v21; // rcx
  int v22; // eax
  struct tagSIZE v24; // [rsp+60h] [rbp+18h] BYREF

  v4 = CVisual::Initialize((CVisual *)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = this + 47;
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 5, 0LL, this + 47);
    v5 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v9 = this + 48;
      v24 = (struct tagSIZE)*((_QWORD *)*v6 + 3);
      v10 = CImage::Create(a2, this + 48);
      v5 = v10;
      if ( v10 >= 0 )
      {
        v11 = (VisualCollection *)(this + 4);
        inserted = VisualCollection::InsertRelative((VisualCollection *)(this + 4), *v9, 0LL, 0, 1);
        v5 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetInterpolationMode(*v9, 6);
          v13 = CImage::SetBitmapSource(*v9, *v6);
          v5 = v13;
          if ( v13 >= 0 )
          {
            CVisual::SetSize((struct tagSIZE *)*v9, &v24);
            CVisual::MoveToFront(*v9, 0);
            v14 = (struct tagSIZE **)(this + 49);
            v15 = (void *)CDesktopManager::GetTheme(1);
            v16 = CTopLevelWindow::CreateBitmapFromAtlas(v15, 4, 0LL, this + 49);
            v5 = v16;
            if ( v16 >= 0 )
            {
              v17 = this + 50;
              v18 = CImage::Create(a2, v17);
              v5 = v18;
              if ( v18 >= 0 )
              {
                v19 = VisualCollection::InsertRelative(v11, *v17, 0LL, 0, 1);
                v5 = v19;
                if ( v19 >= 0 )
                {
                  CVisual::SetInterpolationMode(*v17, 6);
                  v20 = *v14;
                  v21 = *v17;
                  v24 = (*v14)[3];
                  v22 = CImage::SetBitmapSource(v21, (struct CBitmapSource *)v20);
                  v5 = v22;
                  if ( v22 >= 0 )
                  {
                    CVisual::SetSize((struct tagSIZE *)*v17, &v24);
                    CVisual::MoveToFront(*v17, 0);
                  }
                  else
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x4Cu);
                  }
                }
                else
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x48u);
                }
              }
              else
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x47u);
              }
            }
            else
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x45u);
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x40u);
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x3Eu);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x3Du);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x3Au);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x36u);
  }
  return v5;
}
