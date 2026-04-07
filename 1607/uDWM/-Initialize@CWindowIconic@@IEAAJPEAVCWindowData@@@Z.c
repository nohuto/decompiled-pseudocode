/*
 * XREFs of ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038B3C
 * Callers:
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x180039E58 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ?Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z @ 0x180015D54 (-Create@CClientArea@@SAJPEAUIDwmChannel@@IPEAPEAV1@@Z.c)
 *     ?Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180017790 (-Create@CCanvas@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x18001A154 (--0CWindowData@@QEAA@XZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027138 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresentationType@@@Z @ 0x180033A34 (-RegisterIconicRepresentation@CIconicBitmapRegistry@@QEAAJPEAVCWindowIconic@@PEAW4IconicRepresen.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x180038444 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x1800385A0 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800385F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180038A24 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038EAC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038F2C (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180038FA8 (-OnAlphaUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003901C (-OnColorizationUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180039084 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800397DC (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::Initialize(CWindowIconic *this, struct CWindowData *a2)
{
  CWindowData *v3; // rax
  CTopLevelWindow **v4; // rsi
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
                        1232LL);
  if ( v3 )
    v3 = CWindowData::CWindowData(v3);
  *((_QWORD *)this + 10) = v3;
  if ( !v3 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x65u);
    return v6;
  }
  v4 = (CTopLevelWindow **)((char *)this + 88);
  inserted = CTopLevelWindow::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CTopLevelWindow **)this + 11);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 106;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, v11);
    return v6;
  }
  *(_QWORD *)(*((_QWORD *)this + 10) + 384LL) = *v4;
  if ( *v4 )
    _InterlockedIncrement((volatile signed __int32 *)*v4 + 2);
  v7 = (struct CVisual **)((char *)this + 104);
  *(_QWORD *)(*((_QWORD *)this + 10) + 416LL) = this;
  *((_QWORD *)*v4 + 93) = *((_QWORD *)this + 10);
  *((_BYTE *)*v4 + 264) |= 0x20u;
  *(_QWORD *)(*((_QWORD *)this + 10) + 40LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 40LL);
  *(_QWORD *)(*((_QWORD *)this + 10) + 32LL) = *(_QWORD *)(*((_QWORD *)this + 9) + 32LL);
  *(_BYTE *)(*((_QWORD *)this + 10) + 577LL) |= 0x10u;
  inserted = CCanvas::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CCanvas **)this + 13);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 134;
    goto LABEL_30;
  }
  inserted = CImage::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               (struct CImage **)this + 12);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 135;
    goto LABEL_30;
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
    goto LABEL_30;
  }
  v8 = (char *)this + 112;
  inserted = CClientArea::Create(
               *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4),
               0,
               (struct CClientArea **)this + 14);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 137;
    goto LABEL_30;
  }
  inserted = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)v8 + 32LL), *v7, 0LL, 0, 1);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 138;
    goto LABEL_30;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v8 + 16LL);
  if ( v9 )
    LODWORD(v9) = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(*((_QWORD *)this + 10) + 128LL) = v9;
  CIconicBitmapRegistry::RegisterIconicRepresentation(
    *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 26),
    this,
    (enum IconicRepresentationType *)&v12);
  inserted = CWindowIconic::SetRepresentationType((__int64)this, v12, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 146;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnColorizationUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 147;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnAlphaUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 148;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnTitleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 149;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnIconUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 150;
    goto LABEL_30;
  }
  if ( !*((_BYTE *)this + 20) )
  {
    inserted = CWindowIconic::SetBitmap(
                 this,
                 *(struct CBitmapSource **)(*((_QWORD *)this + 9) + 376LL),
                 (*(_BYTE *)(*((_QWORD *)this + 9) + 578LL) & 2) != 0,
                 0);
    v6 = inserted;
    if ( inserted < 0 )
    {
      v11 = 153;
      goto LABEL_30;
    }
  }
  inserted = CWindowIconic::LoadCentralImage(this);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 155;
    goto LABEL_30;
  }
  inserted = CWindowIconic::OnWindowStyleUpdated(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 156;
    goto LABEL_30;
  }
  inserted = CWindowIconic::UpdateSizeOrMargins(this, 0);
  v6 = inserted;
  if ( inserted < 0 )
  {
    v11 = 157;
    goto LABEL_30;
  }
  if ( *((_BYTE *)this + 20) )
    CTopLevelWindow::ShowWindow(*v4, 1);
  return v6;
}
