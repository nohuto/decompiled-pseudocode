/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C850 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EEA0 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800071D8 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18000B0C4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180015FA0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x18001B260 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800270A0 (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031750 (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034D34 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x1800385F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180070098 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800701B8 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007D324 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(CWindowList *this, struct tagPOINT *a2, int a3)
{
  unsigned int v6; // ebp
  int v7; // esi
  int v8; // edi
  float v9; // xmm2_4
  unsigned __int64 v10; // rcx
  struct tagPOINT v11; // rdi
  _DWORD *v12; // rcx
  LONG v13; // eax
  LONG v14; // edx
  bool v15; // zf
  void (__fastcall *v16)(CVisual *, int); // rax
  CButton *v17; // rcx
  CBaseObject *v18; // rsi
  CWindowIconic *v19; // rcx
  int v20; // edi
  unsigned int i; // esi
  __int64 v23; // rcx
  CBaseObject *v24; // rcx
  int updated; // eax
  CWindowList *v26; // rcx
  CTopLevelWindow *v27; // rcx
  HWND v28; // rdx
  __int128 v29; // [rsp+30h] [rbp-38h]
  bool v30; // [rsp+78h] [rbp+10h] BYREF
  struct tagPOINT v31; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  CWindowData::EstablishPixelAlignedScale((CWindowData *)a2, &v30);
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
  v10 = (unsigned int)(v8 + a2[6].y);
  v11 = a2[48];
  a2[7].y = v10;
  if ( !*(_QWORD *)&v11 )
    goto LABEL_26;
  v12 = *(_DWORD **)(*(_QWORD *)&v11 + 744LL);
  v13 = v12[14] - v12[12];
  if ( v13 < 0 )
    v13 = 0;
  v14 = v12[15] - v12[13];
  v31.x = v13;
  if ( v14 < 0 )
    v14 = 0;
  v31.y = v14;
  if ( *(_DWORD *)(*(_QWORD *)&v11 + 112LL) != v13 || *(_DWORD *)(*(_QWORD *)&v11 + 116LL) != v14 )
  {
    v15 = (*(_BYTE *)(*(_QWORD *)&v11 + 84LL) & 1) == 0;
    *(struct tagPOINT *)(*(_QWORD *)&v11 + 112LL) = v31;
    if ( !v15 )
      (*(void (__fastcall **)(struct tagPOINT, __int64))(**(_QWORD **)&v11 + 24LL))(v11, 16LL);
    v16 = *(void (__fastcall **)(CVisual *, int))(**(_QWORD **)&v11 + 24LL);
    if ( v16 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(*(CVisual **)&v11, 2);
    else
      v16(*(CVisual **)&v11, 2);
  }
  v17 = *(CButton **)(*(_QWORD *)&v11 + 760LL);
  if ( v17 )
  {
    CButton::SetMouseCapture(v17, 0);
    v24 = *(CBaseObject **)(*(_QWORD *)&v11 + 760LL);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *(_QWORD *)(*(_QWORD *)&v11 + 760LL) = 0LL;
    }
  }
  v18 = *(CBaseObject **)(*(_QWORD *)&v11 + 752LL);
  if ( v18 )
  {
    *(_QWORD *)(*(_QWORD *)&v11 + 752LL) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v18 + 96LL))(v18);
    v23 = *(_QWORD *)(*(_QWORD *)&v11 + 752LL);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23);
    CBaseObject::Release(v18);
  }
  v19 = (CWindowIconic *)a2[52];
  v20 = 0;
  if ( v19 && (updated = CWindowIconic::UpdateSizeOrMargins(v19, 0), v20 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x1820u);
  }
  else
  {
    v10 = (unsigned __int64)a2[50];
    if ( v10 )
      CProjectionBorderVisual::UpdateRectFromWindow((CProjectionBorderVisual *)v10, (struct CWindowData *)a2);
    for ( i = 0; i < a2[56].x; ++i )
    {
      v10 = *(_QWORD *)(*(_QWORD *)&a2[53] + 8LL * i);
      v29 = *(_OWORD *)(v10 + 64);
      if ( (struct tagPOINT *)v29 == a2 && ((DWORD2(v29) - 1) & 0xFFFFFFFD) == 0 )
        CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated((CSecondaryWindowRepresentation *)v10);
    }
    if ( a2[61].x )
    {
      do
      {
        v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a2[58] + 8LL * v6) + 88LL);
        if ( v10 )
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)v10, 4096);
        ++v6;
      }
      while ( v6 < a2[61].x );
    }
  }
  v6 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x970u);
  }
  else
  {
LABEL_26:
    if ( v30 || a3 )
    {
      CWindowList::OnClientMarginsChange((CWindowList *)v10, (struct CWindowData *)a2);
      CWindowList::OnClientGlassChange(v26, (struct CWindowData *)a2);
      v27 = (CTopLevelWindow *)a2[48];
      if ( v27 )
        CTopLevelWindow::OnWindowScaleUpdated(v27);
      v28 = (HWND)a2[5];
      v31 = a2[6];
      v30 = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 22) + 48LL),
        v28,
        &v31);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 22),
        (const struct CWindowData *)a2,
        v31,
        &v30);
      if ( !v30 )
        CWindowList::OnPositionChange(this, (struct CWindowData *)a2, 1);
    }
  }
  return v6;
}
