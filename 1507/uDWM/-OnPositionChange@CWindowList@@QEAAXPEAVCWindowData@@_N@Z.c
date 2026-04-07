/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z @ 0x180010C30 (-_MoveWindowOffscreen@CTransitionVisualController@@KAXPEAVCTopLevelWindow@@_N@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x18002CFC0 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DB70 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x180003A94 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000C92C (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x18001E280 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180025A60 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x18002D260 (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034150 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x1800761B0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     Template_pq @ 0x180076624 (Template_pq.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct CWindowData *a2, char a3)
{
  CWindowList *v5; // r13
  __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  int v9; // ecx
  int v10; // edx
  void (__fastcall *v11)(CVisual *, int); // rbx
  CDesktopThumbnailCVIVisual *v12; // rcx
  CButton *v13; // rcx
  volatile signed __int32 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rsi
  __int64 i; // rbx
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  struct CTransitionWindowSnapshot *v27; // r14
  unsigned int v28; // r8d
  __int64 v29; // r9
  _DWORD *v30; // r9
  LONG v31; // edx
  LONG v32; // r8d
  LONG v33; // eax
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // r15
  int v37; // r13d
  int v38; // r11d
  int v39; // r10d
  LONG v40; // edx
  unsigned __int8 v41; // cl
  struct _RTL_GENERIC_TABLE *v42; // rcx
  char *v43; // rax
  _UNKNOWN **v44; // rdx
  _QWORD *j; // rax
  __int64 v46; // rcx
  int v47; // eax
  CVisual *v48; // rbx
  void (__fastcall *v49)(CVisual *); // rsi
  __int64 v50; // rcx
  CBaseObject *v51; // rcx
  __int64 v52; // rcx
  int started; // eax
  int v54; // [rsp+30h] [rbp-69h] BYREF
  struct CTransitionWindowSnapshot *v55; // [rsp+38h] [rbp-61h] BYREF
  int v56; // [rsp+40h] [rbp-59h] BYREF
  CWindowList *v57; // [rsp+48h] [rbp-51h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v59; // [rsp+60h] [rbp-39h]
  __int128 v60; // [rsp+70h] [rbp-29h]
  __int64 v61; // [rsp+80h] [rbp-19h]
  char v62; // [rsp+88h] [rbp-11h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp+7h] BYREF

  v57 = this;
  v5 = this;
  CWindowList::GetPhysicalPtFromLogical(this, a2, (struct tagRECT *)((char *)a2 + 188), &v56, &v54);
  OffsetRect((LPRECT)a2 + 3, v56 - *((_DWORD *)a2 + 12), v54 - *((_DWORD *)a2 + 13));
  v6 = *((_QWORD *)a2 + 46);
  if ( v6 )
  {
    v7 = (*(_BYTE *)(v6 + 265) & 1) == 0;
    v8 = *(_QWORD *)(v6 + 744);
    v9 = *(_DWORD *)(v8 + 48);
    v10 = *(_DWORD *)(v8 + 52);
    v55 = (struct CTransitionWindowSnapshot *)__PAIR64__(v10, v9);
    if ( !v7 )
    {
      v9 = -32000;
      v55 = (struct CTransitionWindowSnapshot *)0xFFFF8300FFFF8300LL;
      v10 = -32000;
    }
    if ( v9 != *(_DWORD *)(v6 + 104) || v10 != *(_DWORD *)(v6 + 108) )
    {
      *(_QWORD *)(v6 + 104) = v55;
      v11 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v6 + 24LL);
      if ( v11 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags((CVisual *)v6, 8);
      else
        v11((CVisual *)v6, 8);
    }
    v12 = *(CDesktopThumbnailCVIVisual **)(*(_QWORD *)(v6 + 744) + 544LL);
    if ( v12 )
      CDesktopThumbnailCVIVisual::SetDirtyFlags(v12, 0x1000u);
    v13 = *(CButton **)(v6 + 760);
    if ( v13 )
    {
      CButton::SetMouseCapture(v13, 0);
      v51 = *(CBaseObject **)(v6 + 760);
      if ( v51 )
      {
        CBaseObject::Release(v51);
        *(_QWORD *)(v6 + 760) = 0LL;
      }
    }
    v14 = *(volatile signed __int32 **)(v6 + 752);
    if ( v14 )
    {
      *(_QWORD *)(v6 + 752) = 0LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 96LL))(v14);
      v15 = *(_QWORD *)(v6 + 752);
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 88LL))(v15);
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v14)(v14, 1LL);
    }
  }
  v16 = *((_QWORD *)a2 + 47);
  if ( v16 )
  {
    if ( !a3
      || (v17 = *(_QWORD *)(v16 + 312), (*(_BYTE *)(v17 + 556) & 1) != 0)
      || (*(_DWORD *)(v17 + 568) & 0xFFF) == 0xFFF
      || (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 25),
                *(HWND *)(v17 + 40),
                &v55) < 0 )
    {
      if ( !*(_BYTE *)(v16 + 272) && !*(_DWORD *)(v16 + 356) )
        *(_OWORD *)(v16 + 292) = *(_OWORD *)(*(_QWORD *)(v16 + 312) + 48LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_pq(v52, &UdwmSystemAnimation_DelayShowHide, *(_QWORD *)(v17 + 40), 0LL);
      started = CTopLevelWindow3D::StartAnimation(v16, 9u);
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x1A2u);
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 106); i = (unsigned int)(i + 1) )
  {
    v50 = *(_QWORD *)(*((_QWORD *)a2 + 50) + 8 * i);
    if ( *(struct CWindowData **)(v50 + 64) == a2 && *(_DWORD *)(v50 + 72) == 1 )
      CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v50);
  }
  v19 = 0LL;
  v54 = 0;
  if ( *((_DWORD *)v5 + 142) )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)v5 + 68) + 8 * v19);
      v21 = *(_QWORD *)(v20 + 368);
      if ( v21 )
      {
        if ( *(_QWORD *)(v20 + 120) == *((_QWORD *)a2 + 15) )
        {
          v22 = *(_QWORD *)(v21 + 288);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 320);
            if ( v23 )
            {
              v24 = *((_QWORD *)a2 + 5);
              v25 = *(_QWORD *)(v22 + 352);
              if ( v24 == v25 )
                goto LABEL_56;
              v26 = *((_QWORD *)a2 + 46);
              v27 = *(struct CTransitionWindowSnapshot **)(v22 + 360);
              v55 = v27;
              if ( v26 )
                break;
            }
          }
        }
      }
