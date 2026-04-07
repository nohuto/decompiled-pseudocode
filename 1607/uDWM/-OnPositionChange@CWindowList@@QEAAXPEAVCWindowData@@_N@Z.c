/*
 * XREFs of ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180025D08 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C850 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?SetMouseCapture@CButton@@QEAAX_N@Z @ 0x1800071D8 (-SetMouseCapture@CButton@@QEAAX_N@Z.c)
 *     ?GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSnapshot@@@Z @ 0x18000EBCC (-GetStoredSnapshotNoRef@CTransitionVisualController@@QEAAJPEAUHWND__@@PEAPEAVCTransitionWindowSn.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180020590 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180034968 (-OnWindowOffsetUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18005056A (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z @ 0x18007D324 (-UpdateRectFromWindow@CProjectionBorderVisual@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z @ 0x18007ECF0 (-SetDirtyFlags@CDesktopThumbnailCVIVisual@@UEAAXK@Z.c)
 *     Template_pq @ 0x18007F0D8 (Template_pq.c)
 */

void __fastcall CWindowList::OnPositionChange(CWindowList *this, struct tagRECT *a2, char a3)
{
  int right; // eax
  int bottom; // edi
  int left; // esi
  CWindowList *v8; // r13
  float v9; // xmm2_4
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // ecx
  int v13; // edx
  void (__fastcall *v14)(CVisual *, int); // rax
  CDesktopThumbnailCVIVisual *v15; // rcx
  CButton *v16; // rcx
  volatile signed __int32 *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  CProjectionBorderVisual *v21; // rcx
  __int64 i; // rdi
  __int64 v23; // r15
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rcx
  struct CTransitionWindowSnapshot *v31; // r14
  unsigned int v32; // r8d
  __int64 v33; // r9
  _DWORD *v34; // r9
  LONG v35; // edx
  LONG v36; // r8d
  LONG v37; // eax
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // r15
  int v41; // r13d
  int v42; // r11d
  int v43; // r10d
  LONG v44; // edx
  unsigned __int8 v45; // cl
  struct _RTL_GENERIC_TABLE *v46; // rcx
  char *v47; // rax
  _UNKNOWN **v48; // rdx
  _QWORD *j; // rax
  __int64 v50; // rcx
  int v51; // eax
  CVisual *v52; // rdi
  void (__fastcall *v53)(CVisual *); // rax
  __int64 v54; // rcx
  CBaseObject *v55; // rcx
  __int64 v56; // rcx
  int started; // eax
  unsigned __int64 v58; // [rsp+30h] [rbp-79h]
  int v59; // [rsp+30h] [rbp-79h]
  struct CTransitionWindowSnapshot *v60; // [rsp+38h] [rbp-71h] BYREF
  CWindowList *v61; // [rsp+40h] [rbp-69h]
  _QWORD Buffer[2]; // [rsp+50h] [rbp-59h] BYREF
  __int128 v63; // [rsp+60h] [rbp-49h]
  __int128 v64; // [rsp+70h] [rbp-39h]
  __int64 v65; // [rsp+80h] [rbp-29h]
  char v66; // [rsp+88h] [rbp-21h]
  struct tagRECT rcDst; // [rsp+A0h] [rbp-9h] BYREF

  right = a2[19].right;
  bottom = a2[11].bottom;
  left = a2[12].left;
  v8 = this;
  v61 = this;
  if ( (double)right != 0.0 || (double)a2[19].bottom != 0.0 )
  {
    bottom -= (int)floor_0((float)right + 0.5);
    left -= (int)floor_0((float)a2[19].bottom + 0.5);
  }
  v9 = *(float *)&a2[10].bottom;
  if ( v9 != 1.0 || *(float *)&a2[11].left != 1.0 )
  {
    bottom = (int)floor_0((float)((float)bottom * v9) + 0.5);
    left = (int)floor_0((float)((float)left * *(float *)&a2[11].left) + 0.5);
  }
  if ( (double)a2[20].left != 0.0 || (double)a2[20].top != 0.0 )
  {
    bottom += (int)floor_0((float)a2[20].left + 0.5);
    left += (int)floor_0((float)a2[20].top + 0.5);
  }
  OffsetRect(a2 + 3, bottom - a2[3].left, left - a2[3].top);
  v10 = *(_QWORD *)&a2[24].left;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 744);
    v12 = *(_DWORD *)(v11 + 48);
    v13 = *(_DWORD *)(v11 + 52);
    v58 = __PAIR64__(v13, v12);
    if ( (*(_BYTE *)(v10 + 265) & 1) != 0 )
    {
      v12 = -32000;
      v58 = 0xFFFF8300FFFF8300uLL;
      v13 = -32000;
    }
    if ( v12 != *(_DWORD *)(v10 + 104) || v13 != *(_DWORD *)(v10 + 108) )
    {
      *(_QWORD *)(v10 + 104) = v58;
      v14 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v10 + 24LL);
      if ( v14 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags((CVisual *)v10, 8);
      else
        v14((CVisual *)v10, 8);
    }
    v15 = *(CDesktopThumbnailCVIVisual **)(*(_QWORD *)(v10 + 744) + 568LL);
    if ( v15 )
      CDesktopThumbnailCVIVisual::SetDirtyFlags(v15, 0x1000u);
    v16 = *(CButton **)(v10 + 760);
    if ( v16 )
    {
      CButton::SetMouseCapture(v16, 0);
      v55 = *(CBaseObject **)(v10 + 760);
      if ( v55 )
      {
        CBaseObject::Release(v55);
        *(_QWORD *)(v10 + 760) = 0LL;
      }
    }
    v17 = *(volatile signed __int32 **)(v10 + 752);
    if ( v17 )
    {
      *(_QWORD *)(v10 + 752) = 0LL;
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 96LL))(v17);
      v18 = *(_QWORD *)(v10 + 752);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 88LL))(v18);
      if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        (**(void (__fastcall ***)(volatile signed __int32 *, __int64))v17)(v17, 1LL);
    }
  }
  v19 = *(_QWORD *)&a2[24].right;
  if ( v19 )
  {
    if ( !a3
      || (v20 = *(_QWORD *)(v19 + 312), (*(_BYTE *)(v20 + 580) & 1) != 0)
      || (*(_DWORD *)(v20 + 584) & 0xFFF) == 0xFFF
      || (int)CTransitionVisualController::GetStoredSnapshotNoRef(
                *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 23),
                *(HWND *)(v20 + 40),
                &v60) < 0 )
    {
      if ( !*(_BYTE *)(v19 + 272) && !*(_DWORD *)(v19 + 356) )
        *(_OWORD *)(v19 + 292) = *(_OWORD *)(*(_QWORD *)(v19 + 312) + 48LL);
    }
    else
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_pq(v56, &UdwmSystemAnimation_DelayShowHide, *(_QWORD *)(v20 + 40), 0LL);
      started = CTopLevelWindow3D::StartAnimation(v19, 9u);
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x16Bu);
    }
  }
  v21 = *(CProjectionBorderVisual **)&a2[25].left;
  if ( v21 )
    CProjectionBorderVisual::UpdateRectFromWindow(v21, (struct CWindowData *)a2);
  for ( i = 0LL; (unsigned int)i < a2[28].left; i = (unsigned int)(i + 1) )
  {
    v54 = *(_QWORD *)(*(_QWORD *)&a2[26].right + 8 * i);
    if ( *(struct tagRECT **)(v54 + 64) == a2 && *(_DWORD *)(v54 + 72) == 1 )
      CSecondaryWindowRepresentation::OnWindowOffsetUpdated((CSecondaryWindowRepresentation *)v54);
  }
  v23 = 0LL;
  v59 = 0;
  if ( *((_DWORD *)v8 + 142) )
  {
    while ( 1 )
    {
      v24 = *(_QWORD *)(*((_QWORD *)v8 + 68) + 8 * v23);
      v25 = *(_QWORD *)(v24 + 384);
      if ( v25 )
      {
        if ( *(_QWORD *)(v24 + 120) == *(_QWORD *)&a2[7].right )
        {
          v26 = *(_QWORD *)(v25 + 288);
          if ( v26 )
          {
            v27 = *(_QWORD *)(v26 + 320);
            if ( v27 )
            {
              v28 = *(_QWORD *)&a2[2].right;
              v29 = *(_QWORD *)(v26 + 352);
              if ( v28 == v29 )
                goto LABEL_64;
              v30 = *(_QWORD *)&a2[24].left;
              v31 = *(struct CTransitionWindowSnapshot **)(v26 + 360);
              v60 = v31;
              if ( v30 )
                break;
            }
          }
        }
      }
LABEL_71:
      v23 = (unsigned int)(v23 + 1);
      v59 = v23;
      if ( (unsigned int)v23 >= *((_DWORD *)v8 + 142) )
        return;
    }
    v32 = *(_DWORD *)(v27 + 296);
    v33 = 0LL;
    if ( v32 )
    {
      while ( v28 != *(_QWORD *)(*(_QWORD *)(v27 + 272) + 8 * v33) )
      {
        v33 = (unsigned int)(v33 + 1);
        if ( (unsigned int)v33 >= v32 )
          goto LABEL_40;
      }
    }
    else
    {
LABEL_40:
      rcDst = *(struct tagRECT *)(*(_QWORD *)(v30 + 744) + 48LL);
      if ( (*(_BYTE *)(v30 + 264) & 4) != 0 )
        v34 = (_DWORD *)(v30 + 660);
      else
        v34 = (_DWORD *)(v30 + 644);
      v35 = *v34 + rcDst.left;
      rcDst.left = v35;
      v36 = rcDst.right - v34[1];
      rcDst.right = v36;
      rcDst.top += v34[2];
      v37 = rcDst.bottom - v34[3];
      rcDst.bottom = v37;
      v38 = *(_QWORD *)(v30 + 344);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v30 + 352);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v30 + 368);
          if ( v40 )
          {
            v41 = *(_DWORD *)(v30 + 628) - *v34 - *(_DWORD *)(v38 + 24);
            if ( v41 < 0 )
              v41 = 0;
            v42 = *(_DWORD *)(v30 + 632) - v34[1] - *(_DWORD *)(v39 + 24);
            if ( v42 < 0 )
              v42 = 0;
            v43 = *(_DWORD *)(v30 + 640) - v34[3] - *(_DWORD *)(v40 + 28);
            if ( v43 < 0 )
              v43 = 0;
            v44 = v41 + v35;
            v8 = v61;
            rcDst.bottom = v37 - v43;
            rcDst.left = v44;
            rcDst.right = v36 - v42;
          }
          LODWORD(v23) = v59;
        }
        v31 = v60;
      }
      v45 = a2[36].left;
      if ( (v45 & 1) == 0
        || ((unsigned __int8)~LOBYTE(a2[36].top) & (unsigned __int8)~(v45 >> 2) & 1) == 0
        || (a2[6].top & 0x20000000) != 0
        || !IntersectRect(&rcDst, &rcDst, (const RECT *)(v26 + 568)) )
      {
        goto LABEL_71;
      }
      v46 = (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165) + 8LL);
      Buffer[1] = 0LL;
      v63 = 0LL;
      v65 = -1LL;
      v66 = 0;
      v64 = 0LL;
      Buffer[0] = v31;
      v47 = (char *)RtlLookupElementGenericTable(v46, Buffer);
      if ( v47 )
        v48 = (_UNKNOWN **)(v47 + 64);
      else
        v48 = &`CWindowList::GetWindowListForDesktop'::`5'::EmptyList;
      for ( j = v48[1]; j != v48; j = (_QWORD *)j[1] )
      {
        v50 = j[5];
        if ( v50 == v29 )
          break;
        if ( v50 == *(_QWORD *)&a2[2].right )
          goto LABEL_71;
      }
    }
LABEL_64:
    v51 = *(_DWORD *)(v26 + 80);
    if ( (v51 & 0x10000) == 0 )
    {
      v52 = *(CVisual **)(v26 + 24);
      *(_DWORD *)(v26 + 80) = v51 | 0x10000;
      if ( v52 )
      {
        do
        {
          if ( (*((_BYTE *)v52 + 80) & 1) != 0 )
            break;
          v53 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v52 + 32LL);
          if ( v53 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v52);
          else
            v53(v52);
          v52 = (CVisual *)*((_QWORD *)v52 + 3);
        }
        while ( v52 );
        v8 = v61;
      }
    }
    goto LABEL_71;
  }
}
