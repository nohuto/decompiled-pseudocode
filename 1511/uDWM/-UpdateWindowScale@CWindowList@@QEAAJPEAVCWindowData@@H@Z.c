/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180030110
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF80 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800302A4 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180030BE0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180003B74 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180017558 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001E6B4 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18002A080 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18002A0AC (-OnWindowSizeUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002FFEC (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003B22C (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     floor_0 @ 0x18004FF2A (floor_0.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180070490 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800705B0 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(CWindowList *this, struct tagPOINT *a2, int a3)
{
  __int64 v6; // rbp
  int v7; // esi
  int v8; // ebx
  float v9; // xmm2_4
  CTopLevelWindow *v10; // rcx
  int v11; // eax
  int v12; // ebx
  unsigned int i; // esi
  int updated; // eax
  CWindowList *v16; // rcx
  CTopLevelWindow *v17; // rcx
  HWND v18; // rdx
  __int64 v19; // rbx
  __int128 v20; // [rsp+30h] [rbp-38h]
  bool v21; // [rsp+78h] [rbp+10h] BYREF
  struct tagPOINT v22; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0LL;
  CWindowData::EstablishPixelAlignedScale((CWindowData *)a2, &v21);
  v7 = a2[24].y - a2[23].y;
  if ( v7 < 0 )
    v7 = 0;
  v8 = a2[25].x - a2[24].x;
  if ( v8 < 0 )
    v8 = 0;
  v9 = *(float *)&a2[21].y;
  if ( v9 != 1.0 || *(float *)&a2[22].x != 1.0 )
  {
    v7 = (int)floor_0((float)((float)v7 * v9) + 0.5);
    v8 = (int)floor_0((float)((float)v8 * *(float *)&a2[22].x) + 0.5);
  }
  a2[7].x = v7 + a2[6].x;
  a2[7].y = v8 + a2[6].y;
  v10 = (CTopLevelWindow *)a2[48];
  if ( !v10 )
    goto LABEL_14;
  v11 = CTopLevelWindow::OnWindowSizeUpdated(v10);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x1B9Du);
  }
  else
  {
    v10 = (CTopLevelWindow *)a2[51];
    if ( v10 && (updated = CWindowIconic::UpdateSizeOrMargins(v10, 0), v12 = updated, updated < 0) )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1BA2u);
    }
    else
    {
      for ( i = 0; i < a2[55].x; ++i )
      {
        v10 = (CTopLevelWindow *)a2[52];
        v20 = *(_OWORD *)(*((_QWORD *)v10 + i) + 64LL);
        if ( (struct tagPOINT *)v20 == a2 && ((DWORD2(v20) - 1) & 0xFFFFFFFD) == 0 )
          CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(*((CSecondaryWindowRepresentation **)v10 + i));
      }
      if ( a2[60].x )
      {
        do
        {
          v10 = *(CTopLevelWindow **)(*(_QWORD *)(*(_QWORD *)&a2[57] + 8 * v6) + 88LL);
          if ( v10 )
            CThumbnailVisual::SetDirtyFlags(v10, 4096);
          v6 = (unsigned int)(v6 + 1);
        }
        while ( (unsigned int)v6 < a2[60].x );
      }
    }
  }
  LODWORD(v6) = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xA9Cu);
  }
  else
  {
LABEL_14:
    if ( v21 || a3 )
    {
      CWindowList::OnClientMarginsChange(v10, (struct CWindowData *)a2);
      CWindowList::OnClientGlassChange(v16, (struct CWindowData *)a2);
      v17 = (CTopLevelWindow *)a2[48];
      if ( v17 )
        CTopLevelWindow::OnWindowScaleUpdated(v17);
      v18 = (HWND)a2[5];
      v22 = a2[6];
      v21 = 0;
      v19 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      CWindowPropertyTracker::GetWindowEndPosition((CWindowPropertyTracker *)(v19 + 48), v18, &v22);
      CAnimationScheduler::OnWindowPositionChange((CAnimationScheduler *)v19, (const struct CWindowData *)a2, v22, &v21);
      if ( !v21 )
        CWindowList::OnPositionChange(this, (struct CWindowData *)a2, 1);
    }
  }
  return (unsigned int)v6;
}