LABEL_63:
      v19 = (unsigned int)(v19 + 1);
      v54 = v19;
      if ( (unsigned int)v19 >= *((_DWORD *)v5 + 142) )
        return;
    }
    v28 = *(_DWORD *)(v23 + 296);
    v29 = 0LL;
    if ( v28 )
    {
      while ( v24 != *(_QWORD *)(*(_QWORD *)(v23 + 272) + 8 * v29) )
      {
        v29 = (unsigned int)(v29 + 1);
        if ( (unsigned int)v29 >= v28 )
          goto LABEL_32;
      }
    }
    else
    {
LABEL_32:
      rcDst = *(struct tagRECT *)(*(_QWORD *)(v26 + 744) + 48LL);
      if ( (*(_BYTE *)(v26 + 264) & 4) != 0 )
        v30 = (_DWORD *)(v26 + 660);
      else
        v30 = (_DWORD *)(v26 + 644);
      v31 = *v30 + rcDst.left;
      rcDst.left = v31;
      v32 = rcDst.right - v30[1];
      rcDst.right = v32;
      rcDst.top += v30[2];
      v33 = rcDst.bottom - v30[3];
      rcDst.bottom = v33;
      v34 = *(_QWORD *)(v26 + 344);
      if ( v34 )
      {
        v35 = *(_QWORD *)(v26 + 352);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v26 + 368);
          if ( v36 )
          {
            v37 = *(_DWORD *)(v26 + 628) - *v30 - *(_DWORD *)(v34 + 24);
            if ( v37 < 0 )
              v37 = 0;
            v38 = *(_DWORD *)(v26 + 632) - v30[1] - *(_DWORD *)(v35 + 24);
            if ( v38 < 0 )
              v38 = 0;
            v39 = *(_DWORD *)(v26 + 640) - v30[3] - *(_DWORD *)(v36 + 28);
            if ( v39 < 0 )
              v39 = 0;
            v40 = v37 + v31;
            v5 = v57;
            rcDst.bottom = v33 - v39;
            rcDst.left = v40;
            rcDst.right = v32 - v38;
          }
          LODWORD(v19) = v54;
        }
        v27 = v55;
      }
      v41 = *((_BYTE *)a2 + 552);
      if ( (v41 & 1) == 0
        || ((unsigned __int8)~(v41 >> 2) & (unsigned __int8)~*((_BYTE *)a2 + 556) & 1) == 0
        || (*((_DWORD *)a2 + 25) & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v22 + 568)) )
      {
        goto LABEL_63;
      }
      v42 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167) + 8LL);
      Buffer[1] = 0LL;
      v59 = 0LL;
      v61 = -1LL;
      v62 = 0;
      v60 = 0LL;
      Buffer[0] = v27;
      v43 = (char *)RtlLookupElementGenericTable(v42, Buffer);
      if ( v43 )
        v44 = (_UNKNOWN **)(v43 + 64);
      else
        v44 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
      for ( j = v44[1]; j != v44; j = (_QWORD *)j[1] )
      {
        v46 = j[5];
        if ( v46 == v25 )
          break;
        if ( v46 == *((_QWORD *)a2 + 5) )
          goto LABEL_63;
      }
    }
LABEL_56:
    v47 = *(_DWORD *)(v22 + 80);
    if ( (v47 & 0x10000) == 0 )
    {
      v48 = *(CVisual **)(v22 + 24);
      *(_DWORD *)(v22 + 80) = v47 | 0x10000;
      if ( v48 )
      {
        do
        {
          if ( (*((_BYTE *)v48 + 80) & 1) != 0 )
            break;
          v49 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v48 + 32LL);
          if ( v49 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v48);
          else
            v49(v48);
          v48 = (CVisual *)*((_QWORD *)v48 + 3);
        }
        while ( v48 );
        v5 = v57;
      }
    }
    goto LABEL_63;
  }
}
