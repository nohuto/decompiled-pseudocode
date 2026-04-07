/*
 * XREFs of ?Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008F590
 * Callers:
 *     ??$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisual@@@Z @ 0x18007D198 (--$CreateTouchVisual@VCIndirectTouchVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCIndirectTouchVisua.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800124AC (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001C850 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180041D9C (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x18008FE5C (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::Initialize(CIndirectTouchVisual *this, struct MIL_CHANNEL__ *const a2)
{
  int v4; // eax
  unsigned int v5; // edi
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  struct CVisual **v8; // rsi
  __int64 v9; // rax
  int v10; // eax
  int inserted; // eax

  v4 = CVisual::Initialize((CBaseObject **)this, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Theme = (void *)CDesktopManager::GetTheme(1);
    BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                   Theme,
                                   8,
                                   0xFu,
                                   0LL,
                                   (struct CBitmapSource ***)this + 46);
    v5 = BitmapsFromAtlasImageStrip;
    if ( BitmapsFromAtlasImageStrip >= 0 )
    {
      v8 = (struct CVisual **)((char *)this + 360);
      v9 = *(_QWORD *)(**((_QWORD **)this + 46) + 24LL);
      *((_DWORD *)this + 100) = -1;
      *((_DWORD *)this + 70) = 0;
      *(_QWORD *)((char *)this + 292) = v9;
      *((_DWORD *)this + 76) = 1041865114;
      *((_DWORD *)this + 78) = 1041865114;
      *((_DWORD *)this + 77) = 1036831949;
      *((_DWORD *)this + 79) = 1051372202;
      *((_DWORD *)this + 80) = 1059760810;
      v10 = CImage::Create(a2, (struct CImage **)this + 45);
      v5 = v10;
      if ( v10 >= 0 )
      {
        inserted = VisualCollection::InsertRelative((CIndirectTouchVisual *)((char *)this + 32), *v8, 0LL, 0, 1);
        v5 = inserted;
        if ( inserted >= 0 )
        {
          CVisual::SetSize((struct tagSIZE *)*v8, (const struct tagSIZE *)((char *)this + 292));
          *((_QWORD *)this + 42) = 0LL;
          *((_QWORD *)this + 43) = 0LL;
          *((_QWORD *)this + 44) = 0LL;
          *((_DWORD *)this + 81) = 0;
          *((_DWORD *)this + 82) = 0;
          CIndirectTouchVisual::UpdateOpacityAndSource(this);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x50u);
        }
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x4Fu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x28u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x25u);
  }
  return v5;
}
