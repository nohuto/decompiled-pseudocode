/*
 * XREFs of ?Initialize@CTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180086A60
 * Callers:
 *     ??$CreateTouchVisual@VCTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTetherVisual@@@Z @ 0x18007D648 (--$CreateTouchVisual@VCTetherVisual@@@@YAJQEAUMIL_CHANNEL__@@_KPEAPEAVCTetherVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x1800159C0 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18001CF40 (-Initialize@CVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180040F6C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180088E8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTetherVisual::Initialize(CBaseObject **this, struct MIL_CHANNEL__ *const a2)
{
  int BitmapFromAtlas; // eax
  unsigned int v4; // ebx
  void *Theme; // rax
  __int128 v6; // xmm0
  CBaseObject *v7; // rax
  unsigned int v9; // [rsp+20h] [rbp-18h]

  BitmapFromAtlas = CVisual::Initialize(this, a2);
  v4 = BitmapFromAtlas;
  if ( BitmapFromAtlas < 0 )
  {
    v9 = 51;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, BitmapFromAtlas, v9);
    return v4;
  }
  Theme = (void *)CDesktopManager::GetTheme(1);
  BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, 3, 0LL, this + 41);
  v4 = BitmapFromAtlas;
  if ( BitmapFromAtlas < 0 )
  {
    v9 = 53;
    goto LABEL_12;
  }
  v6 = *((_OWORD *)this[41] + 5);
  *((_BYTE *)this + 400) = 0;
  *((_OWORD *)this + 21) = v6;
  if ( *((float *)this + 99) > 0.0 )
  {
    v7 = (CBaseObject *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                          WPF::g_pProcessHeap,
                          80LL);
    if ( v7 )
      v7 = (CBaseObject *)CTimeline<float>::CTimeline<float>((__int64)v7, *((float *)this + 99), 1.0, 0.0, 0);
    this[48] = v7;
    if ( v7 )
    {
      BitmapFromAtlas = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)this);
      v4 = BitmapFromAtlas;
      if ( BitmapFromAtlas < 0 )
      {
        v9 = 77;
        goto LABEL_12;
      }
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x4Cu);
    }
  }
  return v4;
}
