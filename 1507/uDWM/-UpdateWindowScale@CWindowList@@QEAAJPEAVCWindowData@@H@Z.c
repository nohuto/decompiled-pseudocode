/*
 * XREFs of ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002CFC0
 * Callers:
 *     ?DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002AC70 (-DPIChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18002D238 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180003A94 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x180009EAC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z @ 0x180018DF0 (-EstablishPixelAlignedScale@CWindowData@@QEAAXPEA_N@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800247CC (-OnWindowScaleUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CE7C (-OnClientGlassChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x18003451C (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003A270 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     floor_0 @ 0x18004988A (floor_0.c)
 *     ?OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z @ 0x180067B04 (-OnWindowPositionChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@UtagPOINT@@PEA_N@Z.c)
 *     ?OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180067BA4 (-OnClientMarginsChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale(CWindowList *this, struct tagPOINT *a2, int a3)
{
  unsigned int v6; // ebp
  int v7; // esi
  int v8; // ebx
  float v9; // xmm2_4
  LONG v10; // ecx
  struct tagPOINT v11; // rsi
  unsigned __int64 v12; // rcx
  _DWORD *v13; // rdx
  LONG v14; // ecx
  LONG v15; // eax
  bool v16; // zf
  void (__fastcall *v17)(CVisual *, int); // rbx
  CButton *v18; // rcx
  CBaseObject *v19; // r15
  int v20; // ebx
  unsigned int i; // esi
  __int64 v23; // rsi
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
  v10 = v7 + a2[6].x;
  v11 = a2[46];
  a2[7].x = v10;
  v12 = (unsigned int)(v8 + a2[6].y);
  a2[7].y = v12;
  if ( !*(_QWORD *)&v11 )
    goto LABEL_24;
  v13 = *(_DWORD **)(*(_QWORD *)&v11 + 744LL);
  v14 = v13[14] - v13[12];
  if ( v14 < 0 )
    v14 = 0;
  v15 = v13[15] - v13[13];
  v31.x = v14;
  if ( v15 < 0 )
    v15 = 0;
  v31.y = v15;
  if ( *(_DWORD *)(*(_QWORD *)&v11 + 112LL) != v14 || *(_DWORD *)(*(_QWORD *)&v11 + 116LL) != v15 )
  {
    v16 = (*(_BYTE *)(*(_QWORD *)&v11 + 84LL) & 1) == 0;
    *(struct tagPOINT *)(*(_QWORD *)&v11 + 112LL) = v31;
    if ( !v16 )
      (*(void (__fastcall **)(struct tagPOINT, __int64))(**(_QWORD **)&v11 + 24LL))(v11, 16LL);
    v17 = *(void (__fastcall **)(CVisual *, int))(**(_QWORD **)&v11 + 24LL);
    if ( v17 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(*(CVisual **)&v11, 2);
    else
      v17(*(CVisual **)&v11, 2);
  }
  v18 = *(CButton **)(*(_QWORD *)&v11 + 760LL);
  if ( v18 )
  {
    CButton::SetMouseCapture(v18, 0);
    v24 = *(CBaseObject **)(*(_QWORD *)&v11 + 760LL);
    if ( v24 )
    {
      CBaseObject::Release(v24);
      *(_QWORD *)(*(_QWORD *)&v11 + 760LL) = 0LL;
    }
  }
  v19 = *(CBaseObject **)(*(_QWORD *)&v11 + 752LL);
  if ( v19 )
  {
    *(_QWORD *)(*(_QWORD *)&v11 + 752LL) = 0LL;
    (*(void (__fastcall **)(CBaseObject *))(*(_QWORD *)v19 + 96LL))(v19);
    v23 = *(_QWORD *)(*(_QWORD *)&v11 + 752LL);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23);
    CBaseObject::Release(v19);
  }
  v12 = (unsigned __int64)a2[49];
  v20 = 0;
  if ( v12 && (updated = CWindowIconic::UpdateSizeOrMargins((CWindowIconic *)v12, 0), v20 = updated, updated < 0) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x1BAEu);
  }
  else
  {
    for ( i = 0; i < a2[53].x; ++i )
    {
      v12 = (unsigned __int64)a2[50];
      v29 = *(_OWORD *)(*(_QWORD *)(v12 + 8LL * i) + 64LL);
      if ( (struct tagPOINT *)v29 == a2 && ((DWORD2(v29) - 1) & 0xFFFFFFFD) == 0 )
        CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(*(CSecondaryWindowRepresentation **)(v12 + 8LL * i));
    }
    if ( a2[58].x )
    {
      do
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a2[55] + 8LL * v6) + 88LL);
        if ( v12 )
          CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)v12, 4096);
        ++v6;
      }
      while ( v6 < a2[58].x );
    }
  }
  v6 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0xAA8u);
  }
  else
  {
LABEL_24:
    if ( v30 || a3 )
    {
      CWindowList::OnClientMarginsChange((CWindowList *)v12, (struct CWindowData *)a2);
      CWindowList::OnClientGlassChange(v26, (struct CWindowData *)a2);
      v27 = (CTopLevelWindow *)a2[46];
      if ( v27 )
        CTopLevelWindow::OnWindowScaleUpdated(v27);
      v28 = (HWND)a2[5];
      v31 = a2[6];
      v30 = 0;
      CWindowPropertyTracker::GetWindowEndPosition(
        (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24) + 48LL),
        v28,
        &v31);
      CAnimationScheduler::OnWindowPositionChange(
        *((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 24),
        (const struct CWindowData *)a2,
        v31,
        &v30);
      if ( !v30 )
        CWindowList::OnPositionChange(this, (struct CWindowData *)a2, 1);
    }
  }
  return v6;
}
