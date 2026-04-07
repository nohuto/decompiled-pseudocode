/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x18003AFAC (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001CED0 (-Create@CCanvas@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001D5D8 (--0CWindowData@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A1A0 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18003B0F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18003B1C0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18003B660 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BAF0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BB70 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BBEC (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BC60 (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003BCC8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C580 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C630 (-Create@CImage@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x18003CDB0 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z @ 0x18003D184 (-Create@CClientArea@@SAJQEAUMIL_CHANNEL__@@IPEAPEAV1@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v3; // rax
  CTopLevelWindow **v4; // rdi
  int inserted; // eax
  unsigned int v6; // ebx
  struct CVisual **v7; // r15
  char *v8; // r14
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  int v12; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)this + 9) = a2;
  *((_DWORD *)this + 4) = 5;
  v3 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                        WPF::g_pProcessHeap,
                        1224LL);
  if ( v3 )
    v3 = CWindowData::CWindowData(v3);
  *((_QWORD *)this + 10) = v3;
  if ( !v3 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x65u);
    return v6;
  }
  v4 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CTopLevelWindow **)this + 11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 106;
LABEL_45:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, v11);
    return v6;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 384LL) = *v4;
  if ( *v4 )
    _InterlockedIncrement((volatile signed __int32 *)*v4 + 2);
  v7 = (struct CVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 408LL) = this;
  *((_QWORD *)*v4 + 93) = *((_QWORD *)this + 10);
  *((_BYTE *)*v4 + 264) |= 0x20u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 569LL) |= 0x10u;
  inserted = CCanvas::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CCanvas **)this + 13);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 134;
    goto LABEL_45;
  }
  inserted = CImage::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CImage **)this + 12);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 135;
    goto LABEL_45;
  }
  inserted = VisualCollection::InsertRelative(
               (struct CVisual *)((char *)*v7 + 32),
               *((struct CVisual **)this + 12),
               0LL,
               0,
               1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 136;
    goto LABEL_45;
  }
  v8 = (char *)this + 112;
  inserted = CClientArea::Create(
               *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
               0,
               (struct CClientArea **)this + 14);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 137;
    goto LABEL_45;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v8 + 32LL), *v7, 0LL, 0, 1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 138;
    goto LABEL_45;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
  if ( v9 )
    LODWORD(v9) = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(*((_QWORD *)this + 10) + 128LL) = v9;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
    this,
    (enum IconicRepresentationType *)&v12);
  inserted = CWindowIconic::SetRepresentationType((__int64)this, v12, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 146;
    goto LABEL_45;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 147;
    goto LABEL_45;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 148;
    goto LABEL_45;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 149;
    goto LABEL_45;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 150;
    goto LABEL_45;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 376LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 570LL) & 2) != 0,
                 0);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v11 = 153;
      goto LABEL_45;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 155;
    goto LABEL_45;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 156;
    goto LABEL_45;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 157;
    goto LABEL_45;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v4, 1);
  return v6;
}
